from scipy.stats import ranksums
import numpy as np
from statsmodels.stats.weightstats import DescrStatsW

def wilcoxon_rank_sum_test(list1, list2):
    """ Function receiving two list of numbers with the same length and performing a Wilcoxon Rank Sum Test on them with a significance level of 0.05
    The function should return a dictionary with the following keys
    - statistic: the test statistic
    - p_value: the p-value of the test
    - reject_null: a boolean indicating whether to reject the null hypothesis
    - effect_size: the effect size of the test
    - confidence_interval: a tuple with the lower and upper bounds of the confidence interval"""
    
    # Calculate the test statistic and p-value
    statistic, p_value = ranksums(list1, list2)
    # Calculate the effect size
    effect_size = (np.mean(list1) - np.mean(list2)) / np.sqrt((np.std(list1) ** 2 + np.std(list2) ** 2) / 2)
    # Calculate the confidence interval
    stats1 = DescrStatsW(list1)
    stats2 = DescrStatsW(list2)
    ci1 = stats1.tconfint_mean()
    ci2 = stats2.tconfint_mean()
    confidence_interval = (ci1[0] - ci2[1], ci1[1] - ci2[0])

    # Determine whether to reject the null hypothesis
    reject_null = p_value < 0.05

    # Create the result dictionary
    result = {
        "statistic": statistic,
        "p_value": p_value,
        "reject_null": reject_null,
        "effect_size": effect_size,
        "confidence_interval": confidence_interval
    }
    return result


if __name__ == "__main__":  
    # Test on average number of iterations
    list_sa = [1.8, 4.4, 5.3, 12.9, 15.2, 8.2, 3.9, 1.8, 4.7, 2.6, 2.8, 15.3, 19.5, 3.7, 4.1, 5.9, 2.6, 1.8, 1.0, 1.0, 2.7, 1.0, 1.0, 2.9, 3.1, 2.3, 7.1, 1.7, 1.0]
    list_ur = [1.6, 7.6, 10.6, 8.9, 14.6, 6.7, 9.6, 3.0, 1.1, 8.6,3.0, 2.2, 28.8, 17.6, 1.9, 2.9, 2.4, 2.7, 1.9, 1.0, 1.0, 1.6, 1.0, 1.0, 8.1, 4.3, 2.1, 7.3, 1.6, 1.0]

    print("Wilcoxon Rank Sum Test on average number of iterations")
    result = wilcoxon_rank_sum_test(list_sa, list_ur)
    print(result)

    # Test on times
    list_sa = [1321, 3349, 3626, 8421, 9296, 6764, 5460, 2459, 1297, 3119, 1797, 1731, 9986, 13050, 2450, 2875, 4124, 1742, 1378, 721, 739, 1699, 650, 653, 1986, 2340, 1517, 4748, 1372, 815]
    list_ur = [1146, 5441, 7589, 6372, 10452, 4797, 6873, 2148, 788, 6157, 2148, 1575, 29782, 24197, 1360, 2076, 1718, 1933, 1360, 716, 719, 1145, 716, 717, 5799, 3078, 1503, 5226, 1145, 716]

    print("Wilcoxon Rank Sum Test on times")
    result = wilcoxon_rank_sum_test(list_sa, list_ur)
    print(result)