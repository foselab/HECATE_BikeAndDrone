import csv
from pathlib import Path

import numpy as np
import pandas as pd
from scipy.stats import mannwhitneyu
from statsmodels.stats.multitest import multipletests


# ============================================================
# Configuration
# ============================================================

INPUT_FILE = Path("falsification_results.csv")
OUTPUT_FILE = Path("mann_whitney_results.csv")

print("---------------------------------")
print("Statistical test on EFFECTIVENESS")
print("---------------------------------")

# The table reports F as the number of falsifications out of 10.
TOTAL_RUNS = 10

ALPHA = 0.05

# Default comparison:
# one test for each case study × algorithm × model combination.
#
# For example:
# eBike × UR × PWM
# eBike × UR × Buck
# eBike × SA × PWM
# ...
GROUP_COLUMNS = [
    "case_study",
    "algorithm",
    "model",
]

# For separate tests for every assessment, use:
#
# GROUP_COLUMNS = [
#     "case_study",
#     "algorithm",
#     "model",
#     "test_assessment",
# ]
#
# Note that this produces only 6 HECATE observations versus
# 2 S-TaLiRo observations for each eBike assessment, and only
# 1 versus 1 for each Drone assessment.


# ============================================================
# Data loading
# ============================================================

def read_semicolon_csv(path: Path) -> pd.DataFrame:
    """
    Read the semicolon-delimited CSV.

    The provided file contains one malformed row beginning with:

        eBike;eBike;UR;HECATE;...

    If the first two fields are identical and the row contains one
    extra field, the duplicated first field is removed. Any other
    malformed row raises an error.
    """
    with path.open("r", encoding="utf-8-sig", newline="") as file:
        reader = csv.reader(file, delimiter=";")
        header = next(reader)

        rows = []

        for line_number, row in enumerate(reader, start=2):
            if len(row) != len(header):
                raise ValueError(
                    f"Malformed row at line {line_number}: "
                    f"expected {len(header)} fields, found {len(row)}.\n"
                    f"Row: {row}"
                )

            rows.append(row)

    return pd.DataFrame(rows, columns=header)


# ============================================================
# A12 effect size
# ============================================================

def vargha_delaney_a12(staliro, hecate):
    """
    Calculate Vargha-Delaney A12.

    A12 = P(Staliro > HECATE) + 0.5 * P(Staliro == HECATE)

    Therefore:
        A12 > 0.5: Staliro tends to have higher values
        A12 < 0.5: HECATE tends to have higher values
        A12 = 0.5: no tendency
    """
    staliro = np.asarray(staliro, dtype=float)
    hecate = np.asarray(hecate, dtype=float)

    if len(staliro) == 0 or len(hecate) == 0:
        return np.nan

    differences = staliro[:, None] - hecate[None, :]

    wins = np.sum(differences > 0)
    ties = np.sum(differences == 0)
    comparisons = differences.size

    return (wins + 0.5 * ties) / comparisons


def effect_size_magnitude(a12):
    """
    Classify A12 using commonly used Vargha-Delaney thresholds.

    Distance from 0.5:
        < 0.06: negligible
        < 0.14: small
        < 0.21: medium
        otherwise: large
    """
    if pd.isna(a12):
        return "not available"

    distance = abs(a12 - 0.5)

    if distance < 0.06:
        return "negligible"
    if distance < 0.14:
        return "small"
    if distance < 0.21:
        return "medium"
    return "large"


def effect_direction(a12):
    if pd.isna(a12):
        return "not available"
    if np.isclose(a12, 0.5):
        return "no tendency"
    if a12 > 0.5:
        return "S-TaLiRo higher"
    return "HECATE higher"


# ============================================================
# Prepare data
# ============================================================

df = read_semicolon_csv(INPUT_FILE)

# Clean column names and string values.
df.columns = df.columns.str.strip()

for column in [
    "case_study",
    "algorithm",
    "tool",
    "model",
    "pts_ip",
    "test_assessment",
]:
    df[column] = df[column].fillna("").astype(str).str.strip()

# Standardize tool names.
tool_mapping = {
    "hecate": "HECATE",
    "s-talirò": "S-TaLiRo",
    "s-taliro": "S-TaLiRo",
    "staliro": "S-TaLiRo",
    "s-ta-li-ro": "S-TaLiRo",
}

df["tool"] = (
    df["tool"]
    .str.lower()
    .map(tool_mapping)
    .fillna(df["tool"])
)

# Blank model values occur for the Drone case study.
df["model"] = df["model"].replace("", "not_applicable")

# Convert F to numeric.
df["F"] = pd.to_numeric(df["F"], errors="coerce")

