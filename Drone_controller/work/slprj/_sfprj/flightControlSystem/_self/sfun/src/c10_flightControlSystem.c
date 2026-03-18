/* Include files */

#include "flightControlSystem_sfun.h"
#include "c10_flightControlSystem.h"
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
static emlrtMCInfo c10_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c10_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c10_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c10_emlrtRSI = { 6, /* lineNo */
  "Image Processing System/Soluzione1/detect circle",/* fcnName */
  "#flightControlSystem:2907"          /* pathName */
};

static emlrtRSInfo c10_b_emlrtRSI = { 70,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c10_c_emlrtRSI = { 102,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c10_d_emlrtRSI = { 39,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c10_e_emlrtRSI = { 195,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c10_f_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRSInfo c10_g_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c10_h_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c10_i_emlrtRSI = { 203,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c10_j_emlrtRSI = { 448,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c10_k_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c10_l_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c10_m_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c10_n_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c10_o_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c10_p_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c10_emlrtBCI = { 1, /* iFirst */
  19200,                               /* iLast */
  1051,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_emlrtDCI = { 1051,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_b_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1052,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_b_emlrtDCI = { 1052,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_c_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1066,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_c_emlrtDCI = { 1066,/* lineNo */
  47,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_d_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1053,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_d_emlrtDCI = { 1053,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_e_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1054,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_e_emlrtDCI = { 1054,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_f_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_f_emlrtDCI = { 1130,/* lineNo */
  18,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_g_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_g_emlrtDCI = { 1130,/* lineNo */
  34,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_h_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_h_emlrtDCI = { 1130,/* lineNo */
  50,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_i_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_i_emlrtDCI = { 1130,/* lineNo */
  66,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_j_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_j_emlrtDCI = { 1130,/* lineNo */
  11,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_k_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_k_emlrtDCI = { 1068,/* lineNo */
  52,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_l_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_l_emlrtDCI = { 1068,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_m_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_m_emlrtDCI = { 1056,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_n_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_n_emlrtDCI = { 1056,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_o_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_o_emlrtDCI = { 1057,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_p_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_p_emlrtDCI = { 1057,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_q_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_q_emlrtDCI = { 1058,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_r_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_r_emlrtDCI = { 1058,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_s_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_s_emlrtDCI = { 1059,/* lineNo */
  53,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_t_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_t_emlrtDCI = { 1059,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_u_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  54,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_u_emlrtDCI = { 54,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_v_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  66,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_v_emlrtDCI = { 66,/* lineNo */
  27,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_w_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_w_emlrtDCI = { 68,/* lineNo */
  26,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_x_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_x_emlrtDCI = { 68,/* lineNo */
  15,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_y_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_y_emlrtDCI = { 70,/* lineNo */
  20,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_ab_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c10_ab_emlrtDCI = { 70,/* lineNo */
  12,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_bb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_bb_emlrtDCI = { 85,/* lineNo */
  39,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_cb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_cb_emlrtDCI = { 85,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_db_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_db_emlrtDCI = { 85,/* lineNo */
  62,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_eb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_eb_emlrtDCI = { 85,/* lineNo */
  74,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_fb_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  11,                                  /* lineNo */
  14,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Soluzione1/detect circle",/* fName */
  "#flightControlSystem:2907",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_fb_emlrtDCI = { 11,/* lineNo */
  14,                                  /* colNo */
  "Image Processing System/Soluzione1/detect circle",/* fName */
  "#flightControlSystem:2907",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_gb_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  11,                                  /* lineNo */
  16,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Soluzione1/detect circle",/* fName */
  "#flightControlSystem:2907",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_gb_emlrtDCI = { 11,/* lineNo */
  16,                                  /* colNo */
  "Image Processing System/Soluzione1/detect circle",/* fName */
  "#flightControlSystem:2907",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_hb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  26,                                  /* lineNo */
  10,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/Soluzione1/detect circle",/* fName */
  "#flightControlSystem:2907",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_hb_emlrtDCI = { 26,/* lineNo */
  10,                                  /* colNo */
  "Image Processing System/Soluzione1/detect circle",/* fName */
  "#flightControlSystem:2907",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c10_ib_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  26,                                  /* lineNo */
  49,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/Soluzione1/detect circle",/* fName */
  "#flightControlSystem:2907",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c10_ib_emlrtDCI = { 26,/* lineNo */
  49,                                  /* colNo */
  "Image Processing System/Soluzione1/detect circle",/* fName */
  "#flightControlSystem:2907",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void enable_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void disable_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void c10_update_jit_animation_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void c10_do_animation_call_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance, const mxArray *c10_st);
static real_T c10_emlrt_marshallIn(SFc10_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c10_nullptr, const char_T *c10_identifier);
static real_T c10_b_emlrt_marshallIn(SFc10_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c10_b_u, const emlrtMsgIdentifier *c10_parentId);
static void init_dsm_address_info(SFc10_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc10_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c10_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c10_st.tls = chartInstance->c10_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c10_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c10_doneDoubleBufferReInit = false;
  chartInstance->c10_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c10_decisionTxtEndIdx = 0U;
  static const uint32_T c10_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c10_JITStateAnimation
                        [0], &chartInstance->c10_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c10_covrtInstance, 1U, 0U, 1U,
    181U);
  covrtChartInitFcn(chartInstance->c10_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c10_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c10_decisionTxtStartIdx, &c10_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c10_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c10_covrtInstance, "", 4U, 0U, 1U, 0U, 3U, 0U,
                  0U, 0U, 3U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 0U,
                     "c10_flightControlSystem", 0, -1, 558);
  covrtEmlIfInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 0U, 143, 155, -1,
                    274, false);
  covrtEmlIfInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 1U, 287, 294, 397,
                    545, false);
  covrtEmlIfInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 2U, 417, 505, 544,
                    545, false);
  covrtEmlForInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 0U, 107, 118, 286);
  covrtEmlForInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 1U, 123, 134, 282);
  covrtEmlForInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 2U, 397, 412, 545);
  covrtEmlRelationalInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 0U, 146,
    155, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 1U, 290,
    294, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c10_covrtInstance, 4U, 0U, 2U, 420,
    505, -1, 0U);
}

static void mdl_cleanup_runtime_resources_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c10_covrtInstance);
}

static void enable_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c10_cv4[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c10_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c10_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c10_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c10_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  static char_T c10_cv5[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c10_b_st;
  emlrtStack c10_c_st;
  emlrtStack c10_d_st;
  emlrtStack c10_e_st;
  emlrtStack c10_f_st;
  emlrtStack c10_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c10_c_y = NULL;
  const mxArray *c10_d_y = NULL;
  const mxArray *c10_e_y = NULL;
  const mxArray *c10_f_y = NULL;
  const mxArray *c10_g_y = NULL;
  const mxArray *c10_h_y = NULL;
  real_T c10_b_y[256];
  real_T c10_localBins1[256];
  real_T c10_localBins2[256];
  real_T c10_localBins3[256];
  real_T c10_T;
  real_T c10_b_i;
  real_T c10_b_idx;
  real_T c10_b_k;
  real_T c10_b_r;
  real_T c10_b_theta;
  real_T c10_b_x;
  real_T c10_c_x;
  real_T c10_center_column;
  real_T c10_center_row;
  real_T c10_columns_counter;
  real_T c10_d;
  real_T c10_d1;
  real_T c10_d10;
  real_T c10_d11;
  real_T c10_d12;
  real_T c10_d13;
  real_T c10_d14;
  real_T c10_d15;
  real_T c10_d16;
  real_T c10_d17;
  real_T c10_d18;
  real_T c10_d2;
  real_T c10_d3;
  real_T c10_d4;
  real_T c10_d5;
  real_T c10_d6;
  real_T c10_d7;
  real_T c10_d8;
  real_T c10_d9;
  real_T c10_d_k;
  real_T c10_d_p;
  real_T c10_d_x;
  real_T c10_e_i;
  real_T c10_e_x;
  real_T c10_f_k;
  real_T c10_f_x;
  real_T c10_g_a;
  real_T c10_g_c;
  real_T c10_g_x;
  real_T c10_h_a;
  real_T c10_h_x;
  real_T c10_i_a;
  real_T c10_i_x;
  real_T c10_i_y;
  real_T c10_j_a;
  real_T c10_j_c;
  real_T c10_j_x;
  real_T c10_j_y;
  real_T c10_k_a;
  real_T c10_k_x;
  real_T c10_k_y;
  real_T c10_l_x;
  real_T c10_m_x;
  real_T c10_maxval;
  real_T c10_mu_t;
  real_T c10_n_x;
  real_T c10_num_elems;
  real_T c10_num_maxval;
  real_T c10_o_x;
  real_T c10_out;
  real_T c10_rows_counter;
  real_T c10_sigma_b_squared;
  real_T c10_t;
  real_T c10_x;
  int32_T c10_a;
  int32_T c10_b_a;
  int32_T c10_b_c;
  int32_T c10_c;
  int32_T c10_c_a;
  int32_T c10_c_c;
  int32_T c10_c_i;
  int32_T c10_c_k;
  int32_T c10_d_a;
  int32_T c10_d_c;
  int32_T c10_d_i;
  int32_T c10_e_a;
  int32_T c10_e_c;
  int32_T c10_e_k;
  int32_T c10_exitg2;
  int32_T c10_f_a;
  int32_T c10_f_c;
  int32_T c10_g_k;
  int32_T c10_h_c;
  int32_T c10_h_k;
  int32_T c10_i;
  int32_T c10_i1;
  int32_T c10_i10;
  int32_T c10_i11;
  int32_T c10_i12;
  int32_T c10_i13;
  int32_T c10_i14;
  int32_T c10_i15;
  int32_T c10_i16;
  int32_T c10_i17;
  int32_T c10_i18;
  int32_T c10_i19;
  int32_T c10_i2;
  int32_T c10_i20;
  int32_T c10_i21;
  int32_T c10_i22;
  int32_T c10_i23;
  int32_T c10_i24;
  int32_T c10_i25;
  int32_T c10_i26;
  int32_T c10_i27;
  int32_T c10_i28;
  int32_T c10_i29;
  int32_T c10_i3;
  int32_T c10_i30;
  int32_T c10_i31;
  int32_T c10_i32;
  int32_T c10_i33;
  int32_T c10_i34;
  int32_T c10_i35;
  int32_T c10_i36;
  int32_T c10_i37;
  int32_T c10_i38;
  int32_T c10_i39;
  int32_T c10_i4;
  int32_T c10_i5;
  int32_T c10_i6;
  int32_T c10_i7;
  int32_T c10_i8;
  int32_T c10_i9;
  int32_T c10_i_c;
  int32_T c10_idx;
  int32_T c10_idx1;
  int32_T c10_idx2;
  int32_T c10_idx3;
  int32_T c10_idx4;
  int32_T c10_k;
  int32_T c10_k_c;
  int32_T c10_l_a;
  int32_T c10_l_c;
  int32_T c10_m_a;
  int32_T c10_m_c;
  int32_T c10_n_a;
  int32_T c10_o_a;
  int32_T c10_r;
  int32_T c10_theta;
  uint8_T c10_b_u[19200];
  boolean_T c10_c_u[19200];
  boolean_T c10_d_u[6400];
  boolean_T c10_b;
  boolean_T c10_b1;
  boolean_T c10_b2;
  boolean_T c10_b3;
  boolean_T c10_b4;
  boolean_T c10_b5;
  boolean_T c10_b_b;
  boolean_T c10_b_p;
  boolean_T c10_c_b;
  boolean_T c10_c_p;
  boolean_T c10_d_b;
  boolean_T c10_e_b;
  boolean_T c10_exitg1;
  boolean_T c10_f_b;
  boolean_T c10_isfinite_maxval;
  boolean_T c10_p;
  c10_st.tls = chartInstance->c10_fEmlrtCtx;
  c10_b_st.prev = &c10_st;
  c10_b_st.tls = c10_st.tls;
  c10_c_st.prev = &c10_b_st;
  c10_c_st.tls = c10_b_st.tls;
  c10_d_st.prev = &c10_c_st;
  c10_d_st.tls = c10_c_st.tls;
  c10_e_st.prev = &c10_d_st;
  c10_e_st.tls = c10_d_st.tls;
  c10_f_st.prev = &c10_e_st;
  c10_f_st.tls = c10_e_st.tls;
  for (c10_i = 0; c10_i < 19200; c10_i++) {
    covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 0U,
                      (*chartInstance->c10_u)[c10_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c10_JITTransitionAnimation[0] = 0U;
  chartInstance->c10_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c10_covrtInstance, 4U, 0, 0);
  c10_b_i = 0.0;
  c10_columns_counter = 0.0;
  c10_rows_counter = 0.0;
  c10_b_st.site = &c10_emlrtRSI;
  c10_c_st.site = &c10_b_emlrtRSI;
  c10_d_st.site = &c10_c_emlrtRSI;
  c10_e_st.site = &c10_d_emlrtRSI;
  c10_f_st.site = &c10_e_emlrtRSI;
  grayto8_real64(&(*chartInstance->c10_u)[0], &c10_b_u[0], 19200.0);
  c10_d_st.site = &c10_c_emlrtRSI;
  c10_e_st.site = &c10_g_emlrtRSI;
  c10_f_st.site = &c10_h_emlrtRSI;
  c10_out = 1.0;
  getnumcores(&c10_out);
  c10_f_st.site = &c10_i_emlrtRSI;
  memset(&c10_b_y[0], 0, sizeof(real_T) << 8);
  memset(&c10_localBins1[0], 0, sizeof(real_T) << 8);
  memset(&c10_localBins2[0], 0, sizeof(real_T) << 8);
  memset(&c10_localBins3[0], 0, sizeof(real_T) << 8);
  for (c10_c_i = 1; c10_c_i + 3 <= 19200; c10_c_i += 4) {
    c10_d = (real_T)c10_c_i;
    if (c10_d != (real_T)(int32_T)muDoubleScalarFloor(c10_d)) {
      emlrtIntegerCheckR2012b(c10_d, &c10_emlrtDCI, &c10_f_st);
    }

    c10_i1 = (int32_T)muDoubleScalarFloor(c10_d);
    if ((c10_i1 < 1) || (c10_i1 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c10_i1, 1, 19200, &c10_emlrtBCI, &c10_f_st);
    }

    c10_idx1 = c10_b_u[c10_i1 - 1];
    c10_d2 = (real_T)(c10_c_i + 1);
    if (c10_d2 != (real_T)(int32_T)muDoubleScalarFloor(c10_d2)) {
      emlrtIntegerCheckR2012b(c10_d2, &c10_b_emlrtDCI, &c10_f_st);
    }

    c10_i4 = (int32_T)muDoubleScalarFloor(c10_d2);
    if ((c10_i4 < 1) || (c10_i4 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c10_i4, 1, 19200, &c10_b_emlrtBCI, &c10_f_st);
    }

    c10_idx2 = c10_b_u[c10_i4 - 1];
    c10_d4 = (real_T)(c10_c_i + 2);
    if (c10_d4 != (real_T)(int32_T)muDoubleScalarFloor(c10_d4)) {
      emlrtIntegerCheckR2012b(c10_d4, &c10_d_emlrtDCI, &c10_f_st);
    }

    c10_i8 = (int32_T)muDoubleScalarFloor(c10_d4);
    if ((c10_i8 < 1) || (c10_i8 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c10_i8, 1, 19200, &c10_d_emlrtBCI, &c10_f_st);
    }

    c10_idx3 = c10_b_u[c10_i8 - 1];
    c10_d6 = (real_T)(c10_c_i + 3);
    if (c10_d6 != (real_T)(int32_T)muDoubleScalarFloor(c10_d6)) {
      emlrtIntegerCheckR2012b(c10_d6, &c10_e_emlrtDCI, &c10_f_st);
    }

    c10_i11 = (int32_T)muDoubleScalarFloor(c10_d6);
    if ((c10_i11 < 1) || (c10_i11 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c10_i11, 1, 19200, &c10_e_emlrtBCI,
        &c10_f_st);
    }

    c10_idx4 = c10_b_u[c10_i11 - 1];
    c10_c_a = c10_idx1 + 1;
    c10_c_c = c10_c_a;
    c10_d_a = c10_idx1 + 1;
    c10_d_c = c10_d_a;
    c10_d7 = (real_T)c10_d_c;
    if (c10_d7 != (real_T)(int32_T)muDoubleScalarFloor(c10_d7)) {
      emlrtIntegerCheckR2012b(c10_d7, &c10_m_emlrtDCI, &c10_f_st);
    }

    c10_i14 = (int32_T)muDoubleScalarFloor(c10_d7);
    if ((c10_i14 < 1) || (c10_i14 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i14, 1, 256, &c10_m_emlrtBCI, &c10_f_st);
    }

    c10_d8 = (real_T)c10_c_c;
    if (c10_d8 != (real_T)(int32_T)muDoubleScalarFloor(c10_d8)) {
      emlrtIntegerCheckR2012b(c10_d8, &c10_n_emlrtDCI, &c10_f_st);
    }

    c10_i16 = (int32_T)muDoubleScalarFloor(c10_d8);
    if ((c10_i16 < 1) || (c10_i16 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i16, 1, 256, &c10_n_emlrtBCI, &c10_f_st);
    }

    c10_localBins1[c10_i16 - 1] = c10_localBins1[c10_i14 - 1] + 1.0;
    c10_e_a = c10_idx2 + 1;
    c10_e_c = c10_e_a;
    c10_f_a = c10_idx2 + 1;
    c10_f_c = c10_f_a;
    c10_d10 = (real_T)c10_f_c;
    if (c10_d10 != (real_T)(int32_T)muDoubleScalarFloor(c10_d10)) {
      emlrtIntegerCheckR2012b(c10_d10, &c10_o_emlrtDCI, &c10_f_st);
    }

    c10_i21 = (int32_T)muDoubleScalarFloor(c10_d10);
    if ((c10_i21 < 1) || (c10_i21 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i21, 1, 256, &c10_o_emlrtBCI, &c10_f_st);
    }

    c10_d12 = (real_T)c10_e_c;
    if (c10_d12 != (real_T)(int32_T)muDoubleScalarFloor(c10_d12)) {
      emlrtIntegerCheckR2012b(c10_d12, &c10_p_emlrtDCI, &c10_f_st);
    }

    c10_i27 = (int32_T)muDoubleScalarFloor(c10_d12);
    if ((c10_i27 < 1) || (c10_i27 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i27, 1, 256, &c10_p_emlrtBCI, &c10_f_st);
    }

    c10_localBins2[c10_i27 - 1] = c10_localBins2[c10_i21 - 1] + 1.0;
    c10_l_a = c10_idx3 + 1;
    c10_i_c = c10_l_a;
    c10_m_a = c10_idx3 + 1;
    c10_k_c = c10_m_a;
    c10_d13 = (real_T)c10_k_c;
    if (c10_d13 != (real_T)(int32_T)muDoubleScalarFloor(c10_d13)) {
      emlrtIntegerCheckR2012b(c10_d13, &c10_q_emlrtDCI, &c10_f_st);
    }

    c10_i33 = (int32_T)muDoubleScalarFloor(c10_d13);
    if ((c10_i33 < 1) || (c10_i33 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i33, 1, 256, &c10_q_emlrtBCI, &c10_f_st);
    }

    c10_d14 = (real_T)c10_i_c;
    if (c10_d14 != (real_T)(int32_T)muDoubleScalarFloor(c10_d14)) {
      emlrtIntegerCheckR2012b(c10_d14, &c10_r_emlrtDCI, &c10_f_st);
    }

    c10_i35 = (int32_T)muDoubleScalarFloor(c10_d14);
    if ((c10_i35 < 1) || (c10_i35 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i35, 1, 256, &c10_r_emlrtBCI, &c10_f_st);
    }

    c10_localBins3[c10_i35 - 1] = c10_localBins3[c10_i33 - 1] + 1.0;
    c10_n_a = c10_idx4 + 1;
    c10_l_c = c10_n_a;
    c10_o_a = c10_idx4 + 1;
    c10_m_c = c10_o_a;
    c10_d16 = (real_T)c10_m_c;
    if (c10_d16 != (real_T)(int32_T)muDoubleScalarFloor(c10_d16)) {
      emlrtIntegerCheckR2012b(c10_d16, &c10_s_emlrtDCI, &c10_f_st);
    }

    c10_i36 = (int32_T)muDoubleScalarFloor(c10_d16);
    if ((c10_i36 < 1) || (c10_i36 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i36, 1, 256, &c10_s_emlrtBCI, &c10_f_st);
    }

    c10_d17 = (real_T)c10_l_c;
    if (c10_d17 != (real_T)(int32_T)muDoubleScalarFloor(c10_d17)) {
      emlrtIntegerCheckR2012b(c10_d17, &c10_t_emlrtDCI, &c10_f_st);
    }

    c10_i39 = (int32_T)muDoubleScalarFloor(c10_d17);
    if ((c10_i39 < 1) || (c10_i39 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i39, 1, 256, &c10_t_emlrtBCI, &c10_f_st);
    }

    c10_b_y[c10_i39 - 1] = c10_b_y[c10_i36 - 1] + 1.0;
  }

  while (c10_c_i <= 19200) {
    c10_d1 = (real_T)c10_c_i;
    if (c10_d1 != (real_T)(int32_T)muDoubleScalarFloor(c10_d1)) {
      emlrtIntegerCheckR2012b(c10_d1, &c10_c_emlrtDCI, &c10_f_st);
    }

    c10_i2 = (int32_T)muDoubleScalarFloor(c10_d1);
    if ((c10_i2 < 1) || (c10_i2 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c10_i2, 1, 19200, &c10_c_emlrtBCI, &c10_f_st);
    }

    c10_idx = c10_b_u[c10_i2 - 1];
    c10_a = c10_idx + 1;
    c10_c = c10_a;
    c10_b_a = c10_idx + 1;
    c10_b_c = c10_b_a;
    c10_d3 = (real_T)c10_b_c;
    if (c10_d3 != (real_T)(int32_T)muDoubleScalarFloor(c10_d3)) {
      emlrtIntegerCheckR2012b(c10_d3, &c10_k_emlrtDCI, &c10_f_st);
    }

    c10_i6 = (int32_T)muDoubleScalarFloor(c10_d3);
    if ((c10_i6 < 1) || (c10_i6 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i6, 1, 256, &c10_k_emlrtBCI, &c10_f_st);
    }

    c10_d5 = (real_T)c10_c;
    if (c10_d5 != (real_T)(int32_T)muDoubleScalarFloor(c10_d5)) {
      emlrtIntegerCheckR2012b(c10_d5, &c10_l_emlrtDCI, &c10_f_st);
    }

    c10_i10 = (int32_T)muDoubleScalarFloor(c10_d5);
    if ((c10_i10 < 1) || (c10_i10 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i10, 1, 256, &c10_l_emlrtBCI, &c10_f_st);
    }

    c10_b_y[c10_i10 - 1] = c10_b_y[c10_i6 - 1] + 1.0;
    c10_c_i++;
  }

  for (c10_d_i = 0; c10_d_i < 256; c10_d_i++) {
    c10_e_i = 1.0 + (real_T)c10_d_i;
    if (c10_e_i != (real_T)(int32_T)muDoubleScalarFloor(c10_e_i)) {
      emlrtIntegerCheckR2012b(c10_e_i, &c10_f_emlrtDCI, &c10_f_st);
    }

    c10_i3 = (int32_T)c10_e_i;
    if ((c10_i3 < 1) || (c10_i3 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i3, 1, 256, &c10_f_emlrtBCI, &c10_f_st);
    }

    if (c10_e_i != (real_T)(int32_T)muDoubleScalarFloor(c10_e_i)) {
      emlrtIntegerCheckR2012b(c10_e_i, &c10_g_emlrtDCI, &c10_f_st);
    }

    c10_i5 = (int32_T)c10_e_i;
    if ((c10_i5 < 1) || (c10_i5 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i5, 1, 256, &c10_g_emlrtBCI, &c10_f_st);
    }

    if (c10_e_i != (real_T)(int32_T)muDoubleScalarFloor(c10_e_i)) {
      emlrtIntegerCheckR2012b(c10_e_i, &c10_h_emlrtDCI, &c10_f_st);
    }

    c10_i7 = (int32_T)c10_e_i;
    if ((c10_i7 < 1) || (c10_i7 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i7, 1, 256, &c10_h_emlrtBCI, &c10_f_st);
    }

    if (c10_e_i != (real_T)(int32_T)muDoubleScalarFloor(c10_e_i)) {
      emlrtIntegerCheckR2012b(c10_e_i, &c10_i_emlrtDCI, &c10_f_st);
    }

    c10_i9 = (int32_T)c10_e_i;
    if ((c10_i9 < 1) || (c10_i9 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i9, 1, 256, &c10_i_emlrtBCI, &c10_f_st);
    }

    if (c10_e_i != (real_T)(int32_T)muDoubleScalarFloor(c10_e_i)) {
      emlrtIntegerCheckR2012b(c10_e_i, &c10_j_emlrtDCI, &c10_f_st);
    }

    c10_i12 = (int32_T)c10_e_i;
    if ((c10_i12 < 1) || (c10_i12 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i12, 1, 256, &c10_j_emlrtBCI, &c10_f_st);
    }

    c10_b_y[c10_i12 - 1] = ((c10_b_y[c10_i3 - 1] + c10_localBins1[c10_i5 - 1]) +
      c10_localBins2[c10_i7 - 1]) + c10_localBins3[c10_i9 - 1];
  }

  c10_d_st.site = &c10_c_emlrtRSI;
  c10_e_st.site = &c10_l_emlrtRSI;
  c10_f_st.site = &c10_n_emlrtRSI;
  c10_p = true;
  c10_k = 0;
  c10_exitg1 = false;
  while ((!c10_exitg1) && (c10_k < 256)) {
    c10_b_k = 1.0 + (real_T)c10_k;
    c10_x = c10_b_y[(int32_T)c10_b_k - 1];
    c10_b_x = c10_x;
    c10_b_b = muDoubleScalarIsInf(c10_b_x);
    c10_b1 = !c10_b_b;
    c10_c_x = c10_x;
    c10_c_b = muDoubleScalarIsNaN(c10_c_x);
    c10_b2 = !c10_c_b;
    c10_d_b = (c10_b1 && c10_b2);
    if (c10_d_b) {
      c10_k++;
    } else {
      c10_p = false;
      c10_exitg1 = true;
    }
  }

  if (c10_p) {
    c10_b = true;
  } else {
    c10_b = false;
  }

  if (!c10_b) {
    c10_c_y = NULL;
    sf_mex_assign(&c10_c_y, sf_mex_create("y", c10_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c10_d_y = NULL;
    sf_mex_assign(&c10_d_y, sf_mex_create("y", c10_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c10_e_y = NULL;
    sf_mex_assign(&c10_e_y, sf_mex_create("y", c10_cv2, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c10_f_st, &c10_emlrtMCI, "error", 0U, 2U, 14, c10_c_y, 14,
                sf_mex_call(&c10_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c10_f_st, NULL, "message", 1U, 2U, 14, c10_d_y, 14, c10_e_y)));
  }

  c10_f_st.site = &c10_n_emlrtRSI;
  c10_b_p = true;
  c10_c_k = 0;
  c10_exitg1 = false;
  while ((!c10_exitg1) && (c10_c_k < 256)) {
    c10_d_k = 1.0 + (real_T)c10_c_k;
    c10_d_x = c10_b_y[(int32_T)c10_d_k - 1];
    c10_c_p = !(c10_d_x < 0.0);
    if (c10_c_p) {
      c10_c_k++;
    } else {
      c10_b_p = false;
      c10_exitg1 = true;
    }
  }

  if (c10_b_p) {
    c10_b3 = true;
  } else {
    c10_b3 = false;
  }

  if (!c10_b3) {
    c10_f_y = NULL;
    sf_mex_assign(&c10_f_y, sf_mex_create("y", c10_cv3, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c10_g_y = NULL;
    sf_mex_assign(&c10_g_y, sf_mex_create("y", c10_cv4, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c10_h_y = NULL;
    sf_mex_assign(&c10_h_y, sf_mex_create("y", c10_cv5, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c10_f_st, &c10_b_emlrtMCI, "error", 0U, 2U, 14, c10_f_y, 14,
                sf_mex_call(&c10_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c10_f_st, NULL, "message", 1U, 2U, 14, c10_g_y, 14, c10_h_y)));
  }

  c10_num_elems = 0.0;
  for (c10_e_k = 0; c10_e_k < 256; c10_e_k++) {
    c10_f_k = 1.0 + (real_T)c10_e_k;
    if (c10_f_k != (real_T)(int32_T)muDoubleScalarFloor(c10_f_k)) {
      emlrtIntegerCheckR2012b(c10_f_k, &c10_u_emlrtDCI, &c10_d_st);
    }

    c10_i13 = (int32_T)c10_f_k;
    if ((c10_i13 < 1) || (c10_i13 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i13, 1, 256, &c10_u_emlrtBCI, &c10_d_st);
    }

    c10_num_elems += c10_b_y[c10_i13 - 1];
  }

  c10_localBins1[0] = c10_b_y[0] / c10_num_elems;
  c10_localBins2[0] = c10_localBins1[0];
  for (c10_g_k = 0; c10_g_k < 255; c10_g_k++) {
    c10_f_k = 2.0 + (real_T)c10_g_k;
    if (c10_f_k != (real_T)(int32_T)muDoubleScalarFloor(c10_f_k)) {
      emlrtIntegerCheckR2012b(c10_f_k, &c10_v_emlrtDCI, &c10_d_st);
    }

    c10_i15 = (int32_T)c10_f_k;
    if ((c10_i15 < 1) || (c10_i15 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i15, 1, 256, &c10_v_emlrtBCI, &c10_d_st);
    }

    c10_d_p = c10_b_y[c10_i15 - 1] / c10_num_elems;
    c10_d9 = c10_f_k - 1.0;
    if (c10_d9 != (real_T)(int32_T)muDoubleScalarFloor(c10_d9)) {
      emlrtIntegerCheckR2012b(c10_d9, &c10_w_emlrtDCI, &c10_d_st);
    }

    c10_i18 = (int32_T)c10_d9;
    if ((c10_i18 < 1) || (c10_i18 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i18, 1, 256, &c10_w_emlrtBCI, &c10_d_st);
    }

    if (c10_f_k != (real_T)(int32_T)muDoubleScalarFloor(c10_f_k)) {
      emlrtIntegerCheckR2012b(c10_f_k, &c10_x_emlrtDCI, &c10_d_st);
    }

    c10_i20 = (int32_T)c10_f_k;
    if ((c10_i20 < 1) || (c10_i20 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i20, 1, 256, &c10_x_emlrtBCI, &c10_d_st);
    }

    c10_localBins1[c10_i20 - 1] = c10_localBins1[c10_i18 - 1] + c10_d_p;
    c10_d11 = c10_f_k - 1.0;
    if (c10_d11 != (real_T)(int32_T)muDoubleScalarFloor(c10_d11)) {
      emlrtIntegerCheckR2012b(c10_d11, &c10_y_emlrtDCI, &c10_d_st);
    }

    c10_i26 = (int32_T)c10_d11;
    if ((c10_i26 < 1) || (c10_i26 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i26, 1, 256, &c10_y_emlrtBCI, &c10_d_st);
    }

    if (c10_f_k != (real_T)(int32_T)muDoubleScalarFloor(c10_f_k)) {
      emlrtIntegerCheckR2012b(c10_f_k, &c10_ab_emlrtDCI, &c10_d_st);
    }

    c10_i30 = (int32_T)c10_f_k;
    if ((c10_i30 < 1) || (c10_i30 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i30, 1, 256, &c10_ab_emlrtBCI, &c10_d_st);
    }

    c10_localBins2[c10_i30 - 1] = c10_localBins2[c10_i26 - 1] + c10_d_p *
      c10_f_k;
  }

  c10_mu_t = c10_localBins2[255];
  c10_maxval = rtMinusInf;
  c10_b_idx = 0.0;
  c10_num_maxval = 0.0;
  for (c10_h_k = 0; c10_h_k < 255; c10_h_k++) {
    c10_f_k = 1.0 + (real_T)c10_h_k;
    c10_e_st.site = &c10_m_emlrtRSI;
    if (c10_f_k != (real_T)(int32_T)muDoubleScalarFloor(c10_f_k)) {
      emlrtIntegerCheckR2012b(c10_f_k, &c10_bb_emlrtDCI, &c10_e_st);
    }

    c10_i17 = (int32_T)c10_f_k;
    if ((c10_i17 < 1) || (c10_i17 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i17, 1, 256, &c10_bb_emlrtBCI, &c10_e_st);
    }

    if (c10_f_k != (real_T)(int32_T)muDoubleScalarFloor(c10_f_k)) {
      emlrtIntegerCheckR2012b(c10_f_k, &c10_cb_emlrtDCI, &c10_e_st);
    }

    c10_i19 = (int32_T)c10_f_k;
    if ((c10_i19 < 1) || (c10_i19 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i19, 1, 256, &c10_cb_emlrtBCI, &c10_e_st);
    }

    c10_g_a = c10_mu_t * c10_localBins1[c10_i17 - 1] - c10_localBins2[c10_i19 -
      1];
    c10_f_st.site = &c10_o_emlrtRSI;
    c10_h_a = c10_g_a;
    c10_i_a = c10_h_a;
    c10_j_a = c10_i_a;
    c10_k_a = c10_j_a;
    c10_g_c = c10_k_a * c10_k_a;
    if (c10_f_k != (real_T)(int32_T)muDoubleScalarFloor(c10_f_k)) {
      emlrtIntegerCheckR2012b(c10_f_k, &c10_db_emlrtDCI, &c10_d_st);
    }

    c10_i29 = (int32_T)c10_f_k;
    if ((c10_i29 < 1) || (c10_i29 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i29, 1, 256, &c10_db_emlrtBCI, &c10_d_st);
    }

    if (c10_f_k != (real_T)(int32_T)muDoubleScalarFloor(c10_f_k)) {
      emlrtIntegerCheckR2012b(c10_f_k, &c10_eb_emlrtDCI, &c10_d_st);
    }

    c10_i31 = (int32_T)c10_f_k;
    if ((c10_i31 < 1) || (c10_i31 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c10_i31, 1, 256, &c10_eb_emlrtBCI, &c10_d_st);
    }

    c10_sigma_b_squared = c10_g_c / (c10_localBins1[c10_i29 - 1] * (1.0 -
      c10_localBins1[c10_i31 - 1]));
    if (c10_sigma_b_squared > c10_maxval) {
      c10_maxval = c10_sigma_b_squared;
      c10_b_idx = c10_f_k;
      c10_num_maxval = 1.0;
    } else if (c10_sigma_b_squared == c10_maxval) {
      c10_b_idx += c10_f_k;
      c10_num_maxval++;
    }
  }

  c10_e_x = c10_maxval;
  c10_f_x = c10_e_x;
  c10_e_b = muDoubleScalarIsInf(c10_f_x);
  c10_b4 = !c10_e_b;
  c10_g_x = c10_e_x;
  c10_f_b = muDoubleScalarIsNaN(c10_g_x);
  c10_b5 = !c10_f_b;
  c10_isfinite_maxval = (c10_b4 && c10_b5);
  if (c10_isfinite_maxval) {
    c10_b_idx /= c10_num_maxval;
    c10_t = (c10_b_idx - 1.0) / 255.0;
  } else {
    c10_t = 0.0;
  }

  c10_T = c10_t;
  for (c10_i22 = 0; c10_i22 < 19200; c10_i22++) {
    c10_c_u[c10_i22] = ((*chartInstance->c10_u)[c10_i22] > c10_T);
  }

  c10_i23 = 0;
  c10_i24 = 0;
  for (c10_i25 = 0; c10_i25 < 80; c10_i25++) {
    for (c10_i28 = 0; c10_i28 < 80; c10_i28++) {
      c10_d_u[c10_i28 + c10_i23] = c10_c_u[(c10_i28 + c10_i24) + 4820];
    }

    c10_i23 += 80;
    c10_i24 += 120;
  }

  for (c10_r = 0; c10_r < 80; c10_r++) {
    c10_b_r = 1.0 + (real_T)c10_r;
    covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 0, 1);
    for (c10_h_c = 0; c10_h_c < 80; c10_h_c++) {
      c10_j_c = 1.0 + (real_T)c10_h_c;
      covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 1, 1);
      if (c10_b_r != (real_T)(int32_T)muDoubleScalarFloor(c10_b_r)) {
        emlrtIntegerCheckR2012b(c10_b_r, &c10_fb_emlrtDCI, &c10_st);
      }

      c10_i32 = (int32_T)c10_b_r;
      if ((c10_i32 < 1) || (c10_i32 > 80)) {
        emlrtDynamicBoundsCheckR2012b(c10_i32, 1, 80, &c10_fb_emlrtBCI, &c10_st);
      }

      if (c10_j_c != (real_T)(int32_T)muDoubleScalarFloor(c10_j_c)) {
        emlrtIntegerCheckR2012b(c10_j_c, &c10_gb_emlrtDCI, &c10_st);
      }

      c10_i34 = (int32_T)c10_j_c;
      if ((c10_i34 < 1) || (c10_i34 > 80)) {
        emlrtDynamicBoundsCheckR2012b(c10_i34, 1, 80, &c10_gb_emlrtBCI, &c10_st);
      }

      c10_d15 = (real_T)c10_d_u[(c10_i32 + 80 * (c10_i34 - 1)) - 1];
      if (covrtEmlIfEval(chartInstance->c10_covrtInstance, 4U, 0, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c10_covrtInstance, 4U, 0U, 0U, c10_d15,
                          1.0, -1, 0U, c10_d15 == 1.0))) {
        c10_b_i++;
        c10_columns_counter += c10_j_c;
        c10_rows_counter += c10_b_r;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 0, 0);
  if (covrtEmlIfEval(chartInstance->c10_covrtInstance, 4U, 0, 1,
                     covrtRelationalopUpdateFcn(chartInstance->c10_covrtInstance,
        4U, 0U, 1U, c10_b_i, 0.0, -1, 0U, c10_b_i == 0.0))) {
    c10_i_y = 0.0;
  } else {
    c10_center_column = c10_columns_counter / c10_b_i + 40.0;
    c10_center_row = c10_rows_counter / c10_b_i + 20.0;
    c10_theta = 0;
    do {
      c10_exitg2 = 0;
      if (c10_theta < 63) {
        c10_b_theta = (real_T)c10_theta;
        covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 2, 1);
        c10_h_x = c10_b_theta / 10.0;
        c10_i_x = c10_h_x;
        c10_i_x = muDoubleScalarCos(c10_i_x);
        c10_j_x = 15.0 * c10_i_x + c10_center_row;
        c10_k_x = c10_j_x;
        c10_j_y = c10_k_x;
        c10_j_y = muDoubleScalarRound(c10_j_y);
        c10_l_x = c10_b_theta / 10.0;
        c10_m_x = c10_l_x;
        c10_m_x = muDoubleScalarSin(c10_m_x);
        c10_n_x = 15.0 * c10_m_x + c10_center_column;
        c10_o_x = c10_n_x;
        c10_k_y = c10_o_x;
        c10_k_y = muDoubleScalarRound(c10_k_y);
        if (c10_j_y != (real_T)(int32_T)muDoubleScalarFloor(c10_j_y)) {
          emlrtIntegerCheckR2012b(c10_j_y, &c10_hb_emlrtDCI, &c10_st);
        }

        c10_i37 = (int32_T)c10_j_y;
        if ((c10_i37 < 1) || (c10_i37 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c10_i37, 1, 120, &c10_hb_emlrtBCI,
            &c10_st);
        }

        if (c10_k_y != (real_T)(int32_T)muDoubleScalarFloor(c10_k_y)) {
          emlrtIntegerCheckR2012b(c10_k_y, &c10_ib_emlrtDCI, &c10_st);
        }

        c10_i38 = (int32_T)c10_k_y;
        if ((c10_i38 < 1) || (c10_i38 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c10_i38, 1, 160, &c10_ib_emlrtBCI,
            &c10_st);
        }

        c10_d18 = (real_T)c10_c_u[(c10_i37 + 120 * (c10_i38 - 1)) - 1];
        if (covrtEmlIfEval(chartInstance->c10_covrtInstance, 4U, 0, 2,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c10_covrtInstance, 4U, 0U, 2U,
                            c10_d18, 0.0, -1, 0U, c10_d18 == 0.0))) {
          c10_i_y = 0.0;
          c10_exitg2 = 1;
        } else {
          c10_theta++;
          _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
        }
      } else {
        covrtEmlForEval(chartInstance->c10_covrtInstance, 4U, 0, 2, 0);
        c10_i_y = 1.0;
        c10_exitg2 = 1;
      }
    } while (c10_exitg2 == 0);
  }

  *chartInstance->c10_y = c10_i_y;
  covrtSigUpdateFcn(chartInstance->c10_covrtInstance, 1U, *chartInstance->c10_y);
}

static void ext_mode_exec_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c10_update_jit_animation_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c10_do_animation_call_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c10_b_y = NULL;
  const mxArray *c10_c_y = NULL;
  const mxArray *c10_st = NULL;
  c10_st = NULL;
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_createcellmatrix(1, 1), false);
  c10_c_y = NULL;
  sf_mex_assign(&c10_c_y, sf_mex_create("y", chartInstance->c10_y, 0, 0U, 0, 0U,
    0), false);
  sf_mex_setcell(c10_b_y, 0, c10_c_y);
  sf_mex_assign(&c10_st, c10_b_y, false);
  return c10_st;
}

static void set_sim_state_c10_flightControlSystem
  (SFc10_flightControlSystemInstanceStruct *chartInstance, const mxArray *c10_st)
{
  const mxArray *c10_b_u;
  chartInstance->c10_doneDoubleBufferReInit = true;
  c10_b_u = sf_mex_dup(c10_st);
  *chartInstance->c10_y = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c10_b_u, 0)), "y");
  sf_mex_destroy(&c10_b_u);
  sf_mex_destroy(&c10_st);
}

const mxArray *sf_c10_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c10_nameCaptureInfo = NULL;
  c10_nameCaptureInfo = NULL;
  sf_mex_assign(&c10_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c10_nameCaptureInfo;
}

static real_T c10_emlrt_marshallIn(SFc10_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c10_nullptr, const char_T *c10_identifier)
{
  emlrtMsgIdentifier c10_thisId;
  real_T c10_b_y;
  c10_thisId.fIdentifier = (const char_T *)c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_b_y = c10_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_nullptr),
    &c10_thisId);
  sf_mex_destroy(&c10_nullptr);
  return c10_b_y;
}

static real_T c10_b_emlrt_marshallIn(SFc10_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c10_b_u, const emlrtMsgIdentifier *c10_parentId)
{
  real_T c10_b_y;
  real_T c10_d;
  (void)chartInstance;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_b_u), &c10_d, 1, 0, 0U, 0, 0U, 0);
  c10_b_y = c10_d;
  sf_mex_destroy(&c10_b_u);
  return c10_b_y;
}

static void init_dsm_address_info(SFc10_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc10_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c10_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c10_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c10_u = (real_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c10_y = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c10_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1699948898U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3574307253U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(824560925U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2914290661U);
}

mxArray *sf_c10_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c10_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c10_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c10_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCWYGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYeAD/aU6RdxAOk3QNLPQkC/AJBVCQ0XEAAALEwMtA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c10_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "svkUiYFcT4aBOokOFX7cWaH";
}

static void sf_opaque_initialize_c10_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c10_flightControlSystem
    ((SFc10_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c10_flightControlSystem((SFc10_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c10_flightControlSystem(void *chartInstanceVar)
{
  enable_c10_flightControlSystem((SFc10_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c10_flightControlSystem(void *chartInstanceVar)
{
  disable_c10_flightControlSystem((SFc10_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c10_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c10_flightControlSystem((SFc10_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c10_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c10_flightControlSystem
    ((SFc10_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c10_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c10_flightControlSystem((SFc10_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c10_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc10_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c10_flightControlSystem
      ((SFc10_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c10_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c10_flightControlSystem((SFc10_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc10_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c10_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c10_flightControlSystem((SFc10_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c10_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c10_flightControlSystem
      ((SFc10_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c10_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [20] = {
    "eNrdWE2P20QYnizLqkWlWiSk9oAEN7gg9QNEDwi6mw8aaZdEOLsFLjCxX9ujjGfc+Ug23PhB/QH",
    "9Bz32gsSRC3ckDnDkHcfJRtmQ9ThSd8GS44ydZ953nnneD4c0uscEj9t49u8QsofXG3jukNnxZj",
    "luLJ2z+7vk83Lcf4uQMKXKdEUsif8RyggSEIGNY3bmiRU261NFM13DrqAZfANacmuYFH7OMxGDA",
    "hHiBLlUxsuuZpnlTIw6VoTOsn6asjANUml5dIgT0qgn+PTf7ObW9NFiiykITQcgMqmSNkk7nCab",
    "WVBm0kwhHGmbeXOlwQQ2d0vVx5YblnNon0HYFdpQZEFfst7AUANNc+atEKaDOVpmOWdUVOc6pTq",
    "AHNVh4CSP8LNnDbJX0S7aGzJBjVSM8nbGm07hFbF9jn4eo6y5N88mMy0Y2iRhInHsKpuBwPWjTi",
    "pwFTflGBRNoCc8Y9Ctrn1WbPBCl9VjsOtkWSsGbTbbFV0LW9htj5EhXdNuJxRNyrn2ww5kfgRj4",
    "IX9FjW0BnZm3wOsNYsG8pQqFwWekWQFe2ahxDaliFj1HR6voIqE+zUmzwpwljlJQYQ0L1xfTHSZ",
    "Jq02MmtiGLWOjirau4jtCgMqpiFUzn2KMg3ocKErT7sR03TIHRpZMsUqK88AojaU6NiK1kSqEXL",
    "sm2TPuXKR4IeGKIEWGCgSRhvVfUq5rehzpjHDOXmcaMxYfnYR6+KnFjikYQqRqyeMwzFoN4GunJ",
    "+xjhzgasfMTFugQ8XyqpFkNURYSBxLg2kOJ2Ik5ER0lMyCsiPYoCsAzBpUCSwLh1iW1LSDzlfzW",
    "sGzgVNWnfYso4bTodPGVyCwsri1ukpIQ4yqtsDWDR3aBhuwn7C0C820wXZq2i5iICr60bsNv370",
    "nXL8cBFLXT1QuFMUy7DATulgWDR7MGAZFDcCij3FbFgezu49cm735s5muzv4rVETR7bEPVnC7a7",
    "h584Sbr8ch/fv/RBzlqQuCxsleTBF4rMLftyqwPc6/1dx5ALunOf59aMlfGONXbJ03WZ/Hi/h3l",
    "6xs7uC2ys5+/Hnv07Jq9/f6Bz88tufHz5/sY39l556vl2O35v3Z4sKNr6Q5OvqQY9HJ+y7Tjj4h",
    "B725KjX+faz8Cl9Uiv+5vc/wNNggivypQq7Ufmu5cbUzt4B3PyPlvzdu2T+m0t6IuSPL7fDv/t4",
    "dR93L8Hv47fpim6ve564qrx0lX5WyVuN14wjrxm37fp88/F//feb8gBZ+f3+NV4H2ZCffOrydVv",
    "Xr8SvDr1fjr9YvDM3U8ajNV17+Rgb63jd0/+Jvv/25G/eJ7Qdf+Wfft8/PBCUT7FNn70Glbf7yv",
    "3ftHikgOr170JXUYfImr5vXZ2/tRLfbjxhIpIT/fH9B58+2Kau/QOrkAGY",
    ""
  };

  static char newstr [1409] = "";
  newstr[0] = '\0';
  for (i = 0; i < 20; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c10_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c10_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1459061088U));
  ssSetChecksum1(S,(65392640U));
  ssSetChecksum2(S,(3772072262U));
  ssSetChecksum3(S,(3115132915U));
}

static void mdlRTW_c10_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c10_flightControlSystem(SimStruct *S)
{
  SFc10_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc10_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc10_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc10_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c10_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c10_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c10_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c10_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c10_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c10_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c10_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c10_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c10_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c10_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c10_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c10_flightControlSystem;
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

  mdl_setup_runtime_resources_c10_flightControlSystem(chartInstance);
}

void c10_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c10_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c10_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c10_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c10_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
