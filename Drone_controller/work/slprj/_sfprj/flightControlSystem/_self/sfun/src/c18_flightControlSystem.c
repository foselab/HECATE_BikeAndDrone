/* Include files */

#include "flightControlSystem_sfun.h"
#include "c18_flightControlSystem.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c18_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c18_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c18_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c18_emlrtRSI = { 9, /* lineNo */
  "Image Processing System/soluzione2/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2958"          /* pathName */
};

static emlrtRSInfo c18_b_emlrtRSI = { 70,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c18_c_emlrtRSI = { 102,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c18_d_emlrtRSI = { 39,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c18_e_emlrtRSI = { 195,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c18_f_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRSInfo c18_g_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c18_h_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c18_i_emlrtRSI = { 203,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c18_j_emlrtRSI = { 448,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c18_k_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c18_l_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c18_m_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c18_n_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c18_o_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c18_p_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c18_emlrtBCI = { 1, /* iFirst */
  40000,                               /* iLast */
  1051,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_emlrtDCI = { 1051,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_b_emlrtBCI = { 1,/* iFirst */
  40000,                               /* iLast */
  1052,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_b_emlrtDCI = { 1052,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_c_emlrtBCI = { 1,/* iFirst */
  40000,                               /* iLast */
  1066,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_c_emlrtDCI = { 1066,/* lineNo */
  47,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_d_emlrtBCI = { 1,/* iFirst */
  40000,                               /* iLast */
  1053,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_d_emlrtDCI = { 1053,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_e_emlrtBCI = { 1,/* iFirst */
  40000,                               /* iLast */
  1054,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_e_emlrtDCI = { 1054,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_f_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_f_emlrtDCI = { 1130,/* lineNo */
  18,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_g_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_g_emlrtDCI = { 1130,/* lineNo */
  34,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_h_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_h_emlrtDCI = { 1130,/* lineNo */
  50,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_i_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_i_emlrtDCI = { 1130,/* lineNo */
  66,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_j_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c18_j_emlrtDCI = { 1130,/* lineNo */
  11,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_k_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_k_emlrtDCI = { 1068,/* lineNo */
  52,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_l_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c18_l_emlrtDCI = { 1068,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_m_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_m_emlrtDCI = { 1056,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_n_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c18_n_emlrtDCI = { 1056,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_o_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_o_emlrtDCI = { 1057,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_p_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c18_p_emlrtDCI = { 1057,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_q_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_q_emlrtDCI = { 1058,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_r_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c18_r_emlrtDCI = { 1058,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_s_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_s_emlrtDCI = { 1059,/* lineNo */
  53,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_t_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c18_t_emlrtDCI = { 1059,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_u_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  54,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_u_emlrtDCI = { 54,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_v_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  66,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_v_emlrtDCI = { 66,/* lineNo */
  27,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_w_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_w_emlrtDCI = { 68,/* lineNo */
  26,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_x_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c18_x_emlrtDCI = { 68,/* lineNo */
  15,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_y_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_y_emlrtDCI = { 70,/* lineNo */
  20,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_ab_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c18_ab_emlrtDCI = { 70,/* lineNo */
  12,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_bb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_bb_emlrtDCI = { 85,/* lineNo */
  39,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_cb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_cb_emlrtDCI = { 85,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_db_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_db_emlrtDCI = { 85,/* lineNo */
  62,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c18_eb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c18_eb_emlrtDCI = { 85,/* lineNo */
  74,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void enable_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void disable_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void c18_update_jit_animation_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void c18_do_animation_call_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance, const mxArray *c18_st);
static real_T c18_emlrt_marshallIn(SFc18_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c18_nullptr, const char_T *c18_identifier);
static real_T c18_b_emlrt_marshallIn(SFc18_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c18_c_u, const emlrtMsgIdentifier *c18_parentId);
static void c18_c_emlrt_marshallIn(SFc18_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c18_nullptr, const char_T *c18_identifier,
  real_T c18_b_y[2]);
static void c18_d_emlrt_marshallIn(SFc18_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c18_c_u, const emlrtMsgIdentifier *c18_parentId,
  real_T c18_b_y[2]);
static void init_dsm_address_info(SFc18_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc18_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c18_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c18_st.tls = chartInstance->c18_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c18_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c18_doneDoubleBufferReInit = false;
  chartInstance->c18_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c18_decisionTxtEndIdx = 0U;
  static const uint32_T c18_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c18_JITStateAnimation
                        [0], &chartInstance->c18_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c18_covrtInstance, 1U, 0U, 1U,
    185U);
  covrtChartInitFcn(chartInstance->c18_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c18_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c18_decisionTxtStartIdx, &c18_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c18_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c18_covrtInstance, "", 4U, 0U, 1U, 0U, 2U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c18_covrtInstance, 4U, 0U, 0U,
                     "c18_flightControlSystem", 0, -1, 434);
  covrtEmlIfInitFcn(chartInstance->c18_covrtInstance, 4U, 0U, 0U, 74, 82, 125,
                    434, false);
  covrtEmlIfInitFcn(chartInstance->c18_covrtInstance, 4U, 0U, 1U, 299, 319, 402,
                    430, false);
  covrtEmlRelationalInitFcn(chartInstance->c18_covrtInstance, 4U, 0U, 0U, 77, 81,
    -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c18_covrtInstance, 4U, 0U, 1U, 302,
    318, -1, 5U);
}

static void mdl_cleanup_runtime_resources_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c18_covrtInstance);
}

static void enable_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c18_cv4[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c18_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c18_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c18_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c18_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  static char_T c18_cv5[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c18_b_st;
  emlrtStack c18_c_st;
  emlrtStack c18_d_st;
  emlrtStack c18_e_st;
  emlrtStack c18_f_st;
  emlrtStack c18_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c18_c_y = NULL;
  const mxArray *c18_d_y = NULL;
  const mxArray *c18_e_y = NULL;
  const mxArray *c18_f_y = NULL;
  const mxArray *c18_g_y = NULL;
  const mxArray *c18_h_y = NULL;
  real_T c18_b_y[256];
  real_T c18_localBins1[256];
  real_T c18_localBins2[256];
  real_T c18_localBins3[256];
  real_T c18_T;
  real_T c18_b_circleDetect_in;
  real_T c18_b_circleDetected;
  real_T c18_b_idx;
  real_T c18_b_k;
  real_T c18_b_t;
  real_T c18_b_theta;
  real_T c18_b_x;
  real_T c18_c_t;
  real_T c18_c_x;
  real_T c18_d;
  real_T c18_d1;
  real_T c18_d10;
  real_T c18_d11;
  real_T c18_d12;
  real_T c18_d13;
  real_T c18_d14;
  real_T c18_d15;
  real_T c18_d16;
  real_T c18_d2;
  real_T c18_d3;
  real_T c18_d4;
  real_T c18_d5;
  real_T c18_d6;
  real_T c18_d7;
  real_T c18_d8;
  real_T c18_d9;
  real_T c18_d_i;
  real_T c18_d_k;
  real_T c18_d_p;
  real_T c18_d_x;
  real_T c18_e_x;
  real_T c18_f_k;
  real_T c18_f_x;
  real_T c18_g_a;
  real_T c18_g_c;
  real_T c18_g_x;
  real_T c18_h_a;
  real_T c18_h_x;
  real_T c18_i_a;
  real_T c18_i_x;
  real_T c18_j_a;
  real_T c18_j_x;
  real_T c18_k_a;
  real_T c18_k_x;
  real_T c18_l_x;
  real_T c18_maxval;
  real_T c18_mu_t;
  real_T c18_n_a;
  real_T c18_num_elems;
  real_T c18_num_maxval;
  real_T c18_out;
  real_T c18_s;
  real_T c18_sigma_b_squared;
  real_T c18_varargin_1;
  real_T c18_whitePixels;
  real_T c18_x;
  int32_T c18_a;
  int32_T c18_b_a;
  int32_T c18_b_c;
  int32_T c18_b_i;
  int32_T c18_c;
  int32_T c18_c_a;
  int32_T c18_c_c;
  int32_T c18_c_i;
  int32_T c18_c_k;
  int32_T c18_d_a;
  int32_T c18_d_c;
  int32_T c18_e_a;
  int32_T c18_e_c;
  int32_T c18_e_k;
  int32_T c18_f_a;
  int32_T c18_f_c;
  int32_T c18_g_b;
  int32_T c18_g_k;
  int32_T c18_h_c;
  int32_T c18_h_k;
  int32_T c18_i;
  int32_T c18_i1;
  int32_T c18_i10;
  int32_T c18_i11;
  int32_T c18_i12;
  int32_T c18_i13;
  int32_T c18_i14;
  int32_T c18_i15;
  int32_T c18_i16;
  int32_T c18_i17;
  int32_T c18_i18;
  int32_T c18_i19;
  int32_T c18_i2;
  int32_T c18_i20;
  int32_T c18_i21;
  int32_T c18_i22;
  int32_T c18_i23;
  int32_T c18_i24;
  int32_T c18_i25;
  int32_T c18_i26;
  int32_T c18_i27;
  int32_T c18_i28;
  int32_T c18_i29;
  int32_T c18_i3;
  int32_T c18_i30;
  int32_T c18_i31;
  int32_T c18_i32;
  int32_T c18_i33;
  int32_T c18_i34;
  int32_T c18_i35;
  int32_T c18_i36;
  int32_T c18_i37;
  int32_T c18_i4;
  int32_T c18_i5;
  int32_T c18_i6;
  int32_T c18_i7;
  int32_T c18_i8;
  int32_T c18_i9;
  int32_T c18_i_c;
  int32_T c18_i_k;
  int32_T c18_idx;
  int32_T c18_idx1;
  int32_T c18_idx2;
  int32_T c18_idx3;
  int32_T c18_idx4;
  int32_T c18_ix;
  int32_T c18_j_c;
  int32_T c18_k;
  int32_T c18_k_c;
  int32_T c18_l_a;
  int32_T c18_m_a;
  int32_T c18_nz;
  int32_T c18_o_a;
  int32_T c18_p_a;
  int32_T c18_xoffset;
  uint8_T c18_c_u[40000];
  boolean_T c18_d_u[40000];
  boolean_T c18_w[1500];
  boolean_T c18_b;
  boolean_T c18_b1;
  boolean_T c18_b2;
  boolean_T c18_b3;
  boolean_T c18_b4;
  boolean_T c18_b5;
  boolean_T c18_b_b;
  boolean_T c18_b_p;
  boolean_T c18_c_b;
  boolean_T c18_c_p;
  boolean_T c18_d_b;
  boolean_T c18_e_b;
  boolean_T c18_exitg1;
  boolean_T c18_f_b;
  boolean_T c18_isfinite_maxval;
  boolean_T c18_p;
  c18_st.tls = chartInstance->c18_fEmlrtCtx;
  c18_b_st.prev = &c18_st;
  c18_b_st.tls = c18_st.tls;
  c18_c_st.prev = &c18_b_st;
  c18_c_st.tls = c18_b_st.tls;
  c18_d_st.prev = &c18_c_st;
  c18_d_st.tls = c18_c_st.tls;
  c18_e_st.prev = &c18_d_st;
  c18_e_st.tls = c18_d_st.tls;
  c18_f_st.prev = &c18_e_st;
  c18_f_st.tls = c18_e_st.tls;
  covrtSigUpdateFcn(chartInstance->c18_covrtInstance, 3U, *chartInstance->c18_t);
  covrtSigUpdateFcn(chartInstance->c18_covrtInstance, 2U,
                    *chartInstance->c18_theta);
  for (c18_i = 0; c18_i < 40000; c18_i++) {
    covrtSigUpdateFcn(chartInstance->c18_covrtInstance, 1U,
                      (*chartInstance->c18_b_u)[c18_i]);
  }

  covrtSigUpdateFcn(chartInstance->c18_covrtInstance, 0U,
                    *chartInstance->c18_circleDetect_in);
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c18_JITTransitionAnimation[0] = 0U;
  chartInstance->c18_sfEvent = CALL_EVENT;
  c18_b_circleDetect_in = *chartInstance->c18_circleDetect_in;
  for (c18_i1 = 0; c18_i1 < 40000; c18_i1++) {
    chartInstance->c18_u[c18_i1] = (*chartInstance->c18_b_u)[c18_i1];
  }

  c18_b_theta = *chartInstance->c18_theta;
  c18_b_t = *chartInstance->c18_t;
  covrtEmlFcnEval(chartInstance->c18_covrtInstance, 4U, 0, 0);
  if (covrtEmlIfEval(chartInstance->c18_covrtInstance, 4U, 0, 0,
                     covrtRelationalopUpdateFcn(chartInstance->c18_covrtInstance,
        4U, 0U, 0U, c18_b_t, 10.0, -1, 2U, c18_b_t < 10.0))) {
    c18_b_circleDetected = 0.0;
    (*chartInstance->c18_y)[0] = 0.0;
    (*chartInstance->c18_y)[1] = c18_b_theta;
  } else {
    c18_b_circleDetected = c18_b_circleDetect_in;
    c18_b_st.site = &c18_emlrtRSI;
    c18_c_st.site = &c18_b_emlrtRSI;
    c18_d_st.site = &c18_c_emlrtRSI;
    c18_e_st.site = &c18_d_emlrtRSI;
    c18_f_st.site = &c18_e_emlrtRSI;
    grayto8_real64(&chartInstance->c18_u[0], &c18_c_u[0], 40000.0);
    c18_d_st.site = &c18_c_emlrtRSI;
    c18_e_st.site = &c18_g_emlrtRSI;
    c18_f_st.site = &c18_h_emlrtRSI;
    c18_out = 1.0;
    getnumcores(&c18_out);
    c18_f_st.site = &c18_i_emlrtRSI;
    memset(&c18_b_y[0], 0, sizeof(real_T) << 8);
    memset(&c18_localBins1[0], 0, sizeof(real_T) << 8);
    memset(&c18_localBins2[0], 0, sizeof(real_T) << 8);
    memset(&c18_localBins3[0], 0, sizeof(real_T) << 8);
    for (c18_b_i = 1; c18_b_i + 3 <= 40000; c18_b_i += 4) {
      c18_d = (real_T)c18_b_i;
      if (c18_d != (real_T)(int32_T)muDoubleScalarFloor(c18_d)) {
        emlrtIntegerCheckR2012b(c18_d, &c18_emlrtDCI, &c18_f_st);
      }

      c18_i3 = (int32_T)muDoubleScalarFloor(c18_d);
      if ((c18_i3 < 1) || (c18_i3 > 40000)) {
        emlrtDynamicBoundsCheckR2012b(c18_i3, 1, 40000, &c18_emlrtBCI, &c18_f_st);
      }

      c18_idx1 = c18_c_u[c18_i3 - 1];
      c18_d2 = (real_T)(c18_b_i + 1);
      if (c18_d2 != (real_T)(int32_T)muDoubleScalarFloor(c18_d2)) {
        emlrtIntegerCheckR2012b(c18_d2, &c18_b_emlrtDCI, &c18_f_st);
      }

      c18_i6 = (int32_T)muDoubleScalarFloor(c18_d2);
      if ((c18_i6 < 1) || (c18_i6 > 40000)) {
        emlrtDynamicBoundsCheckR2012b(c18_i6, 1, 40000, &c18_b_emlrtBCI,
          &c18_f_st);
      }

      c18_idx2 = c18_c_u[c18_i6 - 1];
      c18_d4 = (real_T)(c18_b_i + 2);
      if (c18_d4 != (real_T)(int32_T)muDoubleScalarFloor(c18_d4)) {
        emlrtIntegerCheckR2012b(c18_d4, &c18_d_emlrtDCI, &c18_f_st);
      }

      c18_i10 = (int32_T)muDoubleScalarFloor(c18_d4);
      if ((c18_i10 < 1) || (c18_i10 > 40000)) {
        emlrtDynamicBoundsCheckR2012b(c18_i10, 1, 40000, &c18_d_emlrtBCI,
          &c18_f_st);
      }

      c18_idx3 = c18_c_u[c18_i10 - 1];
      c18_d6 = (real_T)(c18_b_i + 3);
      if (c18_d6 != (real_T)(int32_T)muDoubleScalarFloor(c18_d6)) {
        emlrtIntegerCheckR2012b(c18_d6, &c18_e_emlrtDCI, &c18_f_st);
      }

      c18_i13 = (int32_T)muDoubleScalarFloor(c18_d6);
      if ((c18_i13 < 1) || (c18_i13 > 40000)) {
        emlrtDynamicBoundsCheckR2012b(c18_i13, 1, 40000, &c18_e_emlrtBCI,
          &c18_f_st);
      }

      c18_idx4 = c18_c_u[c18_i13 - 1];
      c18_c_a = c18_idx1 + 1;
      c18_c_c = c18_c_a;
      c18_d_a = c18_idx1 + 1;
      c18_d_c = c18_d_a;
      c18_d7 = (real_T)c18_d_c;
      if (c18_d7 != (real_T)(int32_T)muDoubleScalarFloor(c18_d7)) {
        emlrtIntegerCheckR2012b(c18_d7, &c18_m_emlrtDCI, &c18_f_st);
      }

      c18_i16 = (int32_T)muDoubleScalarFloor(c18_d7);
      if ((c18_i16 < 1) || (c18_i16 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i16, 1, 256, &c18_m_emlrtBCI,
          &c18_f_st);
      }

      c18_d8 = (real_T)c18_c_c;
      if (c18_d8 != (real_T)(int32_T)muDoubleScalarFloor(c18_d8)) {
        emlrtIntegerCheckR2012b(c18_d8, &c18_n_emlrtDCI, &c18_f_st);
      }

      c18_i18 = (int32_T)muDoubleScalarFloor(c18_d8);
      if ((c18_i18 < 1) || (c18_i18 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i18, 1, 256, &c18_n_emlrtBCI,
          &c18_f_st);
      }

      c18_localBins1[c18_i18 - 1] = c18_localBins1[c18_i16 - 1] + 1.0;
      c18_e_a = c18_idx2 + 1;
      c18_e_c = c18_e_a;
      c18_f_a = c18_idx2 + 1;
      c18_f_c = c18_f_a;
      c18_d10 = (real_T)c18_f_c;
      if (c18_d10 != (real_T)(int32_T)muDoubleScalarFloor(c18_d10)) {
        emlrtIntegerCheckR2012b(c18_d10, &c18_o_emlrtDCI, &c18_f_st);
      }

      c18_i23 = (int32_T)muDoubleScalarFloor(c18_d10);
      if ((c18_i23 < 1) || (c18_i23 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i23, 1, 256, &c18_o_emlrtBCI,
          &c18_f_st);
      }

      c18_d12 = (real_T)c18_e_c;
      if (c18_d12 != (real_T)(int32_T)muDoubleScalarFloor(c18_d12)) {
        emlrtIntegerCheckR2012b(c18_d12, &c18_p_emlrtDCI, &c18_f_st);
      }

      c18_i29 = (int32_T)muDoubleScalarFloor(c18_d12);
      if ((c18_i29 < 1) || (c18_i29 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i29, 1, 256, &c18_p_emlrtBCI,
          &c18_f_st);
      }

      c18_localBins2[c18_i29 - 1] = c18_localBins2[c18_i23 - 1] + 1.0;
      c18_l_a = c18_idx3 + 1;
      c18_h_c = c18_l_a;
      c18_m_a = c18_idx3 + 1;
      c18_i_c = c18_m_a;
      c18_d13 = (real_T)c18_i_c;
      if (c18_d13 != (real_T)(int32_T)muDoubleScalarFloor(c18_d13)) {
        emlrtIntegerCheckR2012b(c18_d13, &c18_q_emlrtDCI, &c18_f_st);
      }

      c18_i34 = (int32_T)muDoubleScalarFloor(c18_d13);
      if ((c18_i34 < 1) || (c18_i34 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i34, 1, 256, &c18_q_emlrtBCI,
          &c18_f_st);
      }

      c18_d14 = (real_T)c18_h_c;
      if (c18_d14 != (real_T)(int32_T)muDoubleScalarFloor(c18_d14)) {
        emlrtIntegerCheckR2012b(c18_d14, &c18_r_emlrtDCI, &c18_f_st);
      }

      c18_i35 = (int32_T)muDoubleScalarFloor(c18_d14);
      if ((c18_i35 < 1) || (c18_i35 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i35, 1, 256, &c18_r_emlrtBCI,
          &c18_f_st);
      }

      c18_localBins3[c18_i35 - 1] = c18_localBins3[c18_i34 - 1] + 1.0;
      c18_o_a = c18_idx4 + 1;
      c18_j_c = c18_o_a;
      c18_p_a = c18_idx4 + 1;
      c18_k_c = c18_p_a;
      c18_d15 = (real_T)c18_k_c;
      if (c18_d15 != (real_T)(int32_T)muDoubleScalarFloor(c18_d15)) {
        emlrtIntegerCheckR2012b(c18_d15, &c18_s_emlrtDCI, &c18_f_st);
      }

      c18_i36 = (int32_T)muDoubleScalarFloor(c18_d15);
      if ((c18_i36 < 1) || (c18_i36 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i36, 1, 256, &c18_s_emlrtBCI,
          &c18_f_st);
      }

      c18_d16 = (real_T)c18_j_c;
      if (c18_d16 != (real_T)(int32_T)muDoubleScalarFloor(c18_d16)) {
        emlrtIntegerCheckR2012b(c18_d16, &c18_t_emlrtDCI, &c18_f_st);
      }

      c18_i37 = (int32_T)muDoubleScalarFloor(c18_d16);
      if ((c18_i37 < 1) || (c18_i37 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i37, 1, 256, &c18_t_emlrtBCI,
          &c18_f_st);
      }

      c18_b_y[c18_i37 - 1] = c18_b_y[c18_i36 - 1] + 1.0;
    }

    while (c18_b_i <= 40000) {
      c18_d1 = (real_T)c18_b_i;
      if (c18_d1 != (real_T)(int32_T)muDoubleScalarFloor(c18_d1)) {
        emlrtIntegerCheckR2012b(c18_d1, &c18_c_emlrtDCI, &c18_f_st);
      }

      c18_i4 = (int32_T)muDoubleScalarFloor(c18_d1);
      if ((c18_i4 < 1) || (c18_i4 > 40000)) {
        emlrtDynamicBoundsCheckR2012b(c18_i4, 1, 40000, &c18_c_emlrtBCI,
          &c18_f_st);
      }

      c18_idx = c18_c_u[c18_i4 - 1];
      c18_a = c18_idx + 1;
      c18_c = c18_a;
      c18_b_a = c18_idx + 1;
      c18_b_c = c18_b_a;
      c18_d3 = (real_T)c18_b_c;
      if (c18_d3 != (real_T)(int32_T)muDoubleScalarFloor(c18_d3)) {
        emlrtIntegerCheckR2012b(c18_d3, &c18_k_emlrtDCI, &c18_f_st);
      }

      c18_i8 = (int32_T)muDoubleScalarFloor(c18_d3);
      if ((c18_i8 < 1) || (c18_i8 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i8, 1, 256, &c18_k_emlrtBCI, &c18_f_st);
      }

      c18_d5 = (real_T)c18_c;
      if (c18_d5 != (real_T)(int32_T)muDoubleScalarFloor(c18_d5)) {
        emlrtIntegerCheckR2012b(c18_d5, &c18_l_emlrtDCI, &c18_f_st);
      }

      c18_i12 = (int32_T)muDoubleScalarFloor(c18_d5);
      if ((c18_i12 < 1) || (c18_i12 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i12, 1, 256, &c18_l_emlrtBCI,
          &c18_f_st);
      }

      c18_b_y[c18_i12 - 1] = c18_b_y[c18_i8 - 1] + 1.0;
      c18_b_i++;
    }

    for (c18_c_i = 0; c18_c_i < 256; c18_c_i++) {
      c18_d_i = 1.0 + (real_T)c18_c_i;
      if (c18_d_i != (real_T)(int32_T)muDoubleScalarFloor(c18_d_i)) {
        emlrtIntegerCheckR2012b(c18_d_i, &c18_f_emlrtDCI, &c18_f_st);
      }

      c18_i5 = (int32_T)c18_d_i;
      if ((c18_i5 < 1) || (c18_i5 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i5, 1, 256, &c18_f_emlrtBCI, &c18_f_st);
      }

      if (c18_d_i != (real_T)(int32_T)muDoubleScalarFloor(c18_d_i)) {
        emlrtIntegerCheckR2012b(c18_d_i, &c18_g_emlrtDCI, &c18_f_st);
      }

      c18_i7 = (int32_T)c18_d_i;
      if ((c18_i7 < 1) || (c18_i7 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i7, 1, 256, &c18_g_emlrtBCI, &c18_f_st);
      }

      if (c18_d_i != (real_T)(int32_T)muDoubleScalarFloor(c18_d_i)) {
        emlrtIntegerCheckR2012b(c18_d_i, &c18_h_emlrtDCI, &c18_f_st);
      }

      c18_i9 = (int32_T)c18_d_i;
      if ((c18_i9 < 1) || (c18_i9 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i9, 1, 256, &c18_h_emlrtBCI, &c18_f_st);
      }

      if (c18_d_i != (real_T)(int32_T)muDoubleScalarFloor(c18_d_i)) {
        emlrtIntegerCheckR2012b(c18_d_i, &c18_i_emlrtDCI, &c18_f_st);
      }

      c18_i11 = (int32_T)c18_d_i;
      if ((c18_i11 < 1) || (c18_i11 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i11, 1, 256, &c18_i_emlrtBCI,
          &c18_f_st);
      }

      if (c18_d_i != (real_T)(int32_T)muDoubleScalarFloor(c18_d_i)) {
        emlrtIntegerCheckR2012b(c18_d_i, &c18_j_emlrtDCI, &c18_f_st);
      }

      c18_i14 = (int32_T)c18_d_i;
      if ((c18_i14 < 1) || (c18_i14 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i14, 1, 256, &c18_j_emlrtBCI,
          &c18_f_st);
      }

      c18_b_y[c18_i14 - 1] = ((c18_b_y[c18_i5 - 1] + c18_localBins1[c18_i7 - 1])
        + c18_localBins2[c18_i9 - 1]) + c18_localBins3[c18_i11 - 1];
    }

    c18_d_st.site = &c18_c_emlrtRSI;
    c18_e_st.site = &c18_l_emlrtRSI;
    c18_f_st.site = &c18_n_emlrtRSI;
    c18_p = true;
    c18_k = 0;
    c18_exitg1 = false;
    while ((!c18_exitg1) && (c18_k < 256)) {
      c18_b_k = 1.0 + (real_T)c18_k;
      c18_x = c18_b_y[(int32_T)c18_b_k - 1];
      c18_b_x = c18_x;
      c18_b_b = muDoubleScalarIsInf(c18_b_x);
      c18_b1 = !c18_b_b;
      c18_c_x = c18_x;
      c18_c_b = muDoubleScalarIsNaN(c18_c_x);
      c18_b2 = !c18_c_b;
      c18_d_b = (c18_b1 && c18_b2);
      if (c18_d_b) {
        c18_k++;
      } else {
        c18_p = false;
        c18_exitg1 = true;
      }
    }

    if (c18_p) {
      c18_b = true;
    } else {
      c18_b = false;
    }

    if (!c18_b) {
      c18_c_y = NULL;
      sf_mex_assign(&c18_c_y, sf_mex_create("y", c18_cv, 10, 0U, 1, 0U, 2, 1, 32),
                    false);
      c18_d_y = NULL;
      sf_mex_assign(&c18_d_y, sf_mex_create("y", c18_cv1, 10, 0U, 1, 0U, 2, 1,
        46), false);
      c18_e_y = NULL;
      sf_mex_assign(&c18_e_y, sf_mex_create("y", c18_cv2, 10, 0U, 1, 0U, 2, 1, 6),
                    false);
      sf_mex_call(&c18_f_st, &c18_emlrtMCI, "error", 0U, 2U, 14, c18_c_y, 14,
                  sf_mex_call(&c18_f_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c18_f_st, NULL, "message", 1U, 2U, 14, c18_d_y, 14, c18_e_y)));
    }

    c18_f_st.site = &c18_n_emlrtRSI;
    c18_b_p = true;
    c18_c_k = 0;
    c18_exitg1 = false;
    while ((!c18_exitg1) && (c18_c_k < 256)) {
      c18_d_k = 1.0 + (real_T)c18_c_k;
      c18_d_x = c18_b_y[(int32_T)c18_d_k - 1];
      c18_c_p = !(c18_d_x < 0.0);
      if (c18_c_p) {
        c18_c_k++;
      } else {
        c18_b_p = false;
        c18_exitg1 = true;
      }
    }

    if (c18_b_p) {
      c18_b3 = true;
    } else {
      c18_b3 = false;
    }

    if (!c18_b3) {
      c18_f_y = NULL;
      sf_mex_assign(&c18_f_y, sf_mex_create("y", c18_cv3, 10, 0U, 1, 0U, 2, 1,
        37), false);
      c18_g_y = NULL;
      sf_mex_assign(&c18_g_y, sf_mex_create("y", c18_cv4, 10, 0U, 1, 0U, 2, 1,
        51), false);
      c18_h_y = NULL;
      sf_mex_assign(&c18_h_y, sf_mex_create("y", c18_cv5, 10, 0U, 1, 0U, 2, 1, 6),
                    false);
      sf_mex_call(&c18_f_st, &c18_b_emlrtMCI, "error", 0U, 2U, 14, c18_f_y, 14,
                  sf_mex_call(&c18_f_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c18_f_st, NULL, "message", 1U, 2U, 14, c18_g_y, 14, c18_h_y)));
    }

    c18_num_elems = 0.0;
    for (c18_e_k = 0; c18_e_k < 256; c18_e_k++) {
      c18_f_k = 1.0 + (real_T)c18_e_k;
      if (c18_f_k != (real_T)(int32_T)muDoubleScalarFloor(c18_f_k)) {
        emlrtIntegerCheckR2012b(c18_f_k, &c18_u_emlrtDCI, &c18_d_st);
      }

      c18_i15 = (int32_T)c18_f_k;
      if ((c18_i15 < 1) || (c18_i15 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i15, 1, 256, &c18_u_emlrtBCI,
          &c18_d_st);
      }

      c18_num_elems += c18_b_y[c18_i15 - 1];
    }

    c18_localBins1[0] = c18_b_y[0] / c18_num_elems;
    c18_localBins2[0] = c18_localBins1[0];
    for (c18_g_k = 0; c18_g_k < 255; c18_g_k++) {
      c18_f_k = 2.0 + (real_T)c18_g_k;
      if (c18_f_k != (real_T)(int32_T)muDoubleScalarFloor(c18_f_k)) {
        emlrtIntegerCheckR2012b(c18_f_k, &c18_v_emlrtDCI, &c18_d_st);
      }

      c18_i17 = (int32_T)c18_f_k;
      if ((c18_i17 < 1) || (c18_i17 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i17, 1, 256, &c18_v_emlrtBCI,
          &c18_d_st);
      }

      c18_d_p = c18_b_y[c18_i17 - 1] / c18_num_elems;
      c18_d9 = c18_f_k - 1.0;
      if (c18_d9 != (real_T)(int32_T)muDoubleScalarFloor(c18_d9)) {
        emlrtIntegerCheckR2012b(c18_d9, &c18_w_emlrtDCI, &c18_d_st);
      }

      c18_i20 = (int32_T)c18_d9;
      if ((c18_i20 < 1) || (c18_i20 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i20, 1, 256, &c18_w_emlrtBCI,
          &c18_d_st);
      }

      if (c18_f_k != (real_T)(int32_T)muDoubleScalarFloor(c18_f_k)) {
        emlrtIntegerCheckR2012b(c18_f_k, &c18_x_emlrtDCI, &c18_d_st);
      }

      c18_i22 = (int32_T)c18_f_k;
      if ((c18_i22 < 1) || (c18_i22 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i22, 1, 256, &c18_x_emlrtBCI,
          &c18_d_st);
      }

      c18_localBins1[c18_i22 - 1] = c18_localBins1[c18_i20 - 1] + c18_d_p;
      c18_d11 = c18_f_k - 1.0;
      if (c18_d11 != (real_T)(int32_T)muDoubleScalarFloor(c18_d11)) {
        emlrtIntegerCheckR2012b(c18_d11, &c18_y_emlrtDCI, &c18_d_st);
      }

      c18_i28 = (int32_T)c18_d11;
      if ((c18_i28 < 1) || (c18_i28 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i28, 1, 256, &c18_y_emlrtBCI,
          &c18_d_st);
      }

      if (c18_f_k != (real_T)(int32_T)muDoubleScalarFloor(c18_f_k)) {
        emlrtIntegerCheckR2012b(c18_f_k, &c18_ab_emlrtDCI, &c18_d_st);
      }

      c18_i32 = (int32_T)c18_f_k;
      if ((c18_i32 < 1) || (c18_i32 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i32, 1, 256, &c18_ab_emlrtBCI,
          &c18_d_st);
      }

      c18_localBins2[c18_i32 - 1] = c18_localBins2[c18_i28 - 1] + c18_d_p *
        c18_f_k;
    }

    c18_mu_t = c18_localBins2[255];
    c18_maxval = rtMinusInf;
    c18_b_idx = 0.0;
    c18_num_maxval = 0.0;
    for (c18_h_k = 0; c18_h_k < 255; c18_h_k++) {
      c18_f_k = 1.0 + (real_T)c18_h_k;
      c18_e_st.site = &c18_m_emlrtRSI;
      if (c18_f_k != (real_T)(int32_T)muDoubleScalarFloor(c18_f_k)) {
        emlrtIntegerCheckR2012b(c18_f_k, &c18_bb_emlrtDCI, &c18_e_st);
      }

      c18_i19 = (int32_T)c18_f_k;
      if ((c18_i19 < 1) || (c18_i19 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i19, 1, 256, &c18_bb_emlrtBCI,
          &c18_e_st);
      }

      if (c18_f_k != (real_T)(int32_T)muDoubleScalarFloor(c18_f_k)) {
        emlrtIntegerCheckR2012b(c18_f_k, &c18_cb_emlrtDCI, &c18_e_st);
      }

      c18_i21 = (int32_T)c18_f_k;
      if ((c18_i21 < 1) || (c18_i21 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i21, 1, 256, &c18_cb_emlrtBCI,
          &c18_e_st);
      }

      c18_g_a = c18_mu_t * c18_localBins1[c18_i19 - 1] - c18_localBins2[c18_i21
        - 1];
      c18_f_st.site = &c18_o_emlrtRSI;
      c18_h_a = c18_g_a;
      c18_i_a = c18_h_a;
      c18_j_a = c18_i_a;
      c18_k_a = c18_j_a;
      c18_g_c = c18_k_a * c18_k_a;
      if (c18_f_k != (real_T)(int32_T)muDoubleScalarFloor(c18_f_k)) {
        emlrtIntegerCheckR2012b(c18_f_k, &c18_db_emlrtDCI, &c18_d_st);
      }

      c18_i31 = (int32_T)c18_f_k;
      if ((c18_i31 < 1) || (c18_i31 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i31, 1, 256, &c18_db_emlrtBCI,
          &c18_d_st);
      }

      if (c18_f_k != (real_T)(int32_T)muDoubleScalarFloor(c18_f_k)) {
        emlrtIntegerCheckR2012b(c18_f_k, &c18_eb_emlrtDCI, &c18_d_st);
      }

      c18_i33 = (int32_T)c18_f_k;
      if ((c18_i33 < 1) || (c18_i33 > 256)) {
        emlrtDynamicBoundsCheckR2012b(c18_i33, 1, 256, &c18_eb_emlrtBCI,
          &c18_d_st);
      }

      c18_sigma_b_squared = c18_g_c / (c18_localBins1[c18_i31 - 1] * (1.0 -
        c18_localBins1[c18_i33 - 1]));
      if (c18_sigma_b_squared > c18_maxval) {
        c18_maxval = c18_sigma_b_squared;
        c18_b_idx = c18_f_k;
        c18_num_maxval = 1.0;
      } else if (c18_sigma_b_squared == c18_maxval) {
        c18_b_idx += c18_f_k;
        c18_num_maxval++;
      }
    }

    c18_e_x = c18_maxval;
    c18_f_x = c18_e_x;
    c18_e_b = muDoubleScalarIsInf(c18_f_x);
    c18_b4 = !c18_e_b;
    c18_g_x = c18_e_x;
    c18_f_b = muDoubleScalarIsNaN(c18_g_x);
    c18_b5 = !c18_f_b;
    c18_isfinite_maxval = (c18_b4 && c18_b5);
    if (c18_isfinite_maxval) {
      c18_b_idx /= c18_num_maxval;
      c18_c_t = (c18_b_idx - 1.0) / 255.0;
    } else {
      c18_c_t = 0.0;
    }

    c18_T = c18_c_t;
    for (c18_i24 = 0; c18_i24 < 40000; c18_i24++) {
      c18_d_u[c18_i24] = (chartInstance->c18_u[c18_i24] > c18_T);
    }

    c18_i25 = 0;
    c18_i26 = 0;
    for (c18_i27 = 0; c18_i27 < 30; c18_i27++) {
      for (c18_i30 = 0; c18_i30 < 50; c18_i30++) {
        c18_w[c18_i30 + c18_i25] = c18_d_u[(c18_i30 + c18_i26) + 17040];
      }

      c18_i25 += 50;
      c18_i26 += 200;
    }

    c18_nz = (int32_T)c18_w[0];
    for (c18_i_k = 0; c18_i_k < 1499; c18_i_k++) {
      c18_xoffset = c18_i_k;
      c18_ix = c18_xoffset;
      c18_g_b = (int32_T)c18_w[c18_ix + 1];
      c18_nz += (c18_g_b != 0);
    }

    c18_whitePixels = (real_T)c18_nz;
    if (covrtEmlIfEval(chartInstance->c18_covrtInstance, 4U, 0, 1,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c18_covrtInstance, 4U, 0U, 1U,
                        c18_whitePixels, 100.0, -1, 5U, c18_whitePixels >= 100.0)))
    {
      c18_varargin_1 = (c18_whitePixels - 100.0) * 0.0033333333333333335;
      c18_h_x = c18_varargin_1;
      c18_i_x = c18_h_x;
      c18_j_x = c18_i_x;
      c18_n_a = c18_j_x;
      c18_k_x = c18_n_a;
      c18_l_x = c18_k_x;
      c18_s = muDoubleScalarMax(c18_l_x, 0.4);
      (*chartInstance->c18_y)[0] = c18_s;
      (*chartInstance->c18_y)[1] = c18_b_theta;
    } else {
      (*chartInstance->c18_y)[0] = 0.0;
      (*chartInstance->c18_y)[1] = c18_b_theta;
    }
  }

  *chartInstance->c18_circleDetected = c18_b_circleDetected;
  for (c18_i2 = 0; c18_i2 < 2; c18_i2++) {
    covrtSigUpdateFcn(chartInstance->c18_covrtInstance, 4U,
                      (*chartInstance->c18_y)[c18_i2]);
  }

  covrtSigUpdateFcn(chartInstance->c18_covrtInstance, 5U,
                    *chartInstance->c18_circleDetected);
}

static void ext_mode_exec_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c18_update_jit_animation_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c18_do_animation_call_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c18_b_y = NULL;
  const mxArray *c18_c_y = NULL;
  const mxArray *c18_d_y = NULL;
  const mxArray *c18_st;
  c18_st = NULL;
  c18_st = NULL;
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_createcellmatrix(2, 1), false);
  c18_c_y = NULL;
  sf_mex_assign(&c18_c_y, sf_mex_create("y", chartInstance->c18_circleDetected,
    0, 0U, 0, 0U, 0), false);
  sf_mex_setcell(c18_b_y, 0, c18_c_y);
  c18_d_y = NULL;
  sf_mex_assign(&c18_d_y, sf_mex_create("y", *chartInstance->c18_y, 0, 0U, 1, 0U,
    2, 1, 2), false);
  sf_mex_setcell(c18_b_y, 1, c18_d_y);
  sf_mex_assign(&c18_st, c18_b_y, false);
  return c18_st;
}

static void set_sim_state_c18_flightControlSystem
  (SFc18_flightControlSystemInstanceStruct *chartInstance, const mxArray *c18_st)
{
  const mxArray *c18_c_u;
  real_T c18_dv[2];
  int32_T c18_i;
  chartInstance->c18_doneDoubleBufferReInit = true;
  c18_c_u = sf_mex_dup(c18_st);
  *chartInstance->c18_circleDetected = c18_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c18_c_u, 0)), "circleDetected");
  c18_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c18_c_u, 1)),
    "y", c18_dv);
  for (c18_i = 0; c18_i < 2; c18_i++) {
    (*chartInstance->c18_y)[c18_i] = c18_dv[c18_i];
  }

  sf_mex_destroy(&c18_c_u);
  sf_mex_destroy(&c18_st);
}

const mxArray *sf_c18_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c18_nameCaptureInfo = NULL;
  c18_nameCaptureInfo = NULL;
  sf_mex_assign(&c18_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c18_nameCaptureInfo;
}

static real_T c18_emlrt_marshallIn(SFc18_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c18_nullptr, const char_T *c18_identifier)
{
  emlrtMsgIdentifier c18_thisId;
  real_T c18_b_y;
  c18_thisId.fIdentifier = (const char_T *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_b_y = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_nullptr),
    &c18_thisId);
  sf_mex_destroy(&c18_nullptr);
  return c18_b_y;
}

static real_T c18_b_emlrt_marshallIn(SFc18_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c18_c_u, const emlrtMsgIdentifier *c18_parentId)
{
  real_T c18_b_y;
  real_T c18_d;
  (void)chartInstance;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_c_u), &c18_d, 1, 0, 0U, 0, 0U, 0);
  c18_b_y = c18_d;
  sf_mex_destroy(&c18_c_u);
  return c18_b_y;
}

static void c18_c_emlrt_marshallIn(SFc18_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c18_nullptr, const char_T *c18_identifier,
  real_T c18_b_y[2])
{
  emlrtMsgIdentifier c18_thisId;
  c18_thisId.fIdentifier = (const char_T *)c18_identifier;
  c18_thisId.fParent = NULL;
  c18_thisId.bParentIsCell = false;
  c18_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c18_nullptr), &c18_thisId,
    c18_b_y);
  sf_mex_destroy(&c18_nullptr);
}

static void c18_d_emlrt_marshallIn(SFc18_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c18_c_u, const emlrtMsgIdentifier *c18_parentId,
  real_T c18_b_y[2])
{
  real_T c18_dv[2];
  int32_T c18_i;
  (void)chartInstance;
  sf_mex_import(c18_parentId, sf_mex_dup(c18_c_u), c18_dv, 1, 0, 0U, 1, 0U, 2, 1,
                2);
  for (c18_i = 0; c18_i < 2; c18_i++) {
    c18_b_y[c18_i] = c18_dv[c18_i];
  }

  sf_mex_destroy(&c18_c_u);
}

static void init_dsm_address_info(SFc18_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc18_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c18_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c18_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c18_circleDetect_in = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c18_b_u = (real_T (*)[40000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c18_y = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c18_theta = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c18_t = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    3);
  chartInstance->c18_circleDetected = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c18_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(990874975U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3068677199U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3290283189U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3185613252U);
}

mxArray *sf_c18_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c18_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("grayto8_real64");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c18_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c18_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Sg4g/Q5I+lmw6OdD0i8A5SdnFiXnpLqklqQml6"
    "SmQMRg4TVw/hEB+8eAgH8YUfzDyFDJgHA/AMaBFkk="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c18_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sB70lU30CzHeGz7mAPWrMUB";
}

static void sf_opaque_initialize_c18_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c18_flightControlSystem
    ((SFc18_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c18_flightControlSystem((SFc18_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c18_flightControlSystem(void *chartInstanceVar)
{
  enable_c18_flightControlSystem((SFc18_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c18_flightControlSystem(void *chartInstanceVar)
{
  disable_c18_flightControlSystem((SFc18_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c18_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c18_flightControlSystem((SFc18_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c18_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c18_flightControlSystem
    ((SFc18_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c18_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c18_flightControlSystem((SFc18_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c18_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc18_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c18_flightControlSystem
      ((SFc18_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c18_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c18_flightControlSystem((SFc18_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc18_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c18_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c18_flightControlSystem((SFc18_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c18_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c18_flightControlSystem
      ((SFc18_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c18_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrdWN1u40QUnkShYtFSFQmJlXYRKyQkbpC6W1a7Fwja5qcb1NCA012JGzSxj+NRx2Pv/CRNn4R",
    "77nkDxBtwDW/A5V4iccMZx0lDEhKPI9GCJccZO9+cM5+/8zMhlXaH4LGL58N7hOzg9U08q2RyvJ",
    "GPK3Pn5H6NfJaPu28R4kdU6rYIE+J++EkAAxCeCUN26YgVJu5SSWNVwq6gMXwDKuFGs0S4Oc9EC",
    "BKEjxOkidROdhWLDWfiomWEby2rlxHzIy9KDA+OcUIanAk+/ie7qdFdtNhgEnzdAgh0JBMziFqc",
    "DtazIPWoHoF/oUzszJUC7ZnULlV1DNcs5dC8BL8tlKbIgtqwXk9TDXV96awQprwpOolTzqgoznV",
    "ElQcpqkPDeRrg55nRyF5Bu2ivzwTViWSUN2NetwoviO1y9LODsubOPOtYN6BvBgMmBpZdaWIQuH",
    "7USQGuwnoyBEkHcCYcY9CurnmZveCZLovHYNvKslQMmnjyVlQpbGa3OUSGVEm7LV/UKefKDdtL0",
    "lMYAs/sN6imJbAT+w5gpVjQS15QaaPAMZKMYK8M5Nh6IgJW/A0PF1BZwv0Kk2cBOIutpCBAmmeu",
    "zybapEmjdBLXMYwap6cF7S1j20KDDKkPhXOfpEwBOpzpytFuwBTtc4tGlnS2ysIzgCgNJSo0ojF",
    "K5AVy7Jpkr7mykeCGhmAADdCQJYwmqvsF5aagz7HCDGflca4wY7nZRayNn1Jgn/oRBLaeMA4dUH",
    "YCVTg/Yx05wtUOmR43QPmSpUUjySgIsJBYlnrjFM7FhUhGoiWT2Ms7gjW6AsCsQaXAsnCMZUmOW",
    "+h8Ma8lvOpZZZVpz2KqOe1bbZyAwMpi12orIfUxqpoCWzd0aBusx66wtAvFlMZ2atzMYiDI+tF7",
    "Fbd+9J18fDCLpbbqSXxTFMuwwE7pqJ81e9BjMWQ3PIo9xWSYH9buPrm2e6e63m4Vv1VK4siWuOd",
    "zuNoKft6bw+3lY//Rs+9CzgaRzcJaJtwbI/Hxkh93C/C9yv9FHFnCXfM8vX48h6+ssEvmrpv4qi",
    "3xVSMVPCzucA73NlmP28k5O/nt9Zdfh7/89OlHP97/4f0/f95GH99X3fS8m48fTPuzWQUbLiX5s",
    "npQx0/3+fnBfv3qOZxcPY2Pui9l5/w4m+/3DfFXXfB3ev8hnhoTXJYvpd8O8r2WHVMz2QPY+Z/N",
    "+buzgY87c3oi5PUX2+E/PFzUwyq+dhf4smOfSZ/nFQ/T1N90fHPrefdwUZe1Dfg9/DZeiMPbnvd",
    "uKs/epJ9F8nCtJK5aEkf+Zdy263OtL//136/LA2Th93u3eB1kTX5y6TNu27p+JW59wAf5+PPZfw",
    "D1iPFgxS4kf4wbhXDV0/+Jvv9w5G/a9zQtf/mfmN8eHAnKx7jtmGzr8ttdaf8/mz2SQNXqvd1N1",
    "KHpdVPfcnchvu14xESQjNQnjx4/ebxNXfsLBsEJ3A==",
    ""
  };

  static char newstr [1469] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c18_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c18_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1257298247U));
  ssSetChecksum1(S,(3184420433U));
  ssSetChecksum2(S,(464397620U));
  ssSetChecksum3(S,(3220905379U));
}

static void mdlRTW_c18_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c18_flightControlSystem(SimStruct *S)
{
  SFc18_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc18_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc18_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc18_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c18_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c18_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c18_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c18_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c18_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c18_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c18_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c18_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c18_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c18_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c18_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c18_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c18_flightControlSystem(chartInstance);
}

void c18_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c18_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c18_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c18_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c18_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
