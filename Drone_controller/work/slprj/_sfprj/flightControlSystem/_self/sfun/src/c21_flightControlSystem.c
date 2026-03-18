/* Include files */

#include "flightControlSystem_sfun.h"
#include "c21_flightControlSystem.h"
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
static emlrtMCInfo c21_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c21_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c21_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c21_emlrtRSI = { 2, /* lineNo */
  "Image Processing System/Soluzione1/fitness Function",/* fcnName */
  "#flightControlSystem:2982"          /* pathName */
};

static emlrtRSInfo c21_b_emlrtRSI = { 70,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c21_c_emlrtRSI = { 102,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c21_d_emlrtRSI = { 39,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c21_e_emlrtRSI = { 195,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c21_f_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRSInfo c21_g_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c21_h_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c21_i_emlrtRSI = { 203,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c21_j_emlrtRSI = { 448,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c21_k_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c21_l_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c21_m_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c21_n_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c21_o_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c21_p_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c21_emlrtBCI = { 1, /* iFirst */
  19200,                               /* iLast */
  1051,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_emlrtDCI = { 1051,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_b_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1052,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_b_emlrtDCI = { 1052,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_c_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1066,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_c_emlrtDCI = { 1066,/* lineNo */
  47,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_d_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1053,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_d_emlrtDCI = { 1053,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_e_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1054,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_e_emlrtDCI = { 1054,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_f_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_f_emlrtDCI = { 1130,/* lineNo */
  18,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_g_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_g_emlrtDCI = { 1130,/* lineNo */
  34,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_h_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_h_emlrtDCI = { 1130,/* lineNo */
  50,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_i_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_i_emlrtDCI = { 1130,/* lineNo */
  66,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_j_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c21_j_emlrtDCI = { 1130,/* lineNo */
  11,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_k_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_k_emlrtDCI = { 1068,/* lineNo */
  52,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_l_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c21_l_emlrtDCI = { 1068,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_m_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_m_emlrtDCI = { 1056,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_n_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c21_n_emlrtDCI = { 1056,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_o_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_o_emlrtDCI = { 1057,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_p_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c21_p_emlrtDCI = { 1057,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_q_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_q_emlrtDCI = { 1058,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_r_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c21_r_emlrtDCI = { 1058,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_s_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_s_emlrtDCI = { 1059,/* lineNo */
  53,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_t_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c21_t_emlrtDCI = { 1059,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_u_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  54,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_u_emlrtDCI = { 54,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_v_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  66,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_v_emlrtDCI = { 66,/* lineNo */
  27,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_w_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_w_emlrtDCI = { 68,/* lineNo */
  26,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_x_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c21_x_emlrtDCI = { 68,/* lineNo */
  15,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_y_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_y_emlrtDCI = { 70,/* lineNo */
  20,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_ab_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c21_ab_emlrtDCI = { 70,/* lineNo */
  12,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_bb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_bb_emlrtDCI = { 85,/* lineNo */
  39,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_cb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_cb_emlrtDCI = { 85,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_db_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_db_emlrtDCI = { 85,/* lineNo */
  62,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_eb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_eb_emlrtDCI = { 85,/* lineNo */
  74,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_fb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  24,                                  /* lineNo */
  18,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Soluzione1/fitness Function",/* fName */
  "#flightControlSystem:2982",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_fb_emlrtDCI = { 24,/* lineNo */
  18,                                  /* colNo */
  "Image Processing System/Soluzione1/fitness Function",/* fName */
  "#flightControlSystem:2982",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c21_gb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  24,                                  /* lineNo */
  51,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Soluzione1/fitness Function",/* fName */
  "#flightControlSystem:2982",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c21_gb_emlrtDCI = { 24,/* lineNo */
  51,                                  /* colNo */
  "Image Processing System/Soluzione1/fitness Function",/* fName */
  "#flightControlSystem:2982",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void enable_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void disable_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void c21_update_jit_animation_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void c21_do_animation_call_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance, const mxArray *c21_st);
static real_T c21_sumColumnB(SFc21_flightControlSystemInstanceStruct
  *chartInstance, real_T c21_x[11], int32_T c21_col);
static real_T c21_emlrt_marshallIn(SFc21_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c21_nullptr, const char_T *c21_identifier);
static real_T c21_b_emlrt_marshallIn(SFc21_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c21_b_u, const emlrtMsgIdentifier *c21_parentId);
static void init_dsm_address_info(SFc21_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc21_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c21_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c21_st.tls = chartInstance->c21_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c21_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c21_doneDoubleBufferReInit = false;
  chartInstance->c21_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  static const int32_T c21_b_postfixPredicateTree[5] = { 0, 1, -3, 2, -3 };

  static const int32_T c21_postfixPredicateTree[5] = { 0, 1, -3, 2, -3 };

  static const int32_T c21_b_condTxtEndIdx[3] = { 544, 561, 582 };

  static const int32_T c21_b_condTxtStartIdx[3] = { 535, 548, 565 };

  static const int32_T c21_condTxtEndIdx[3] = { 291, 312, 329 };

  static const int32_T c21_condTxtStartIdx[3] = { 282, 295, 316 };

  static const uint32_T c21_decisionTxtEndIdx = 0U;
  static const uint32_T c21_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c21_JITStateAnimation
                        [0], &chartInstance->c21_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c21_covrtInstance, 1U, 0U, 1U,
    186U);
  covrtChartInitFcn(chartInstance->c21_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c21_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c21_decisionTxtStartIdx, &c21_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c21_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c21_covrtInstance, "", 4U, 0U, 1U, 0U, 5U, 0U,
                  0U, 0U, 1U, 1U, 6U, 2U);
  covrtEmlFcnInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 0U,
                     "c21_flightControlSystem", 0, -1, 907);
  covrtEmlIfInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 0U, 157, 174, 197,
                    239, false);
  covrtEmlIfInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 1U, 279, 330, 377,
                    429, false);
  covrtEmlIfInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 2U, 531, 583, -1,
                    905, false);
  covrtEmlIfInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 3U, 653, 727, 803,
                    804, false);
  covrtEmlIfInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 4U, 838, 852, -1,
                    893, false);
  covrtEmlForInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 0U, 631, 640, 804);
  covrtEmlWhileInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 0U, 605, 622,
                       901);
  covrtEmlMCDCInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 0U, 282, 329, 3U,
                      0U, &c21_condTxtStartIdx[0], &c21_condTxtEndIdx[0], 5U,
                      &c21_postfixPredicateTree[0], false);
  covrtEmlMCDCInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 1U, 535, 582, 3U,
                      3U, &c21_b_condTxtStartIdx[0], &c21_b_condTxtEndIdx[0], 5U,
                      &c21_b_postfixPredicateTree[0], false);
  covrtEmlRelationalInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 0U, 160,
    173, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 1U, 282,
    291, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 2U, 295,
    312, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 3U, 316,
    329, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 4U, 535,
    544, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 5U, 548,
    561, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 6U, 565,
    582, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 7U, 656,
    727, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c21_covrtInstance, 4U, 0U, 8U, 841,
    851, -1, 0U);
}

static void mdl_cleanup_runtime_resources_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c21_covrtInstance);
}

static void enable_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c21_cv4[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c21_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c21_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c21_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c21_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  static char_T c21_cv5[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c21_b_st;
  emlrtStack c21_c_st;
  emlrtStack c21_d_st;
  emlrtStack c21_e_st;
  emlrtStack c21_f_st;
  emlrtStack c21_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c21_b_y = NULL;
  const mxArray *c21_c_y = NULL;
  const mxArray *c21_d_y = NULL;
  const mxArray *c21_e_y = NULL;
  const mxArray *c21_f_y = NULL;
  const mxArray *c21_g_y = NULL;
  real_T c21_localBins1[256];
  real_T c21_localBins2[256];
  real_T c21_localBins3[256];
  real_T c21_y[256];
  real_T c21_h_y[11];
  real_T c21_T;
  real_T c21_b_circleDetected;
  real_T c21_b_completed;
  real_T c21_b_distance;
  real_T c21_b_idx;
  real_T c21_b_k;
  real_T c21_b_time_outside_line;
  real_T c21_b_time_outside_line_in;
  real_T c21_b_total_time;
  real_T c21_b_x;
  real_T c21_c_t;
  real_T c21_c_x;
  real_T c21_d;
  real_T c21_d1;
  real_T c21_d10;
  real_T c21_d11;
  real_T c21_d12;
  real_T c21_d13;
  real_T c21_d14;
  real_T c21_d15;
  real_T c21_d16;
  real_T c21_d17;
  real_T c21_d18;
  real_T c21_d19;
  real_T c21_d2;
  real_T c21_d3;
  real_T c21_d4;
  real_T c21_d5;
  real_T c21_d6;
  real_T c21_d7;
  real_T c21_d8;
  real_T c21_d9;
  real_T c21_d_i;
  real_T c21_d_k;
  real_T c21_d_p;
  real_T c21_d_x;
  real_T c21_e_x;
  real_T c21_f_k;
  real_T c21_f_x;
  real_T c21_g_a;
  real_T c21_g_c;
  real_T c21_g_x;
  real_T c21_h_a;
  real_T c21_i_a;
  real_T c21_i_x;
  real_T c21_i_y;
  real_T c21_j_a;
  real_T c21_j_x;
  real_T c21_j_y;
  real_T c21_k_a;
  real_T c21_k_x;
  real_T c21_l_x;
  real_T c21_m_x;
  real_T c21_maxval;
  real_T c21_mu_t;
  real_T c21_n_x;
  real_T c21_num_elems;
  real_T c21_num_maxval;
  real_T c21_o_x;
  real_T c21_out;
  real_T c21_p_x;
  real_T c21_pixels;
  real_T c21_radius;
  real_T c21_sigma_b_squared;
  real_T c21_t;
  real_T c21_x;
  int32_T c21_nz[11];
  int32_T c21_a;
  int32_T c21_b_a;
  int32_T c21_b_c;
  int32_T c21_b_i;
  int32_T c21_b_t;
  int32_T c21_c;
  int32_T c21_c_a;
  int32_T c21_c_c;
  int32_T c21_c_i;
  int32_T c21_c_k;
  int32_T c21_d_a;
  int32_T c21_d_c;
  int32_T c21_e_a;
  int32_T c21_e_c;
  int32_T c21_e_i;
  int32_T c21_e_k;
  int32_T c21_exitg2;
  int32_T c21_f_a;
  int32_T c21_f_c;
  int32_T c21_f_i;
  int32_T c21_g_b;
  int32_T c21_g_k;
  int32_T c21_h_c;
  int32_T c21_h_k;
  int32_T c21_i;
  int32_T c21_i1;
  int32_T c21_i10;
  int32_T c21_i11;
  int32_T c21_i12;
  int32_T c21_i13;
  int32_T c21_i14;
  int32_T c21_i15;
  int32_T c21_i16;
  int32_T c21_i17;
  int32_T c21_i18;
  int32_T c21_i19;
  int32_T c21_i2;
  int32_T c21_i20;
  int32_T c21_i21;
  int32_T c21_i22;
  int32_T c21_i23;
  int32_T c21_i24;
  int32_T c21_i25;
  int32_T c21_i26;
  int32_T c21_i27;
  int32_T c21_i28;
  int32_T c21_i29;
  int32_T c21_i3;
  int32_T c21_i30;
  int32_T c21_i31;
  int32_T c21_i32;
  int32_T c21_i33;
  int32_T c21_i34;
  int32_T c21_i35;
  int32_T c21_i36;
  int32_T c21_i37;
  int32_T c21_i38;
  int32_T c21_i4;
  int32_T c21_i5;
  int32_T c21_i6;
  int32_T c21_i7;
  int32_T c21_i8;
  int32_T c21_i9;
  int32_T c21_i_c;
  int32_T c21_i_k;
  int32_T c21_idx;
  int32_T c21_idx1;
  int32_T c21_idx2;
  int32_T c21_idx3;
  int32_T c21_idx4;
  int32_T c21_ix;
  int32_T c21_iy;
  int32_T c21_j_c;
  int32_T c21_k;
  int32_T c21_k_c;
  int32_T c21_l_a;
  int32_T c21_m_a;
  int32_T c21_n_a;
  int32_T c21_o_a;
  int32_T c21_p_a;
  int32_T c21_q_a;
  int32_T c21_xoffset;
  int32_T c21_xpageoffset;
  int32_T c21_ypageoffset;
  uint8_T c21_b_u[19200];
  boolean_T c21_c_u[19200];
  boolean_T c21_h_x[121];
  boolean_T c21_b;
  boolean_T c21_b1;
  boolean_T c21_b2;
  boolean_T c21_b3;
  boolean_T c21_b4;
  boolean_T c21_b5;
  boolean_T c21_b_b;
  boolean_T c21_b_p;
  boolean_T c21_c_b;
  boolean_T c21_c_p;
  boolean_T c21_d_b;
  boolean_T c21_e_b;
  boolean_T c21_exitg1;
  boolean_T c21_f_b;
  boolean_T c21_isfinite_maxval;
  boolean_T c21_p;
  c21_st.tls = chartInstance->c21_fEmlrtCtx;
  c21_b_st.prev = &c21_st;
  c21_b_st.tls = c21_st.tls;
  c21_c_st.prev = &c21_b_st;
  c21_c_st.tls = c21_b_st.tls;
  c21_d_st.prev = &c21_c_st;
  c21_d_st.tls = c21_c_st.tls;
  c21_e_st.prev = &c21_d_st;
  c21_e_st.tls = c21_d_st.tls;
  c21_f_st.prev = &c21_e_st;
  c21_f_st.tls = c21_e_st.tls;
  covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 3U,
                    *chartInstance->c21_total_time);
  covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 2U,
                    *chartInstance->c21_circleDetected);
  for (c21_i = 0; c21_i < 19200; c21_i++) {
    covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 1U,
                      (*chartInstance->c21_u)[c21_i]);
  }

  covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 0U,
                    *chartInstance->c21_time_outside_line_in);
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c21_JITTransitionAnimation[0] = 0U;
  chartInstance->c21_sfEvent = CALL_EVENT;
  c21_b_time_outside_line_in = *chartInstance->c21_time_outside_line_in;
  c21_b_circleDetected = *chartInstance->c21_circleDetected;
  c21_b_total_time = *chartInstance->c21_total_time;
  covrtEmlFcnEval(chartInstance->c21_covrtInstance, 4U, 0, 0);
  c21_b_st.site = &c21_emlrtRSI;
  c21_c_st.site = &c21_b_emlrtRSI;
  c21_d_st.site = &c21_c_emlrtRSI;
  c21_e_st.site = &c21_d_emlrtRSI;
  c21_f_st.site = &c21_e_emlrtRSI;
  grayto8_real64(&(*chartInstance->c21_u)[0], &c21_b_u[0], 19200.0);
  c21_d_st.site = &c21_c_emlrtRSI;
  c21_e_st.site = &c21_g_emlrtRSI;
  c21_f_st.site = &c21_h_emlrtRSI;
  c21_out = 1.0;
  getnumcores(&c21_out);
  c21_f_st.site = &c21_i_emlrtRSI;
  memset(&c21_y[0], 0, sizeof(real_T) << 8);
  memset(&c21_localBins1[0], 0, sizeof(real_T) << 8);
  memset(&c21_localBins2[0], 0, sizeof(real_T) << 8);
  memset(&c21_localBins3[0], 0, sizeof(real_T) << 8);
  for (c21_b_i = 1; c21_b_i + 3 <= 19200; c21_b_i += 4) {
    c21_d = (real_T)c21_b_i;
    if (c21_d != (real_T)(int32_T)muDoubleScalarFloor(c21_d)) {
      emlrtIntegerCheckR2012b(c21_d, &c21_emlrtDCI, &c21_f_st);
    }

    c21_i1 = (int32_T)muDoubleScalarFloor(c21_d);
    if ((c21_i1 < 1) || (c21_i1 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c21_i1, 1, 19200, &c21_emlrtBCI, &c21_f_st);
    }

    c21_idx1 = c21_b_u[c21_i1 - 1];
    c21_d2 = (real_T)(c21_b_i + 1);
    if (c21_d2 != (real_T)(int32_T)muDoubleScalarFloor(c21_d2)) {
      emlrtIntegerCheckR2012b(c21_d2, &c21_b_emlrtDCI, &c21_f_st);
    }

    c21_i4 = (int32_T)muDoubleScalarFloor(c21_d2);
    if ((c21_i4 < 1) || (c21_i4 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c21_i4, 1, 19200, &c21_b_emlrtBCI, &c21_f_st);
    }

    c21_idx2 = c21_b_u[c21_i4 - 1];
    c21_d4 = (real_T)(c21_b_i + 2);
    if (c21_d4 != (real_T)(int32_T)muDoubleScalarFloor(c21_d4)) {
      emlrtIntegerCheckR2012b(c21_d4, &c21_d_emlrtDCI, &c21_f_st);
    }

    c21_i8 = (int32_T)muDoubleScalarFloor(c21_d4);
    if ((c21_i8 < 1) || (c21_i8 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c21_i8, 1, 19200, &c21_d_emlrtBCI, &c21_f_st);
    }

    c21_idx3 = c21_b_u[c21_i8 - 1];
    c21_d6 = (real_T)(c21_b_i + 3);
    if (c21_d6 != (real_T)(int32_T)muDoubleScalarFloor(c21_d6)) {
      emlrtIntegerCheckR2012b(c21_d6, &c21_e_emlrtDCI, &c21_f_st);
    }

    c21_i11 = (int32_T)muDoubleScalarFloor(c21_d6);
    if ((c21_i11 < 1) || (c21_i11 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c21_i11, 1, 19200, &c21_e_emlrtBCI,
        &c21_f_st);
    }

    c21_idx4 = c21_b_u[c21_i11 - 1];
    c21_c_a = c21_idx1 + 1;
    c21_c_c = c21_c_a;
    c21_d_a = c21_idx1 + 1;
    c21_d_c = c21_d_a;
    c21_d7 = (real_T)c21_d_c;
    if (c21_d7 != (real_T)(int32_T)muDoubleScalarFloor(c21_d7)) {
      emlrtIntegerCheckR2012b(c21_d7, &c21_m_emlrtDCI, &c21_f_st);
    }

    c21_i14 = (int32_T)muDoubleScalarFloor(c21_d7);
    if ((c21_i14 < 1) || (c21_i14 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i14, 1, 256, &c21_m_emlrtBCI, &c21_f_st);
    }

    c21_d8 = (real_T)c21_c_c;
    if (c21_d8 != (real_T)(int32_T)muDoubleScalarFloor(c21_d8)) {
      emlrtIntegerCheckR2012b(c21_d8, &c21_n_emlrtDCI, &c21_f_st);
    }

    c21_i16 = (int32_T)muDoubleScalarFloor(c21_d8);
    if ((c21_i16 < 1) || (c21_i16 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i16, 1, 256, &c21_n_emlrtBCI, &c21_f_st);
    }

    c21_localBins1[c21_i16 - 1] = c21_localBins1[c21_i14 - 1] + 1.0;
    c21_e_a = c21_idx2 + 1;
    c21_e_c = c21_e_a;
    c21_f_a = c21_idx2 + 1;
    c21_f_c = c21_f_a;
    c21_d10 = (real_T)c21_f_c;
    if (c21_d10 != (real_T)(int32_T)muDoubleScalarFloor(c21_d10)) {
      emlrtIntegerCheckR2012b(c21_d10, &c21_o_emlrtDCI, &c21_f_st);
    }

    c21_i21 = (int32_T)muDoubleScalarFloor(c21_d10);
    if ((c21_i21 < 1) || (c21_i21 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i21, 1, 256, &c21_o_emlrtBCI, &c21_f_st);
    }

    c21_d12 = (real_T)c21_e_c;
    if (c21_d12 != (real_T)(int32_T)muDoubleScalarFloor(c21_d12)) {
      emlrtIntegerCheckR2012b(c21_d12, &c21_p_emlrtDCI, &c21_f_st);
    }

    c21_i27 = (int32_T)muDoubleScalarFloor(c21_d12);
    if ((c21_i27 < 1) || (c21_i27 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i27, 1, 256, &c21_p_emlrtBCI, &c21_f_st);
    }

    c21_localBins2[c21_i27 - 1] = c21_localBins2[c21_i21 - 1] + 1.0;
    c21_l_a = c21_idx3 + 1;
    c21_h_c = c21_l_a;
    c21_m_a = c21_idx3 + 1;
    c21_i_c = c21_m_a;
    c21_d13 = (real_T)c21_i_c;
    if (c21_d13 != (real_T)(int32_T)muDoubleScalarFloor(c21_d13)) {
      emlrtIntegerCheckR2012b(c21_d13, &c21_q_emlrtDCI, &c21_f_st);
    }

    c21_i33 = (int32_T)muDoubleScalarFloor(c21_d13);
    if ((c21_i33 < 1) || (c21_i33 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i33, 1, 256, &c21_q_emlrtBCI, &c21_f_st);
    }

    c21_d14 = (real_T)c21_h_c;
    if (c21_d14 != (real_T)(int32_T)muDoubleScalarFloor(c21_d14)) {
      emlrtIntegerCheckR2012b(c21_d14, &c21_r_emlrtDCI, &c21_f_st);
    }

    c21_i34 = (int32_T)muDoubleScalarFloor(c21_d14);
    if ((c21_i34 < 1) || (c21_i34 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i34, 1, 256, &c21_r_emlrtBCI, &c21_f_st);
    }

    c21_localBins3[c21_i34 - 1] = c21_localBins3[c21_i33 - 1] + 1.0;
    c21_p_a = c21_idx4 + 1;
    c21_j_c = c21_p_a;
    c21_q_a = c21_idx4 + 1;
    c21_k_c = c21_q_a;
    c21_d15 = (real_T)c21_k_c;
    if (c21_d15 != (real_T)(int32_T)muDoubleScalarFloor(c21_d15)) {
      emlrtIntegerCheckR2012b(c21_d15, &c21_s_emlrtDCI, &c21_f_st);
    }

    c21_i35 = (int32_T)muDoubleScalarFloor(c21_d15);
    if ((c21_i35 < 1) || (c21_i35 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i35, 1, 256, &c21_s_emlrtBCI, &c21_f_st);
    }

    c21_d16 = (real_T)c21_j_c;
    if (c21_d16 != (real_T)(int32_T)muDoubleScalarFloor(c21_d16)) {
      emlrtIntegerCheckR2012b(c21_d16, &c21_t_emlrtDCI, &c21_f_st);
    }

    c21_i36 = (int32_T)muDoubleScalarFloor(c21_d16);
    if ((c21_i36 < 1) || (c21_i36 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i36, 1, 256, &c21_t_emlrtBCI, &c21_f_st);
    }

    c21_y[c21_i36 - 1] = c21_y[c21_i35 - 1] + 1.0;
  }

  while (c21_b_i <= 19200) {
    c21_d1 = (real_T)c21_b_i;
    if (c21_d1 != (real_T)(int32_T)muDoubleScalarFloor(c21_d1)) {
      emlrtIntegerCheckR2012b(c21_d1, &c21_c_emlrtDCI, &c21_f_st);
    }

    c21_i2 = (int32_T)muDoubleScalarFloor(c21_d1);
    if ((c21_i2 < 1) || (c21_i2 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c21_i2, 1, 19200, &c21_c_emlrtBCI, &c21_f_st);
    }

    c21_idx = c21_b_u[c21_i2 - 1];
    c21_a = c21_idx + 1;
    c21_c = c21_a;
    c21_b_a = c21_idx + 1;
    c21_b_c = c21_b_a;
    c21_d3 = (real_T)c21_b_c;
    if (c21_d3 != (real_T)(int32_T)muDoubleScalarFloor(c21_d3)) {
      emlrtIntegerCheckR2012b(c21_d3, &c21_k_emlrtDCI, &c21_f_st);
    }

    c21_i6 = (int32_T)muDoubleScalarFloor(c21_d3);
    if ((c21_i6 < 1) || (c21_i6 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i6, 1, 256, &c21_k_emlrtBCI, &c21_f_st);
    }

    c21_d5 = (real_T)c21_c;
    if (c21_d5 != (real_T)(int32_T)muDoubleScalarFloor(c21_d5)) {
      emlrtIntegerCheckR2012b(c21_d5, &c21_l_emlrtDCI, &c21_f_st);
    }

    c21_i10 = (int32_T)muDoubleScalarFloor(c21_d5);
    if ((c21_i10 < 1) || (c21_i10 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i10, 1, 256, &c21_l_emlrtBCI, &c21_f_st);
    }

    c21_y[c21_i10 - 1] = c21_y[c21_i6 - 1] + 1.0;
    c21_b_i++;
  }

  for (c21_c_i = 0; c21_c_i < 256; c21_c_i++) {
    c21_d_i = 1.0 + (real_T)c21_c_i;
    if (c21_d_i != (real_T)(int32_T)muDoubleScalarFloor(c21_d_i)) {
      emlrtIntegerCheckR2012b(c21_d_i, &c21_f_emlrtDCI, &c21_f_st);
    }

    c21_i3 = (int32_T)c21_d_i;
    if ((c21_i3 < 1) || (c21_i3 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i3, 1, 256, &c21_f_emlrtBCI, &c21_f_st);
    }

    if (c21_d_i != (real_T)(int32_T)muDoubleScalarFloor(c21_d_i)) {
      emlrtIntegerCheckR2012b(c21_d_i, &c21_g_emlrtDCI, &c21_f_st);
    }

    c21_i5 = (int32_T)c21_d_i;
    if ((c21_i5 < 1) || (c21_i5 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i5, 1, 256, &c21_g_emlrtBCI, &c21_f_st);
    }

    if (c21_d_i != (real_T)(int32_T)muDoubleScalarFloor(c21_d_i)) {
      emlrtIntegerCheckR2012b(c21_d_i, &c21_h_emlrtDCI, &c21_f_st);
    }

    c21_i7 = (int32_T)c21_d_i;
    if ((c21_i7 < 1) || (c21_i7 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i7, 1, 256, &c21_h_emlrtBCI, &c21_f_st);
    }

    if (c21_d_i != (real_T)(int32_T)muDoubleScalarFloor(c21_d_i)) {
      emlrtIntegerCheckR2012b(c21_d_i, &c21_i_emlrtDCI, &c21_f_st);
    }

    c21_i9 = (int32_T)c21_d_i;
    if ((c21_i9 < 1) || (c21_i9 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i9, 1, 256, &c21_i_emlrtBCI, &c21_f_st);
    }

    if (c21_d_i != (real_T)(int32_T)muDoubleScalarFloor(c21_d_i)) {
      emlrtIntegerCheckR2012b(c21_d_i, &c21_j_emlrtDCI, &c21_f_st);
    }

    c21_i12 = (int32_T)c21_d_i;
    if ((c21_i12 < 1) || (c21_i12 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i12, 1, 256, &c21_j_emlrtBCI, &c21_f_st);
    }

    c21_y[c21_i12 - 1] = ((c21_y[c21_i3 - 1] + c21_localBins1[c21_i5 - 1]) +
                          c21_localBins2[c21_i7 - 1]) + c21_localBins3[c21_i9 -
      1];
  }

  c21_d_st.site = &c21_c_emlrtRSI;
  c21_e_st.site = &c21_l_emlrtRSI;
  c21_f_st.site = &c21_n_emlrtRSI;
  c21_p = true;
  c21_k = 0;
  c21_exitg1 = false;
  while ((!c21_exitg1) && (c21_k < 256)) {
    c21_b_k = 1.0 + (real_T)c21_k;
    c21_x = c21_y[(int32_T)c21_b_k - 1];
    c21_b_x = c21_x;
    c21_b_b = muDoubleScalarIsInf(c21_b_x);
    c21_b1 = !c21_b_b;
    c21_c_x = c21_x;
    c21_c_b = muDoubleScalarIsNaN(c21_c_x);
    c21_b2 = !c21_c_b;
    c21_d_b = (c21_b1 && c21_b2);
    if (c21_d_b) {
      c21_k++;
    } else {
      c21_p = false;
      c21_exitg1 = true;
    }
  }

  if (c21_p) {
    c21_b = true;
  } else {
    c21_b = false;
  }

  if (!c21_b) {
    c21_b_y = NULL;
    sf_mex_assign(&c21_b_y, sf_mex_create("y", c21_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c21_c_y = NULL;
    sf_mex_assign(&c21_c_y, sf_mex_create("y", c21_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c21_d_y = NULL;
    sf_mex_assign(&c21_d_y, sf_mex_create("y", c21_cv2, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c21_f_st, &c21_emlrtMCI, "error", 0U, 2U, 14, c21_b_y, 14,
                sf_mex_call(&c21_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c21_f_st, NULL, "message", 1U, 2U, 14, c21_c_y, 14, c21_d_y)));
  }

  c21_f_st.site = &c21_n_emlrtRSI;
  c21_b_p = true;
  c21_c_k = 0;
  c21_exitg1 = false;
  while ((!c21_exitg1) && (c21_c_k < 256)) {
    c21_d_k = 1.0 + (real_T)c21_c_k;
    c21_d_x = c21_y[(int32_T)c21_d_k - 1];
    c21_c_p = !(c21_d_x < 0.0);
    if (c21_c_p) {
      c21_c_k++;
    } else {
      c21_b_p = false;
      c21_exitg1 = true;
    }
  }

  if (c21_b_p) {
    c21_b3 = true;
  } else {
    c21_b3 = false;
  }

  if (!c21_b3) {
    c21_e_y = NULL;
    sf_mex_assign(&c21_e_y, sf_mex_create("y", c21_cv3, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c21_f_y = NULL;
    sf_mex_assign(&c21_f_y, sf_mex_create("y", c21_cv4, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c21_g_y = NULL;
    sf_mex_assign(&c21_g_y, sf_mex_create("y", c21_cv5, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c21_f_st, &c21_b_emlrtMCI, "error", 0U, 2U, 14, c21_e_y, 14,
                sf_mex_call(&c21_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c21_f_st, NULL, "message", 1U, 2U, 14, c21_f_y, 14, c21_g_y)));
  }

  c21_num_elems = 0.0;
  for (c21_e_k = 0; c21_e_k < 256; c21_e_k++) {
    c21_f_k = 1.0 + (real_T)c21_e_k;
    if (c21_f_k != (real_T)(int32_T)muDoubleScalarFloor(c21_f_k)) {
      emlrtIntegerCheckR2012b(c21_f_k, &c21_u_emlrtDCI, &c21_d_st);
    }

    c21_i13 = (int32_T)c21_f_k;
    if ((c21_i13 < 1) || (c21_i13 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i13, 1, 256, &c21_u_emlrtBCI, &c21_d_st);
    }

    c21_num_elems += c21_y[c21_i13 - 1];
  }

  c21_localBins1[0] = c21_y[0] / c21_num_elems;
  c21_localBins2[0] = c21_localBins1[0];
  for (c21_g_k = 0; c21_g_k < 255; c21_g_k++) {
    c21_f_k = 2.0 + (real_T)c21_g_k;
    if (c21_f_k != (real_T)(int32_T)muDoubleScalarFloor(c21_f_k)) {
      emlrtIntegerCheckR2012b(c21_f_k, &c21_v_emlrtDCI, &c21_d_st);
    }

    c21_i15 = (int32_T)c21_f_k;
    if ((c21_i15 < 1) || (c21_i15 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i15, 1, 256, &c21_v_emlrtBCI, &c21_d_st);
    }

    c21_d_p = c21_y[c21_i15 - 1] / c21_num_elems;
    c21_d9 = c21_f_k - 1.0;
    if (c21_d9 != (real_T)(int32_T)muDoubleScalarFloor(c21_d9)) {
      emlrtIntegerCheckR2012b(c21_d9, &c21_w_emlrtDCI, &c21_d_st);
    }

    c21_i18 = (int32_T)c21_d9;
    if ((c21_i18 < 1) || (c21_i18 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i18, 1, 256, &c21_w_emlrtBCI, &c21_d_st);
    }

    if (c21_f_k != (real_T)(int32_T)muDoubleScalarFloor(c21_f_k)) {
      emlrtIntegerCheckR2012b(c21_f_k, &c21_x_emlrtDCI, &c21_d_st);
    }

    c21_i20 = (int32_T)c21_f_k;
    if ((c21_i20 < 1) || (c21_i20 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i20, 1, 256, &c21_x_emlrtBCI, &c21_d_st);
    }

    c21_localBins1[c21_i20 - 1] = c21_localBins1[c21_i18 - 1] + c21_d_p;
    c21_d11 = c21_f_k - 1.0;
    if (c21_d11 != (real_T)(int32_T)muDoubleScalarFloor(c21_d11)) {
      emlrtIntegerCheckR2012b(c21_d11, &c21_y_emlrtDCI, &c21_d_st);
    }

    c21_i26 = (int32_T)c21_d11;
    if ((c21_i26 < 1) || (c21_i26 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i26, 1, 256, &c21_y_emlrtBCI, &c21_d_st);
    }

    if (c21_f_k != (real_T)(int32_T)muDoubleScalarFloor(c21_f_k)) {
      emlrtIntegerCheckR2012b(c21_f_k, &c21_ab_emlrtDCI, &c21_d_st);
    }

    c21_i31 = (int32_T)c21_f_k;
    if ((c21_i31 < 1) || (c21_i31 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i31, 1, 256, &c21_ab_emlrtBCI, &c21_d_st);
    }

    c21_localBins2[c21_i31 - 1] = c21_localBins2[c21_i26 - 1] + c21_d_p *
      c21_f_k;
  }

  c21_mu_t = c21_localBins2[255];
  c21_maxval = rtMinusInf;
  c21_b_idx = 0.0;
  c21_num_maxval = 0.0;
  for (c21_h_k = 0; c21_h_k < 255; c21_h_k++) {
    c21_f_k = 1.0 + (real_T)c21_h_k;
    c21_e_st.site = &c21_m_emlrtRSI;
    if (c21_f_k != (real_T)(int32_T)muDoubleScalarFloor(c21_f_k)) {
      emlrtIntegerCheckR2012b(c21_f_k, &c21_bb_emlrtDCI, &c21_e_st);
    }

    c21_i17 = (int32_T)c21_f_k;
    if ((c21_i17 < 1) || (c21_i17 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i17, 1, 256, &c21_bb_emlrtBCI, &c21_e_st);
    }

    if (c21_f_k != (real_T)(int32_T)muDoubleScalarFloor(c21_f_k)) {
      emlrtIntegerCheckR2012b(c21_f_k, &c21_cb_emlrtDCI, &c21_e_st);
    }

    c21_i19 = (int32_T)c21_f_k;
    if ((c21_i19 < 1) || (c21_i19 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i19, 1, 256, &c21_cb_emlrtBCI, &c21_e_st);
    }

    c21_g_a = c21_mu_t * c21_localBins1[c21_i17 - 1] - c21_localBins2[c21_i19 -
      1];
    c21_f_st.site = &c21_o_emlrtRSI;
    c21_h_a = c21_g_a;
    c21_i_a = c21_h_a;
    c21_j_a = c21_i_a;
    c21_k_a = c21_j_a;
    c21_g_c = c21_k_a * c21_k_a;
    if (c21_f_k != (real_T)(int32_T)muDoubleScalarFloor(c21_f_k)) {
      emlrtIntegerCheckR2012b(c21_f_k, &c21_db_emlrtDCI, &c21_d_st);
    }

    c21_i30 = (int32_T)c21_f_k;
    if ((c21_i30 < 1) || (c21_i30 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i30, 1, 256, &c21_db_emlrtBCI, &c21_d_st);
    }

    if (c21_f_k != (real_T)(int32_T)muDoubleScalarFloor(c21_f_k)) {
      emlrtIntegerCheckR2012b(c21_f_k, &c21_eb_emlrtDCI, &c21_d_st);
    }

    c21_i32 = (int32_T)c21_f_k;
    if ((c21_i32 < 1) || (c21_i32 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c21_i32, 1, 256, &c21_eb_emlrtBCI, &c21_d_st);
    }

    c21_sigma_b_squared = c21_g_c / (c21_localBins1[c21_i30 - 1] * (1.0 -
      c21_localBins1[c21_i32 - 1]));
    if (c21_sigma_b_squared > c21_maxval) {
      c21_maxval = c21_sigma_b_squared;
      c21_b_idx = c21_f_k;
      c21_num_maxval = 1.0;
    } else if (c21_sigma_b_squared == c21_maxval) {
      c21_b_idx += c21_f_k;
      c21_num_maxval++;
    }
  }

  c21_e_x = c21_maxval;
  c21_f_x = c21_e_x;
  c21_e_b = muDoubleScalarIsInf(c21_f_x);
  c21_b4 = !c21_e_b;
  c21_g_x = c21_e_x;
  c21_f_b = muDoubleScalarIsNaN(c21_g_x);
  c21_b5 = !c21_f_b;
  c21_isfinite_maxval = (c21_b4 && c21_b5);
  if (c21_isfinite_maxval) {
    c21_b_idx /= c21_num_maxval;
    c21_t = (c21_b_idx - 1.0) / 255.0;
  } else {
    c21_t = 0.0;
  }

  c21_T = c21_t;
  for (c21_i22 = 0; c21_i22 < 19200; c21_i22++) {
    c21_c_u[c21_i22] = ((*chartInstance->c21_u)[c21_i22] > c21_T);
  }

  c21_i23 = 0;
  c21_i24 = 0;
  for (c21_i25 = 0; c21_i25 < 11; c21_i25++) {
    for (c21_i28 = 0; c21_i28 < 11; c21_i28++) {
      c21_h_x[c21_i28 + c21_i23] = c21_c_u[(c21_i28 + c21_i24) + 8934];
    }

    c21_i23 += 11;
    c21_i24 += 120;
  }

  for (c21_e_i = 0; c21_e_i < 11; c21_e_i++) {
    c21_f_i = c21_e_i;
    c21_xpageoffset = c21_f_i * 11 + 1;
    c21_ypageoffset = c21_f_i + 1;
    c21_ix = c21_xpageoffset - 1;
    c21_iy = c21_ypageoffset - 1;
    c21_nz[c21_iy] = (int32_T)c21_h_x[c21_ix];
    for (c21_i_k = 0; c21_i_k < 10; c21_i_k++) {
      c21_xoffset = (c21_xpageoffset + c21_i_k) + 1;
      c21_ix = c21_xoffset - 1;
      c21_iy = c21_ypageoffset - 1;
      c21_n_a = c21_nz[c21_iy];
      c21_g_b = (int32_T)c21_h_x[c21_ix];
      c21_o_a = c21_n_a;
      c21_o_a += (c21_g_b != 0);
      c21_nz[c21_iy] = c21_o_a;
    }
  }

  for (c21_i29 = 0; c21_i29 < 11; c21_i29++) {
    c21_h_y[c21_i29] = (real_T)c21_nz[c21_i29];
  }

  c21_pixels = c21_sumColumnB(chartInstance, c21_h_y, 1);
  if (covrtEmlIfEval(chartInstance->c21_covrtInstance, 4U, 0, 0,
                     covrtRelationalopUpdateFcn(chartInstance->c21_covrtInstance,
        4U, 0U, 0U, c21_b_total_time, 10.0, -1, 2U, c21_b_total_time < 10.0))) {
    c21_b_completed = 0.0;
  } else {
    c21_b_completed = c21_b_circleDetected;
  }

  if (covrtEmlCondEval(chartInstance->c21_covrtInstance, 4U, 0, 0,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c21_covrtInstance, 4U, 0U, 1U, c21_pixels,
                        0.0, -1, 3U, c21_pixels <= 0.0)) && covrtEmlCondEval
      (chartInstance->c21_covrtInstance, 4U, 0, 1, covrtRelationalopUpdateFcn
       (chartInstance->c21_covrtInstance, 4U, 0U, 2U, c21_b_circleDetected, 0.0,
        -1, 0U, c21_b_circleDetected == 0.0)) && covrtEmlCondEval
      (chartInstance->c21_covrtInstance, 4U, 0, 2, covrtRelationalopUpdateFcn
       (chartInstance->c21_covrtInstance, 4U, 0U, 3U, c21_b_total_time, 20.0, -1,
        4U, c21_b_total_time > 20.0))) {
    covrtEmlMcdcEval(chartInstance->c21_covrtInstance, 4U, 0, 0, true);
    covrtEmlIfEval(chartInstance->c21_covrtInstance, 4U, 0, 1, true);
    c21_b_time_outside_line = c21_b_time_outside_line_in + 1.0;
  } else {
    covrtEmlMcdcEval(chartInstance->c21_covrtInstance, 4U, 0, 0, false);
    covrtEmlIfEval(chartInstance->c21_covrtInstance, 4U, 0, 1, false);
    c21_b_time_outside_line = c21_b_time_outside_line_in;
  }

  c21_b_distance = 0.0;
  if (covrtEmlCondEval(chartInstance->c21_covrtInstance, 4U, 0, 3,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c21_covrtInstance, 4U, 0U, 4U, c21_pixels,
                        0.0, -1, 0U, c21_pixels == 0.0)) && covrtEmlCondEval
      (chartInstance->c21_covrtInstance, 4U, 0, 4, covrtRelationalopUpdateFcn
       (chartInstance->c21_covrtInstance, 4U, 0U, 5U, c21_b_total_time, 20.0, -1,
        4U, c21_b_total_time > 20.0)) && covrtEmlCondEval
      (chartInstance->c21_covrtInstance, 4U, 0, 5, covrtRelationalopUpdateFcn
       (chartInstance->c21_covrtInstance, 4U, 0U, 6U, c21_b_circleDetected, 0.0,
        -1, 0U, c21_b_circleDetected == 0.0))) {
    covrtEmlMcdcEval(chartInstance->c21_covrtInstance, 4U, 0, 1, true);
    covrtEmlIfEval(chartInstance->c21_covrtInstance, 4U, 0, 2, true);
    c21_radius = 5.0;
    while (covrtEmlWhileEval(chartInstance->c21_covrtInstance, 4U, 0, 0,
            c21_b_distance == 0.0)) {
      c21_b_t = 0;
      do {
        c21_exitg2 = 0;
        if (c21_b_t < 8) {
          c21_c_t = (real_T)c21_b_t;
          covrtEmlForEval(chartInstance->c21_covrtInstance, 4U, 0, 0, 1);
          c21_i_x = c21_c_t * 0.78539816339744828;
          c21_j_x = c21_i_x;
          c21_j_x = muDoubleScalarCos(c21_j_x);
          c21_k_x = c21_radius * c21_j_x;
          c21_l_x = c21_k_x;
          c21_i_y = c21_l_x;
          c21_i_y = muDoubleScalarRound(c21_i_y);
          c21_m_x = c21_c_t * 0.78539816339744828;
          c21_n_x = c21_m_x;
          c21_n_x = muDoubleScalarSin(c21_n_x);
          c21_o_x = c21_radius * c21_n_x;
          c21_p_x = c21_o_x;
          c21_j_y = c21_p_x;
          c21_j_y = muDoubleScalarRound(c21_j_y);
          c21_d17 = 60.0 + c21_i_y;
          if (c21_d17 != (real_T)(int32_T)muDoubleScalarFloor(c21_d17)) {
            emlrtIntegerCheckR2012b(c21_d17, &c21_fb_emlrtDCI, &c21_st);
          }

          c21_i37 = (int32_T)c21_d17;
          if ((c21_i37 < 1) || (c21_i37 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c21_i37, 1, 120, &c21_fb_emlrtBCI,
              &c21_st);
          }

          c21_d18 = 80.0 + c21_j_y;
          if (c21_d18 != (real_T)(int32_T)muDoubleScalarFloor(c21_d18)) {
            emlrtIntegerCheckR2012b(c21_d18, &c21_gb_emlrtDCI, &c21_st);
          }

          c21_i38 = (int32_T)c21_d18;
          if ((c21_i38 < 1) || (c21_i38 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c21_i38, 1, 160, &c21_gb_emlrtBCI,
              &c21_st);
          }

          c21_d19 = (real_T)c21_c_u[(c21_i37 + 120 * (c21_i38 - 1)) - 1];
          if (covrtEmlIfEval(chartInstance->c21_covrtInstance, 4U, 0, 3,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c21_covrtInstance, 4U, 0U, 7U,
                              c21_d19, 1.0, -1, 0U, c21_d19 == 1.0))) {
            c21_b_distance = c21_radius - 4.0;
            c21_exitg2 = 1;
          } else {
            c21_b_t++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c21_covrtInstance, 4U, 0, 0, 0);
          c21_exitg2 = 1;
        }
      } while (c21_exitg2 == 0);

      c21_radius++;
      if (covrtEmlIfEval(chartInstance->c21_covrtInstance, 4U, 0, 4,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c21_covrtInstance, 4U, 0U, 8U,
                          c21_radius, 60.0, -1, 0U, c21_radius == 60.0))) {
        c21_b_distance = c21_radius;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }
  } else {
    covrtEmlMcdcEval(chartInstance->c21_covrtInstance, 4U, 0, 1, false);
    covrtEmlIfEval(chartInstance->c21_covrtInstance, 4U, 0, 2, false);
  }

  *chartInstance->c21_time_outside_line = c21_b_time_outside_line;
  *chartInstance->c21_completed = c21_b_completed;
  *chartInstance->c21_distance = c21_b_distance;
  covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 4U,
                    *chartInstance->c21_time_outside_line);
  covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 5U,
                    *chartInstance->c21_completed);
  covrtSigUpdateFcn(chartInstance->c21_covrtInstance, 6U,
                    *chartInstance->c21_distance);
}

static void ext_mode_exec_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c21_update_jit_animation_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c21_do_animation_call_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c21_b_y = NULL;
  const mxArray *c21_c_y = NULL;
  const mxArray *c21_d_y = NULL;
  const mxArray *c21_st;
  const mxArray *c21_y = NULL;
  c21_st = NULL;
  c21_st = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_createcellmatrix(3, 1), false);
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", chartInstance->c21_completed, 0, 0U,
    0, 0U, 0), false);
  sf_mex_setcell(c21_y, 0, c21_b_y);
  c21_c_y = NULL;
  sf_mex_assign(&c21_c_y, sf_mex_create("y", chartInstance->c21_distance, 0, 0U,
    0, 0U, 0), false);
  sf_mex_setcell(c21_y, 1, c21_c_y);
  c21_d_y = NULL;
  sf_mex_assign(&c21_d_y, sf_mex_create("y",
    chartInstance->c21_time_outside_line, 0, 0U, 0, 0U, 0), false);
  sf_mex_setcell(c21_y, 2, c21_d_y);
  sf_mex_assign(&c21_st, c21_y, false);
  return c21_st;
}

static void set_sim_state_c21_flightControlSystem
  (SFc21_flightControlSystemInstanceStruct *chartInstance, const mxArray *c21_st)
{
  const mxArray *c21_b_u;
  chartInstance->c21_doneDoubleBufferReInit = true;
  c21_b_u = sf_mex_dup(c21_st);
  *chartInstance->c21_completed = c21_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c21_b_u, 0)), "completed");
  *chartInstance->c21_distance = c21_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c21_b_u, 1)), "distance");
  *chartInstance->c21_time_outside_line = c21_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c21_b_u, 2)), "time_outside_line");
  sf_mex_destroy(&c21_b_u);
  sf_mex_destroy(&c21_st);
}

static real_T c21_sumColumnB(SFc21_flightControlSystemInstanceStruct
  *chartInstance, real_T c21_x[11], int32_T c21_col)
{
  real_T c21_y;
  int32_T c21_b_col;
  int32_T c21_b_k;
  int32_T c21_i0;
  int32_T c21_k;
  (void)chartInstance;
  c21_b_col = c21_col - 1;
  c21_i0 = c21_b_col * 11;
  c21_y = c21_x[c21_i0];
  for (c21_k = 0; c21_k < 10; c21_k++) {
    c21_b_k = c21_k;
    c21_y += c21_x[(c21_i0 + c21_b_k) + 1];
  }

  return c21_y;
}

const mxArray *sf_c21_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c21_nameCaptureInfo = NULL;
  c21_nameCaptureInfo = NULL;
  sf_mex_assign(&c21_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c21_nameCaptureInfo;
}

static real_T c21_emlrt_marshallIn(SFc21_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c21_nullptr, const char_T *c21_identifier)
{
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y;
  c21_thisId.fIdentifier = (const char_T *)c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_nullptr),
    &c21_thisId);
  sf_mex_destroy(&c21_nullptr);
  return c21_y;
}

static real_T c21_b_emlrt_marshallIn(SFc21_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c21_b_u, const emlrtMsgIdentifier *c21_parentId)
{
  real_T c21_d;
  real_T c21_y;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_b_u), &c21_d, 1, 0, 0U, 0, 0U, 0);
  c21_y = c21_d;
  sf_mex_destroy(&c21_b_u);
  return c21_y;
}

static void init_dsm_address_info(SFc21_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc21_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c21_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c21_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c21_time_outside_line_in = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c21_time_outside_line = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c21_u = (real_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c21_circleDetected = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c21_total_time = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c21_completed = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c21_distance = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c21_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1660894944U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3078257658U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4083943092U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1205091180U);
}

mxArray *sf_c21_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c21_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c21_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c21_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiA+wcTAwAakOYCYiQECWKF8RiBmhtIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Ks4gPQ7IOlnwaKfE0m/AJSfnJ9bkJNakpoCFe"
    "dDogfOP2oO6Pqx+YcDzT8gfkpmcUliXnLq4PCHBNgfHgT8IYjmDxC/JDM3NT6/tKQ4MyU1PiczL"
    "xUtfgDNCyGM"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c21_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sTqDyhHF2FxvLDy82SOQMtF";
}

static void sf_opaque_initialize_c21_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c21_flightControlSystem
    ((SFc21_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c21_flightControlSystem((SFc21_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c21_flightControlSystem(void *chartInstanceVar)
{
  enable_c21_flightControlSystem((SFc21_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c21_flightControlSystem(void *chartInstanceVar)
{
  disable_c21_flightControlSystem((SFc21_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c21_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c21_flightControlSystem((SFc21_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c21_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c21_flightControlSystem
    ((SFc21_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c21_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c21_flightControlSystem((SFc21_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c21_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc21_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c21_flightControlSystem
      ((SFc21_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c21_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c21_flightControlSystem((SFc21_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc21_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c21_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c21_flightControlSystem((SFc21_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c21_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c21_flightControlSystem
      ((SFc21_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c21_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrdWM1vG0UUHycmSlCp2hOpVAmQEOJSqXWF1AOCpP6glmLisk6RuETj3WfvKLMzznz4gz+EG+L",
    "SP4YDRw6Iv4IjBw68Wa8dyzb2zloigZXW69nd37z3fvO+Zkmp2SJ43Hc/jwg5wMshnntkeryTjU",
    "sL5/R+mXyejdvvEhLGVJmm6Enif4Qygj6IwPZ6bOyJFTZpU0UTXUCuoAl8A1pya5gUfsoz0QMFI",
    "sQJBlIZL7maJZYzcdWwInSS9bcxC+MglpZHL3FCGp0LPvknuQNr2iixxhSEpgEQmVhJ248bnPY3",
    "s6DMqBpDeKVt4s2VBhPYgTNVtyw3bMChPoawKbShyILeYm9gqIGqGXt7CNPBDC2TAWdU5Oc6pjq",
    "AAXqHgYtBhL/n1iB7OeWivC4T1EjFKK8nvOo8PCe2zVHPFro19+bZJKYGXdvvM9F37CqbgED70U",
    "9ycNWryiEo2odz4RmDzrr6OF3guV/mj8Gmc8tCMWiT6aroQthUbn2IDOmCchuhqFLOtR+2IwdnM",
    "ASeyq9RQwtgp/I9wFqzqCPfUOWiwDOSrGDXFjJsVYqI5V/h4RIqTbhfY/LMAWeJcymIkOa56vOJ",
    "tvmk1UYmVQyj2tlZTnmr2KYwoHo0hNy5T1GmARVO/cpTbsQ07XKHRpZMamXuGUAUhhLds6I2kuo",
    "KOfZNsjdcuUjwQ0PUhxoYSBNGHb37DeU2p86Jxgzn3ONCY8byk4tYFz+FwCENY4hcPWEcWqDdBD",
    "p3fsY6corWDpmZ1ECHig3yRpLVEGEhcSx1JgO4EFdCjkRDySTIOoINfgWAWYMqgWXhJZYlNWmg8",
    "vm0VnDdcZ5VpD1LqOG063zjKxBYWZytrhLSEKOqLrB1Q4V2wQbseyztQjNtsJ2a1NMYiNJ+9Ljk",
    "148+zMbP57HU1B2FK0WxDAvslE67abMHHZZAeiOg2FNMh9nh5D4lN3KP9jbL3cN/pYI4siPu1QK",
    "uvIaf9xdwD7JxWHl22eOsH7ssbJTkwQSJT1b0uJeD73X6L+PICu6G59n10wV8aY1csnDdxld5ha",
    "8yKeHhcCcLuPfIZtxBxtmPteOP5Ntffn3y++sffvoreruLf4z3/fz5fjZ+POvP5hVsuJLki/qD7",
    "lzXJvGrRqUxHp7VJi8qwfnrlmmk8/28t1nf/SV9Z/c/xNNggkvzpQqbUbbXcmNqp3sAN/+LBX0P",
    "tvBxtOBPhPzx5W74j0+W/WEdX0dLfB2le1WXMbChWePHt2fPJyfL+HX2HC7ZczjtV9IN3N2w4/g",
    "kjx8/XLLDjQ3m8EuJ2wgWwSWWUlizPnc9r99WHblNPfPUmXJB3H5BHPmXcbva51s//+vvP92QH8",
    "jS+w/usB2b8pNPH3XX7PqN+PU5H2TjL+bfOKox49GaXVb2GDdCvXVP/yf+/acnf7O+ru74yz7Sf",
    "vf8VFA+wW3VdNua3W4r931w/kgB1ev3rrdRh2bXbX3ZvaX4duMRE5Ec6SfPKp9VdqlrfwMAOhV0",
    ""
  };

  static char newstr [1501] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c21_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c21_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(555238557U));
  ssSetChecksum1(S,(3570181231U));
  ssSetChecksum2(S,(2521946669U));
  ssSetChecksum3(S,(2758081695U));
}

static void mdlRTW_c21_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c21_flightControlSystem(SimStruct *S)
{
  SFc21_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc21_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc21_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc21_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c21_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c21_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c21_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c21_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c21_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c21_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c21_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c21_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c21_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c21_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c21_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c21_flightControlSystem;
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

  mdl_setup_runtime_resources_c21_flightControlSystem(chartInstance);
}

void c21_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c21_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c21_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c21_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c21_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