if df["F"].isna().any():
    bad_rows = df.loc[df["F"].isna()]
    raise ValueError(
        "Some F values are missing or nonnumeric:\n"
        + bad_rows.to_string(index=False)
    )

if ((df["F"] < 0) | (df["F"] > TOTAL_RUNS)).any():
    bad_rows = df.loc[(df["F"] < 0) | (df["F"] > TOTAL_RUNS)]
    raise ValueError(
        f"F must be between 0 and {TOTAL_RUNS}:\n"
        + bad_rows.to_string(index=False)
    )

# Falsification rate as a proportion between 0 and 1.
df["falsification_rate"] = df["F"] / TOTAL_RUNS

# ============================================================
# Overall S-TaLiRo versus HECATE comparison
# ============================================================

staliro = df.loc[
    df["tool"] == "S-TaLiRo",
    "falsification_rate",
].dropna().to_numpy()

hecate = df.loc[
    df["tool"] == "HECATE",
    "falsification_rate",
].dropna().to_numpy()

test = mannwhitneyu(
    staliro,
    hecate,
    alternative="two-sided",
    method="asymptotic",
    use_continuity=True,
)

a12 = vargha_delaney_a12(staliro, hecate)

overall_result = pd.DataFrame([{
    "comparison": "S-TaLiRo vs HECATE",
    "n_staliro": len(staliro),
    "n_hecate": len(hecate),
    "mean_rate_staliro": np.mean(staliro),
    "mean_rate_hecate": np.mean(hecate),
    "median_rate_staliro": np.median(staliro),
    "median_rate_hecate": np.median(hecate),
    "rate_difference": np.mean(staliro) - np.mean(hecate),
    "U": test.statistic,
    "p_value": test.pvalue,
    "A12_staliro_vs_hecate": a12,
    "A12_hecate_vs_staliro": 1 - a12,
    "effect_direction": effect_direction(a12),
    "effect_magnitude": effect_size_magnitude(a12),
    "significant_0.05": test.pvalue < 0.05,
}])

overall_result.to_csv(
    "mann_whitney_overall.csv",
    sep=";",
    index=False,
    float_format="%.6f",
)

print(overall_result.to_string(index=False) + "\n\n")


# ============================================================
# Mann-Whitney tests
# ============================================================

results = []

for group_key, group in df.groupby(
    GROUP_COLUMNS,
    dropna=False,
    sort=True,
):
    if not isinstance(group_key, tuple):
        group_key = (group_key,)

    group_identifiers = dict(zip(GROUP_COLUMNS, group_key))

    staliro = group.loc[
        group["tool"] == "S-TaLiRo",
        "falsification_rate",
    ].dropna().to_numpy()

    hecate = group.loc[
        group["tool"] == "HECATE",
        "falsification_rate",
    ].dropna().to_numpy()

    result_row = {
        **group_identifiers,
        "n_staliro": len(staliro),
        "n_hecate": len(hecate),
        "mean_rate_staliro": (
            np.mean(staliro) if len(staliro) else np.nan
        ),
        "mean_rate_hecate": (
            np.mean(hecate) if len(hecate) else np.nan
        ),
        "median_rate_staliro": (
            np.median(staliro) if len(staliro) else np.nan
        ),
        "median_rate_hecate": (
            np.median(hecate) if len(hecate) else np.nan
        ),
        "rate_difference": (
            np.mean(staliro) - np.mean(hecate)
            if len(staliro) and len(hecate)
            else np.nan
        ),
    }

    if len(staliro) == 0 or len(hecate) == 0:
        result_row.update({
            "U": np.nan,
            "p_value": np.nan,
            "A12": np.nan,
            "effect_direction": "not available",
            "effect_magnitude": "not available",
            "status": "missing one tool",
        })
    elif len(staliro) < 2 or len(hecate) < 2:
        # A12 can still be calculated, but a test based on one
        # observation per tool is not considered meaningful here.
        a12 = vargha_delaney_a12(staliro, hecate)

        result_row.update({
            "U": np.nan,
            "p_value": np.nan,
            "A12": a12,
            "effect_direction": effect_direction(a12),
            "effect_magnitude": effect_size_magnitude(a12),
            "status": "insufficient observations",
        })
    else:
        # The data contain many ties because F is an integer count.
        # The asymptotic method applies a tie correction.
        test = mannwhitneyu(
            staliro,
            hecate,
            alternative="two-sided",
            method="asymptotic",
            use_continuity=True,
        )

        a12 = vargha_delaney_a12(staliro, hecate)

        # U / (n1*n2) should equal A12 when Staliro is the first sample.
        a12_from_u = test.statistic / (
            len(staliro) * len(hecate)
        )

        if not np.isclose(a12, a12_from_u):
            raise RuntimeError(
                f"A12 consistency check failed for {group_identifiers}"
            )

        result_row.update({
            "U": test.statistic,
            "p_value": test.pvalue,
            "A12": a12,
            "effect_direction": effect_direction(a12),
            "effect_magnitude": effect_size_magnitude(a12),
            "status": "tested",
        })

    results.append(result_row)


results = pd.DataFrame(results)


# ============================================================
# Multiple-testing correction
# ============================================================

results["p_value_holm"] = np.nan

valid_tests = results["p_value"].notna()

if valid_tests.any():
    results.loc[valid_tests, "p_value_holm"] = multipletests(
        results.loc[valid_tests, "p_value"],
        alpha=ALPHA,
        method="holm",
    )[1]

results["significant_raw"] = (
    results["p_value"].notna()
    & (results["p_value"] < ALPHA)
)

results["significant_holm"] = (
    results["p_value_holm"].notna()
    & (results["p_value_holm"] < ALPHA)
)


# ============================================================
# Save and display results
# ============================================================

results = results.sort_values(
    GROUP_COLUMNS,
    na_position="last",
).reset_index(drop=True)

# Match the input file's semicolon delimiter.
results.to_csv(
    OUTPUT_FILE,
    sep=";",
    index=False,
    float_format="%.6f",
)

display_columns = [
    *GROUP_COLUMNS,
    "n_staliro",
    "n_hecate",
    "mean_rate_staliro",
    "mean_rate_hecate",
    "U",
    "p_value",
    "p_value_holm",
    "A12",
    "effect_direction",
    "effect_magnitude",
    "significant_holm",
    "status",
]

print(results[display_columns].to_string(index=False))
print(f"\nResults saved to: {OUTPUT_FILE.resolve()}")


print("--------------------------------")
print("Data for Box-Plots on EFFICIENCY")
print("--------------------------------")

# Convert the required columns to numeric.
df["F"] = pd.to_numeric(df["F"], errors="coerce")
df["S_bar"] = pd.to_numeric(df["S_bar"], errors="coerce")

# S_bar = 0 when no falsification occurred is not a measured
# iteration count. Therefore, retain only F > 0.
boxplot_data = df.loc[
    (df["F"] > 0)
    & df["S_bar"].notna()
    & df["tool"].isin(["HECATE", "S-TaLiRo"])
].copy()


def calculate_boxplot_statistics(values):
    """
    Calculate standard Tukey boxplot statistics.

    Whiskers are the most extreme observed values inside:
        Q1 - 1.5 * IQR
        Q3 + 1.5 * IQR
    """
    values = np.asarray(values, dtype=float)
    values = values[~np.isnan(values)]

    if len(values) == 0:
        return {
            "n": 0,
            "lower_whisker": np.nan,
            "lower_quartile": np.nan,
            "median": np.nan,
            "upper_quartile": np.nan,
            "upper_whisker": np.nan,
            "average": np.nan,
            "outliers": "",
        }

    q1, median, q3 = np.percentile(
        values,
        [25, 50, 75],
        method="linear",
    )

    iqr = q3 - q1

    lower_limit = q1 - 1.5 * iqr
    upper_limit = q3 + 1.5 * iqr

    # Whiskers must be actual observed values, not the theoretical limits.
    lower_whisker = np.min(values[values >= lower_limit])
    upper_whisker = np.max(values[values <= upper_limit])

    outliers = np.sort(
        values[
            (values < lower_whisker)
            | (values > upper_whisker)
        ]
    )

    return {
        "n": len(values),
        "lower_whisker": lower_whisker,
        "lower_quartile": q1,
        "median": median,
        "upper_quartile": q3,
        "upper_whisker": upper_whisker,
        "average": np.mean(values),
        "outliers": ",".join(f"{value:g}" for value in outliers),
    }


results = []

for tool, group in boxplot_data.groupby("tool"):
    statistics = calculate_boxplot_statistics(group["S_bar"])

    results.append({
        "tool": tool,
        **statistics,
    })

boxplot_statistics = pd.DataFrame(results)

# Put the tools in the desired plotting order.
tool_order = {
    "HECATE": 0,
    "S-TaLiRo": 1,
}

boxplot_statistics["_order"] = (
    boxplot_statistics["tool"].map(tool_order)
)

boxplot_statistics = (
    boxplot_statistics
    .sort_values("_order")
    .drop(columns="_order")
    .reset_index(drop=True)
)

print(boxplot_statistics.to_string(index=False))