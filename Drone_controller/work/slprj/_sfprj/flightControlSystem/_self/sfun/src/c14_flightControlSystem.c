/* Include files */

#include "flightControlSystem_sfun.h"
#include "c14_flightControlSystem.h"
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
static emlrtMCInfo c14_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c14_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c14_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c14_emlrtRSI = { 7, /* lineNo */
  "Image Processing System/soluzione2/detect circle",/* fcnName */
  "#flightControlSystem:2938"          /* pathName */
};

static emlrtRSInfo c14_b_emlrtRSI = { 70,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c14_c_emlrtRSI = { 102,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c14_d_emlrtRSI = { 39,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c14_e_emlrtRSI = { 195,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c14_f_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRSInfo c14_g_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c14_h_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c14_i_emlrtRSI = { 203,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c14_j_emlrtRSI = { 448,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c14_k_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c14_l_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c14_m_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c14_n_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c14_o_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c14_p_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c14_emlrtBCI = { 1, /* iFirst */
  19200,                               /* iLast */
  1051,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_emlrtDCI = { 1051,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_b_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1052,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_b_emlrtDCI = { 1052,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_c_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1066,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_c_emlrtDCI = { 1066,/* lineNo */
  47,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_d_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1053,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_d_emlrtDCI = { 1053,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_e_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1054,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_e_emlrtDCI = { 1054,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_f_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_f_emlrtDCI = { 1130,/* lineNo */
  18,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_g_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_g_emlrtDCI = { 1130,/* lineNo */
  34,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_h_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_h_emlrtDCI = { 1130,/* lineNo */
  50,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_i_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_i_emlrtDCI = { 1130,/* lineNo */
  66,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_j_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c14_j_emlrtDCI = { 1130,/* lineNo */
  11,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_k_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_k_emlrtDCI = { 1068,/* lineNo */
  52,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_l_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c14_l_emlrtDCI = { 1068,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_m_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_m_emlrtDCI = { 1056,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_n_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c14_n_emlrtDCI = { 1056,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_o_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_o_emlrtDCI = { 1057,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_p_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c14_p_emlrtDCI = { 1057,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_q_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_q_emlrtDCI = { 1058,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_r_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c14_r_emlrtDCI = { 1058,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_s_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_s_emlrtDCI = { 1059,/* lineNo */
  53,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_t_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c14_t_emlrtDCI = { 1059,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_u_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  54,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_u_emlrtDCI = { 54,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_v_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  66,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_v_emlrtDCI = { 66,/* lineNo */
  27,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_w_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_w_emlrtDCI = { 68,/* lineNo */
  26,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_x_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c14_x_emlrtDCI = { 68,/* lineNo */
  15,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_y_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_y_emlrtDCI = { 70,/* lineNo */
  20,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_ab_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c14_ab_emlrtDCI = { 70,/* lineNo */
  12,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_bb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_bb_emlrtDCI = { 85,/* lineNo */
  39,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_cb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_cb_emlrtDCI = { 85,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_db_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_db_emlrtDCI = { 85,/* lineNo */
  62,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_eb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_eb_emlrtDCI = { 85,/* lineNo */
  74,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_fb_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  12,                                  /* lineNo */
  14,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_fb_emlrtDCI = { 12,/* lineNo */
  14,                                  /* colNo */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_gb_emlrtBCI = { 1,/* iFirst */
  95,                                  /* iLast */
  12,                                  /* lineNo */
  16,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_gb_emlrtDCI = { 12,/* lineNo */
  16,                                  /* colNo */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_hb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  27,                                  /* lineNo */
  10,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_hb_emlrtDCI = { 27,/* lineNo */
  10,                                  /* colNo */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_ib_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  27,                                  /* lineNo */
  49,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_ib_emlrtDCI = { 27,/* lineNo */
  49,                                  /* colNo */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_jb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  33,                                  /* lineNo */
  10,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_jb_emlrtDCI = { 33,/* lineNo */
  10,                                  /* colNo */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c14_kb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  33,                                  /* lineNo */
  53,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c14_kb_emlrtDCI = { 33,/* lineNo */
  53,                                  /* colNo */
  "Image Processing System/soluzione2/detect circle",/* fName */
  "#flightControlSystem:2938",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void enable_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void disable_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void c14_update_jit_animation_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void c14_do_animation_call_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance, const mxArray *c14_st);
static real_T c14_emlrt_marshallIn(SFc14_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c14_nullptr, const char_T *c14_identifier);
static real_T c14_b_emlrt_marshallIn(SFc14_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c14_b_u, const emlrtMsgIdentifier *c14_parentId);
static void init_dsm_address_info(SFc14_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc14_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c14_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c14_st.tls = chartInstance->c14_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c14_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c14_doneDoubleBufferReInit = false;
  chartInstance->c14_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c14_decisionTxtEndIdx = 0U;
  static const uint32_T c14_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c14_JITStateAnimation
                        [0], &chartInstance->c14_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c14_covrtInstance, 1U, 0U, 1U,
    181U);
  covrtChartInitFcn(chartInstance->c14_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c14_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c14_decisionTxtStartIdx, &c14_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c14_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c14_covrtInstance, "", 4U, 0U, 1U, 0U, 4U, 0U,
                  0U, 0U, 4U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 0U,
                     "c14_flightControlSystem", 0, -1, 743);
  covrtEmlIfInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 0U, 170, 182, -1,
                    301, false);
  covrtEmlIfInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 1U, 314, 321, 424,
                    572, false);
  covrtEmlIfInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 2U, 444, 532, 571,
                    572, false);
  covrtEmlIfInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 3U, 593, 689, 729,
                    730, false);
  covrtEmlForInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 0U, 134, 145, 313);
  covrtEmlForInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 1U, 150, 161, 309);
  covrtEmlForInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 2U, 424, 439, 572);
  covrtEmlForInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 3U, 573, 588, 730);
  covrtEmlRelationalInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 0U, 173,
    182, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 1U, 317,
    321, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 2U, 447,
    532, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c14_covrtInstance, 4U, 0U, 3U, 596,
    689, -1, 0U);
}

static void mdl_cleanup_runtime_resources_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c14_covrtInstance);
}

static void enable_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c14_cv4[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c14_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c14_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c14_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c14_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  static char_T c14_cv5[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c14_b_st;
  emlrtStack c14_c_st;
  emlrtStack c14_d_st;
  emlrtStack c14_e_st;
  emlrtStack c14_f_st;
  emlrtStack c14_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c14_c_y = NULL;
  const mxArray *c14_d_y = NULL;
  const mxArray *c14_e_y = NULL;
  const mxArray *c14_f_y = NULL;
  const mxArray *c14_g_y = NULL;
  const mxArray *c14_h_y = NULL;
  real_T c14_b_y[256];
  real_T c14_localBins1[256];
  real_T c14_localBins2[256];
  real_T c14_localBins3[256];
  real_T c14_T;
  real_T c14_b_i;
  real_T c14_b_idx;
  real_T c14_b_k;
  real_T c14_b_r;
  real_T c14_b_theta;
  real_T c14_b_x;
  real_T c14_c_x;
  real_T c14_center_column;
  real_T c14_center_row;
  real_T c14_columns_counter;
  real_T c14_d;
  real_T c14_d1;
  real_T c14_d10;
  real_T c14_d11;
  real_T c14_d12;
  real_T c14_d13;
  real_T c14_d14;
  real_T c14_d15;
  real_T c14_d16;
  real_T c14_d17;
  real_T c14_d18;
  real_T c14_d19;
  real_T c14_d2;
  real_T c14_d3;
  real_T c14_d4;
  real_T c14_d5;
  real_T c14_d6;
  real_T c14_d7;
  real_T c14_d8;
  real_T c14_d9;
  real_T c14_d_k;
  real_T c14_d_p;
  real_T c14_d_x;
  real_T c14_e_i;
  real_T c14_e_x;
  real_T c14_f_k;
  real_T c14_f_x;
  real_T c14_g_a;
  real_T c14_g_c;
  real_T c14_g_x;
  real_T c14_h_a;
  real_T c14_h_x;
  real_T c14_i_a;
  real_T c14_i_x;
  real_T c14_i_y;
  real_T c14_j_a;
  real_T c14_j_c;
  real_T c14_j_x;
  real_T c14_j_y;
  real_T c14_k_a;
  real_T c14_k_x;
  real_T c14_k_y;
  real_T c14_l_x;
  real_T c14_l_y;
  real_T c14_m_x;
  real_T c14_m_y;
  real_T c14_maxval;
  real_T c14_mu_t;
  real_T c14_n_x;
  real_T c14_num_elems;
  real_T c14_num_maxval;
  real_T c14_o_x;
  real_T c14_out;
  real_T c14_p_x;
  real_T c14_q_x;
  real_T c14_r_x;
  real_T c14_rows_counter;
  real_T c14_s_x;
  real_T c14_sigma_b_squared;
  real_T c14_t;
  real_T c14_t_x;
  real_T c14_u_x;
  real_T c14_v_x;
  real_T c14_w_x;
  real_T c14_x;
  int32_T c14_a;
  int32_T c14_b_a;
  int32_T c14_b_c;
  int32_T c14_c;
  int32_T c14_c_a;
  int32_T c14_c_c;
  int32_T c14_c_i;
  int32_T c14_c_k;
  int32_T c14_c_theta;
  int32_T c14_d_a;
  int32_T c14_d_c;
  int32_T c14_d_i;
  int32_T c14_e_a;
  int32_T c14_e_c;
  int32_T c14_e_k;
  int32_T c14_exitg2;
  int32_T c14_exitg3;
  int32_T c14_f_a;
  int32_T c14_f_c;
  int32_T c14_g_k;
  int32_T c14_h_c;
  int32_T c14_h_k;
  int32_T c14_i;
  int32_T c14_i1;
  int32_T c14_i10;
  int32_T c14_i11;
  int32_T c14_i12;
  int32_T c14_i13;
  int32_T c14_i14;
  int32_T c14_i15;
  int32_T c14_i16;
  int32_T c14_i17;
  int32_T c14_i18;
  int32_T c14_i19;
  int32_T c14_i2;
  int32_T c14_i20;
  int32_T c14_i21;
  int32_T c14_i22;
  int32_T c14_i23;
  int32_T c14_i24;
  int32_T c14_i25;
  int32_T c14_i26;
  int32_T c14_i27;
  int32_T c14_i28;
  int32_T c14_i29;
  int32_T c14_i3;
  int32_T c14_i30;
  int32_T c14_i31;
  int32_T c14_i32;
  int32_T c14_i33;
  int32_T c14_i34;
  int32_T c14_i35;
  int32_T c14_i36;
  int32_T c14_i37;
  int32_T c14_i38;
  int32_T c14_i39;
  int32_T c14_i4;
  int32_T c14_i40;
  int32_T c14_i41;
  int32_T c14_i5;
  int32_T c14_i6;
  int32_T c14_i7;
  int32_T c14_i8;
  int32_T c14_i9;
  int32_T c14_i_c;
  int32_T c14_idx;
  int32_T c14_idx1;
  int32_T c14_idx2;
  int32_T c14_idx3;
  int32_T c14_idx4;
  int32_T c14_k;
  int32_T c14_k_c;
  int32_T c14_l_a;
  int32_T c14_l_c;
  int32_T c14_m_a;
  int32_T c14_m_c;
  int32_T c14_n_a;
  int32_T c14_o_a;
  int32_T c14_r;
  int32_T c14_theta;
  uint8_T c14_b_u[19200];
  boolean_T c14_c_u[19200];
  boolean_T c14_d_u[7600];
  boolean_T c14_b;
  boolean_T c14_b1;
  boolean_T c14_b2;
  boolean_T c14_b3;
  boolean_T c14_b4;
  boolean_T c14_b5;
  boolean_T c14_b_b;
  boolean_T c14_b_p;
  boolean_T c14_c_b;
  boolean_T c14_c_p;
  boolean_T c14_d_b;
  boolean_T c14_e_b;
  boolean_T c14_exitg1;
  boolean_T c14_f_b;
  boolean_T c14_isfinite_maxval;
  boolean_T c14_p;
  c14_st.tls = chartInstance->c14_fEmlrtCtx;
  c14_b_st.prev = &c14_st;
  c14_b_st.tls = c14_st.tls;
  c14_c_st.prev = &c14_b_st;
  c14_c_st.tls = c14_b_st.tls;
  c14_d_st.prev = &c14_c_st;
  c14_d_st.tls = c14_c_st.tls;
  c14_e_st.prev = &c14_d_st;
  c14_e_st.tls = c14_d_st.tls;
  c14_f_st.prev = &c14_e_st;
  c14_f_st.tls = c14_e_st.tls;
  for (c14_i = 0; c14_i < 19200; c14_i++) {
    covrtSigUpdateFcn(chartInstance->c14_covrtInstance, 0U,
                      (*chartInstance->c14_u)[c14_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c14_JITTransitionAnimation[0] = 0U;
  chartInstance->c14_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c14_covrtInstance, 4U, 0, 0);
  c14_b_i = 0.0;
  c14_columns_counter = 0.0;
  c14_rows_counter = 0.0;
  c14_b_st.site = &c14_emlrtRSI;
  c14_c_st.site = &c14_b_emlrtRSI;
  c14_d_st.site = &c14_c_emlrtRSI;
  c14_e_st.site = &c14_d_emlrtRSI;
  c14_f_st.site = &c14_e_emlrtRSI;
  grayto8_real64(&(*chartInstance->c14_u)[0], &c14_b_u[0], 19200.0);
  c14_d_st.site = &c14_c_emlrtRSI;
  c14_e_st.site = &c14_g_emlrtRSI;
  c14_f_st.site = &c14_h_emlrtRSI;
  c14_out = 1.0;
  getnumcores(&c14_out);
  c14_f_st.site = &c14_i_emlrtRSI;
  memset(&c14_b_y[0], 0, sizeof(real_T) << 8);
  memset(&c14_localBins1[0], 0, sizeof(real_T) << 8);
  memset(&c14_localBins2[0], 0, sizeof(real_T) << 8);
  memset(&c14_localBins3[0], 0, sizeof(real_T) << 8);
  for (c14_c_i = 1; c14_c_i + 3 <= 19200; c14_c_i += 4) {
    c14_d = (real_T)c14_c_i;
    if (c14_d != (real_T)(int32_T)muDoubleScalarFloor(c14_d)) {
      emlrtIntegerCheckR2012b(c14_d, &c14_emlrtDCI, &c14_f_st);
    }

    c14_i1 = (int32_T)muDoubleScalarFloor(c14_d);
    if ((c14_i1 < 1) || (c14_i1 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c14_i1, 1, 19200, &c14_emlrtBCI, &c14_f_st);
    }

    c14_idx1 = c14_b_u[c14_i1 - 1];
    c14_d2 = (real_T)(c14_c_i + 1);
    if (c14_d2 != (real_T)(int32_T)muDoubleScalarFloor(c14_d2)) {
      emlrtIntegerCheckR2012b(c14_d2, &c14_b_emlrtDCI, &c14_f_st);
    }

    c14_i4 = (int32_T)muDoubleScalarFloor(c14_d2);
    if ((c14_i4 < 1) || (c14_i4 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c14_i4, 1, 19200, &c14_b_emlrtBCI, &c14_f_st);
    }

    c14_idx2 = c14_b_u[c14_i4 - 1];
    c14_d4 = (real_T)(c14_c_i + 2);
    if (c14_d4 != (real_T)(int32_T)muDoubleScalarFloor(c14_d4)) {
      emlrtIntegerCheckR2012b(c14_d4, &c14_d_emlrtDCI, &c14_f_st);
    }

    c14_i8 = (int32_T)muDoubleScalarFloor(c14_d4);
    if ((c14_i8 < 1) || (c14_i8 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c14_i8, 1, 19200, &c14_d_emlrtBCI, &c14_f_st);
    }

    c14_idx3 = c14_b_u[c14_i8 - 1];
    c14_d6 = (real_T)(c14_c_i + 3);
    if (c14_d6 != (real_T)(int32_T)muDoubleScalarFloor(c14_d6)) {
      emlrtIntegerCheckR2012b(c14_d6, &c14_e_emlrtDCI, &c14_f_st);
    }

    c14_i11 = (int32_T)muDoubleScalarFloor(c14_d6);
    if ((c14_i11 < 1) || (c14_i11 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c14_i11, 1, 19200, &c14_e_emlrtBCI,
        &c14_f_st);
    }

    c14_idx4 = c14_b_u[c14_i11 - 1];
    c14_c_a = c14_idx1 + 1;
    c14_c_c = c14_c_a;
    c14_d_a = c14_idx1 + 1;
    c14_d_c = c14_d_a;
    c14_d7 = (real_T)c14_d_c;
    if (c14_d7 != (real_T)(int32_T)muDoubleScalarFloor(c14_d7)) {
      emlrtIntegerCheckR2012b(c14_d7, &c14_m_emlrtDCI, &c14_f_st);
    }

    c14_i14 = (int32_T)muDoubleScalarFloor(c14_d7);
    if ((c14_i14 < 1) || (c14_i14 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i14, 1, 256, &c14_m_emlrtBCI, &c14_f_st);
    }

    c14_d8 = (real_T)c14_c_c;
    if (c14_d8 != (real_T)(int32_T)muDoubleScalarFloor(c14_d8)) {
      emlrtIntegerCheckR2012b(c14_d8, &c14_n_emlrtDCI, &c14_f_st);
    }

    c14_i16 = (int32_T)muDoubleScalarFloor(c14_d8);
    if ((c14_i16 < 1) || (c14_i16 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i16, 1, 256, &c14_n_emlrtBCI, &c14_f_st);
    }

    c14_localBins1[c14_i16 - 1] = c14_localBins1[c14_i14 - 1] + 1.0;
    c14_e_a = c14_idx2 + 1;
    c14_e_c = c14_e_a;
    c14_f_a = c14_idx2 + 1;
    c14_f_c = c14_f_a;
    c14_d10 = (real_T)c14_f_c;
    if (c14_d10 != (real_T)(int32_T)muDoubleScalarFloor(c14_d10)) {
      emlrtIntegerCheckR2012b(c14_d10, &c14_o_emlrtDCI, &c14_f_st);
    }

    c14_i21 = (int32_T)muDoubleScalarFloor(c14_d10);
    if ((c14_i21 < 1) || (c14_i21 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i21, 1, 256, &c14_o_emlrtBCI, &c14_f_st);
    }

    c14_d12 = (real_T)c14_e_c;
    if (c14_d12 != (real_T)(int32_T)muDoubleScalarFloor(c14_d12)) {
      emlrtIntegerCheckR2012b(c14_d12, &c14_p_emlrtDCI, &c14_f_st);
    }

    c14_i27 = (int32_T)muDoubleScalarFloor(c14_d12);
    if ((c14_i27 < 1) || (c14_i27 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i27, 1, 256, &c14_p_emlrtBCI, &c14_f_st);
    }

    c14_localBins2[c14_i27 - 1] = c14_localBins2[c14_i21 - 1] + 1.0;
    c14_l_a = c14_idx3 + 1;
    c14_i_c = c14_l_a;
    c14_m_a = c14_idx3 + 1;
    c14_k_c = c14_m_a;
    c14_d13 = (real_T)c14_k_c;
    if (c14_d13 != (real_T)(int32_T)muDoubleScalarFloor(c14_d13)) {
      emlrtIntegerCheckR2012b(c14_d13, &c14_q_emlrtDCI, &c14_f_st);
    }

    c14_i33 = (int32_T)muDoubleScalarFloor(c14_d13);
    if ((c14_i33 < 1) || (c14_i33 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i33, 1, 256, &c14_q_emlrtBCI, &c14_f_st);
    }

    c14_d14 = (real_T)c14_i_c;
    if (c14_d14 != (real_T)(int32_T)muDoubleScalarFloor(c14_d14)) {
      emlrtIntegerCheckR2012b(c14_d14, &c14_r_emlrtDCI, &c14_f_st);
    }

    c14_i35 = (int32_T)muDoubleScalarFloor(c14_d14);
    if ((c14_i35 < 1) || (c14_i35 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i35, 1, 256, &c14_r_emlrtBCI, &c14_f_st);
    }

    c14_localBins3[c14_i35 - 1] = c14_localBins3[c14_i33 - 1] + 1.0;
    c14_n_a = c14_idx4 + 1;
    c14_l_c = c14_n_a;
    c14_o_a = c14_idx4 + 1;
    c14_m_c = c14_o_a;
    c14_d16 = (real_T)c14_m_c;
    if (c14_d16 != (real_T)(int32_T)muDoubleScalarFloor(c14_d16)) {
      emlrtIntegerCheckR2012b(c14_d16, &c14_s_emlrtDCI, &c14_f_st);
    }

    c14_i36 = (int32_T)muDoubleScalarFloor(c14_d16);
    if ((c14_i36 < 1) || (c14_i36 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i36, 1, 256, &c14_s_emlrtBCI, &c14_f_st);
    }

    c14_d17 = (real_T)c14_l_c;
    if (c14_d17 != (real_T)(int32_T)muDoubleScalarFloor(c14_d17)) {
      emlrtIntegerCheckR2012b(c14_d17, &c14_t_emlrtDCI, &c14_f_st);
    }

    c14_i39 = (int32_T)muDoubleScalarFloor(c14_d17);
    if ((c14_i39 < 1) || (c14_i39 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i39, 1, 256, &c14_t_emlrtBCI, &c14_f_st);
    }

    c14_b_y[c14_i39 - 1] = c14_b_y[c14_i36 - 1] + 1.0;
  }

  while (c14_c_i <= 19200) {
    c14_d1 = (real_T)c14_c_i;
    if (c14_d1 != (real_T)(int32_T)muDoubleScalarFloor(c14_d1)) {
      emlrtIntegerCheckR2012b(c14_d1, &c14_c_emlrtDCI, &c14_f_st);
    }

    c14_i2 = (int32_T)muDoubleScalarFloor(c14_d1);
    if ((c14_i2 < 1) || (c14_i2 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c14_i2, 1, 19200, &c14_c_emlrtBCI, &c14_f_st);
    }

    c14_idx = c14_b_u[c14_i2 - 1];
    c14_a = c14_idx + 1;
    c14_c = c14_a;
    c14_b_a = c14_idx + 1;
    c14_b_c = c14_b_a;
    c14_d3 = (real_T)c14_b_c;
    if (c14_d3 != (real_T)(int32_T)muDoubleScalarFloor(c14_d3)) {
      emlrtIntegerCheckR2012b(c14_d3, &c14_k_emlrtDCI, &c14_f_st);
    }

    c14_i6 = (int32_T)muDoubleScalarFloor(c14_d3);
    if ((c14_i6 < 1) || (c14_i6 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i6, 1, 256, &c14_k_emlrtBCI, &c14_f_st);
    }

    c14_d5 = (real_T)c14_c;
    if (c14_d5 != (real_T)(int32_T)muDoubleScalarFloor(c14_d5)) {
      emlrtIntegerCheckR2012b(c14_d5, &c14_l_emlrtDCI, &c14_f_st);
    }

    c14_i10 = (int32_T)muDoubleScalarFloor(c14_d5);
    if ((c14_i10 < 1) || (c14_i10 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i10, 1, 256, &c14_l_emlrtBCI, &c14_f_st);
    }

    c14_b_y[c14_i10 - 1] = c14_b_y[c14_i6 - 1] + 1.0;
    c14_c_i++;
  }

  for (c14_d_i = 0; c14_d_i < 256; c14_d_i++) {
    c14_e_i = 1.0 + (real_T)c14_d_i;
    if (c14_e_i != (real_T)(int32_T)muDoubleScalarFloor(c14_e_i)) {
      emlrtIntegerCheckR2012b(c14_e_i, &c14_f_emlrtDCI, &c14_f_st);
    }

    c14_i3 = (int32_T)c14_e_i;
    if ((c14_i3 < 1) || (c14_i3 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i3, 1, 256, &c14_f_emlrtBCI, &c14_f_st);
    }

    if (c14_e_i != (real_T)(int32_T)muDoubleScalarFloor(c14_e_i)) {
      emlrtIntegerCheckR2012b(c14_e_i, &c14_g_emlrtDCI, &c14_f_st);
    }

    c14_i5 = (int32_T)c14_e_i;
    if ((c14_i5 < 1) || (c14_i5 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i5, 1, 256, &c14_g_emlrtBCI, &c14_f_st);
    }

    if (c14_e_i != (real_T)(int32_T)muDoubleScalarFloor(c14_e_i)) {
      emlrtIntegerCheckR2012b(c14_e_i, &c14_h_emlrtDCI, &c14_f_st);
    }

    c14_i7 = (int32_T)c14_e_i;
    if ((c14_i7 < 1) || (c14_i7 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i7, 1, 256, &c14_h_emlrtBCI, &c14_f_st);
    }

    if (c14_e_i != (real_T)(int32_T)muDoubleScalarFloor(c14_e_i)) {
      emlrtIntegerCheckR2012b(c14_e_i, &c14_i_emlrtDCI, &c14_f_st);
    }

    c14_i9 = (int32_T)c14_e_i;
    if ((c14_i9 < 1) || (c14_i9 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i9, 1, 256, &c14_i_emlrtBCI, &c14_f_st);
    }

    if (c14_e_i != (real_T)(int32_T)muDoubleScalarFloor(c14_e_i)) {
      emlrtIntegerCheckR2012b(c14_e_i, &c14_j_emlrtDCI, &c14_f_st);
    }

    c14_i12 = (int32_T)c14_e_i;
    if ((c14_i12 < 1) || (c14_i12 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i12, 1, 256, &c14_j_emlrtBCI, &c14_f_st);
    }

    c14_b_y[c14_i12 - 1] = ((c14_b_y[c14_i3 - 1] + c14_localBins1[c14_i5 - 1]) +
      c14_localBins2[c14_i7 - 1]) + c14_localBins3[c14_i9 - 1];
  }

  c14_d_st.site = &c14_c_emlrtRSI;
  c14_e_st.site = &c14_l_emlrtRSI;
  c14_f_st.site = &c14_n_emlrtRSI;
  c14_p = true;
  c14_k = 0;
  c14_exitg1 = false;
  while ((!c14_exitg1) && (c14_k < 256)) {
    c14_b_k = 1.0 + (real_T)c14_k;
    c14_x = c14_b_y[(int32_T)c14_b_k - 1];
    c14_b_x = c14_x;
    c14_b_b = muDoubleScalarIsInf(c14_b_x);
    c14_b1 = !c14_b_b;
    c14_c_x = c14_x;
    c14_c_b = muDoubleScalarIsNaN(c14_c_x);
    c14_b2 = !c14_c_b;
    c14_d_b = (c14_b1 && c14_b2);
    if (c14_d_b) {
      c14_k++;
    } else {
      c14_p = false;
      c14_exitg1 = true;
    }
  }

  if (c14_p) {
    c14_b = true;
  } else {
    c14_b = false;
  }

  if (!c14_b) {
    c14_c_y = NULL;
    sf_mex_assign(&c14_c_y, sf_mex_create("y", c14_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c14_d_y = NULL;
    sf_mex_assign(&c14_d_y, sf_mex_create("y", c14_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c14_e_y = NULL;
    sf_mex_assign(&c14_e_y, sf_mex_create("y", c14_cv2, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c14_f_st, &c14_emlrtMCI, "error", 0U, 2U, 14, c14_c_y, 14,
                sf_mex_call(&c14_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c14_f_st, NULL, "message", 1U, 2U, 14, c14_d_y, 14, c14_e_y)));
  }

  c14_f_st.site = &c14_n_emlrtRSI;
  c14_b_p = true;
  c14_c_k = 0;
  c14_exitg1 = false;
  while ((!c14_exitg1) && (c14_c_k < 256)) {
    c14_d_k = 1.0 + (real_T)c14_c_k;
    c14_d_x = c14_b_y[(int32_T)c14_d_k - 1];
    c14_c_p = !(c14_d_x < 0.0);
    if (c14_c_p) {
      c14_c_k++;
    } else {
      c14_b_p = false;
      c14_exitg1 = true;
    }
  }

  if (c14_b_p) {
    c14_b3 = true;
  } else {
    c14_b3 = false;
  }

  if (!c14_b3) {
    c14_f_y = NULL;
    sf_mex_assign(&c14_f_y, sf_mex_create("y", c14_cv3, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c14_g_y = NULL;
    sf_mex_assign(&c14_g_y, sf_mex_create("y", c14_cv4, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c14_h_y = NULL;
    sf_mex_assign(&c14_h_y, sf_mex_create("y", c14_cv5, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c14_f_st, &c14_b_emlrtMCI, "error", 0U, 2U, 14, c14_f_y, 14,
                sf_mex_call(&c14_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c14_f_st, NULL, "message", 1U, 2U, 14, c14_g_y, 14, c14_h_y)));
  }

  c14_num_elems = 0.0;
  for (c14_e_k = 0; c14_e_k < 256; c14_e_k++) {
    c14_f_k = 1.0 + (real_T)c14_e_k;
    if (c14_f_k != (real_T)(int32_T)muDoubleScalarFloor(c14_f_k)) {
      emlrtIntegerCheckR2012b(c14_f_k, &c14_u_emlrtDCI, &c14_d_st);
    }

    c14_i13 = (int32_T)c14_f_k;
    if ((c14_i13 < 1) || (c14_i13 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i13, 1, 256, &c14_u_emlrtBCI, &c14_d_st);
    }

    c14_num_elems += c14_b_y[c14_i13 - 1];
  }

  c14_localBins1[0] = c14_b_y[0] / c14_num_elems;
  c14_localBins2[0] = c14_localBins1[0];
  for (c14_g_k = 0; c14_g_k < 255; c14_g_k++) {
    c14_f_k = 2.0 + (real_T)c14_g_k;
    if (c14_f_k != (real_T)(int32_T)muDoubleScalarFloor(c14_f_k)) {
      emlrtIntegerCheckR2012b(c14_f_k, &c14_v_emlrtDCI, &c14_d_st);
    }

    c14_i15 = (int32_T)c14_f_k;
    if ((c14_i15 < 1) || (c14_i15 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i15, 1, 256, &c14_v_emlrtBCI, &c14_d_st);
    }

    c14_d_p = c14_b_y[c14_i15 - 1] / c14_num_elems;
    c14_d9 = c14_f_k - 1.0;
    if (c14_d9 != (real_T)(int32_T)muDoubleScalarFloor(c14_d9)) {
      emlrtIntegerCheckR2012b(c14_d9, &c14_w_emlrtDCI, &c14_d_st);
    }

    c14_i18 = (int32_T)c14_d9;
    if ((c14_i18 < 1) || (c14_i18 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i18, 1, 256, &c14_w_emlrtBCI, &c14_d_st);
    }

    if (c14_f_k != (real_T)(int32_T)muDoubleScalarFloor(c14_f_k)) {
      emlrtIntegerCheckR2012b(c14_f_k, &c14_x_emlrtDCI, &c14_d_st);
    }

    c14_i20 = (int32_T)c14_f_k;
    if ((c14_i20 < 1) || (c14_i20 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i20, 1, 256, &c14_x_emlrtBCI, &c14_d_st);
    }

    c14_localBins1[c14_i20 - 1] = c14_localBins1[c14_i18 - 1] + c14_d_p;
    c14_d11 = c14_f_k - 1.0;
    if (c14_d11 != (real_T)(int32_T)muDoubleScalarFloor(c14_d11)) {
      emlrtIntegerCheckR2012b(c14_d11, &c14_y_emlrtDCI, &c14_d_st);
    }

    c14_i26 = (int32_T)c14_d11;
    if ((c14_i26 < 1) || (c14_i26 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i26, 1, 256, &c14_y_emlrtBCI, &c14_d_st);
    }

    if (c14_f_k != (real_T)(int32_T)muDoubleScalarFloor(c14_f_k)) {
      emlrtIntegerCheckR2012b(c14_f_k, &c14_ab_emlrtDCI, &c14_d_st);
    }

    c14_i30 = (int32_T)c14_f_k;
    if ((c14_i30 < 1) || (c14_i30 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i30, 1, 256, &c14_ab_emlrtBCI, &c14_d_st);
    }

    c14_localBins2[c14_i30 - 1] = c14_localBins2[c14_i26 - 1] + c14_d_p *
      c14_f_k;
  }

  c14_mu_t = c14_localBins2[255];
  c14_maxval = rtMinusInf;
  c14_b_idx = 0.0;
  c14_num_maxval = 0.0;
  for (c14_h_k = 0; c14_h_k < 255; c14_h_k++) {
    c14_f_k = 1.0 + (real_T)c14_h_k;
    c14_e_st.site = &c14_m_emlrtRSI;
    if (c14_f_k != (real_T)(int32_T)muDoubleScalarFloor(c14_f_k)) {
      emlrtIntegerCheckR2012b(c14_f_k, &c14_bb_emlrtDCI, &c14_e_st);
    }

    c14_i17 = (int32_T)c14_f_k;
    if ((c14_i17 < 1) || (c14_i17 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i17, 1, 256, &c14_bb_emlrtBCI, &c14_e_st);
    }

    if (c14_f_k != (real_T)(int32_T)muDoubleScalarFloor(c14_f_k)) {
      emlrtIntegerCheckR2012b(c14_f_k, &c14_cb_emlrtDCI, &c14_e_st);
    }

    c14_i19 = (int32_T)c14_f_k;
    if ((c14_i19 < 1) || (c14_i19 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i19, 1, 256, &c14_cb_emlrtBCI, &c14_e_st);
    }

    c14_g_a = c14_mu_t * c14_localBins1[c14_i17 - 1] - c14_localBins2[c14_i19 -
      1];
    c14_f_st.site = &c14_o_emlrtRSI;
    c14_h_a = c14_g_a;
    c14_i_a = c14_h_a;
    c14_j_a = c14_i_a;
    c14_k_a = c14_j_a;
    c14_g_c = c14_k_a * c14_k_a;
    if (c14_f_k != (real_T)(int32_T)muDoubleScalarFloor(c14_f_k)) {
      emlrtIntegerCheckR2012b(c14_f_k, &c14_db_emlrtDCI, &c14_d_st);
    }

    c14_i29 = (int32_T)c14_f_k;
    if ((c14_i29 < 1) || (c14_i29 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i29, 1, 256, &c14_db_emlrtBCI, &c14_d_st);
    }

    if (c14_f_k != (real_T)(int32_T)muDoubleScalarFloor(c14_f_k)) {
      emlrtIntegerCheckR2012b(c14_f_k, &c14_eb_emlrtDCI, &c14_d_st);
    }

    c14_i31 = (int32_T)c14_f_k;
    if ((c14_i31 < 1) || (c14_i31 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c14_i31, 1, 256, &c14_eb_emlrtBCI, &c14_d_st);
    }

    c14_sigma_b_squared = c14_g_c / (c14_localBins1[c14_i29 - 1] * (1.0 -
      c14_localBins1[c14_i31 - 1]));
    if (c14_sigma_b_squared > c14_maxval) {
      c14_maxval = c14_sigma_b_squared;
      c14_b_idx = c14_f_k;
      c14_num_maxval = 1.0;
    } else if (c14_sigma_b_squared == c14_maxval) {
      c14_b_idx += c14_f_k;
      c14_num_maxval++;
    }
  }

  c14_e_x = c14_maxval;
  c14_f_x = c14_e_x;
  c14_e_b = muDoubleScalarIsInf(c14_f_x);
  c14_b4 = !c14_e_b;
  c14_g_x = c14_e_x;
  c14_f_b = muDoubleScalarIsNaN(c14_g_x);
  c14_b5 = !c14_f_b;
  c14_isfinite_maxval = (c14_b4 && c14_b5);
  if (c14_isfinite_maxval) {
    c14_b_idx /= c14_num_maxval;
    c14_t = (c14_b_idx - 1.0) / 255.0;
  } else {
    c14_t = 0.0;
  }

  c14_T = c14_t;
  for (c14_i22 = 0; c14_i22 < 19200; c14_i22++) {
    c14_c_u[c14_i22] = ((*chartInstance->c14_u)[c14_i22] > c14_T);
  }

  c14_i23 = 0;
  c14_i24 = 0;
  for (c14_i25 = 0; c14_i25 < 95; c14_i25++) {
    for (c14_i28 = 0; c14_i28 < 80; c14_i28++) {
      c14_d_u[c14_i28 + c14_i23] = c14_c_u[(c14_i28 + c14_i24) + 2420];
    }

    c14_i23 += 80;
    c14_i24 += 120;
  }

  for (c14_r = 0; c14_r < 80; c14_r++) {
    c14_b_r = 1.0 + (real_T)c14_r;
    covrtEmlForEval(chartInstance->c14_covrtInstance, 4U, 0, 0, 1);
    for (c14_h_c = 0; c14_h_c < 95; c14_h_c++) {
      c14_j_c = 1.0 + (real_T)c14_h_c;
      covrtEmlForEval(chartInstance->c14_covrtInstance, 4U, 0, 1, 1);
      if (c14_b_r != (real_T)(int32_T)muDoubleScalarFloor(c14_b_r)) {
        emlrtIntegerCheckR2012b(c14_b_r, &c14_fb_emlrtDCI, &c14_st);
      }

      c14_i32 = (int32_T)c14_b_r;
      if ((c14_i32 < 1) || (c14_i32 > 80)) {
        emlrtDynamicBoundsCheckR2012b(c14_i32, 1, 80, &c14_fb_emlrtBCI, &c14_st);
      }

      if (c14_j_c != (real_T)(int32_T)muDoubleScalarFloor(c14_j_c)) {
        emlrtIntegerCheckR2012b(c14_j_c, &c14_gb_emlrtDCI, &c14_st);
      }

      c14_i34 = (int32_T)c14_j_c;
      if ((c14_i34 < 1) || (c14_i34 > 95)) {
        emlrtDynamicBoundsCheckR2012b(c14_i34, 1, 95, &c14_gb_emlrtBCI, &c14_st);
      }

      c14_d15 = (real_T)c14_d_u[(c14_i32 + 80 * (c14_i34 - 1)) - 1];
      if (covrtEmlIfEval(chartInstance->c14_covrtInstance, 4U, 0, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c14_covrtInstance, 4U, 0U, 0U, c14_d15,
                          1.0, -1, 0U, c14_d15 == 1.0))) {
        c14_b_i++;
        c14_columns_counter += c14_j_c;
        c14_rows_counter += c14_b_r;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c14_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c14_covrtInstance, 4U, 0, 0, 0);
  if (covrtEmlIfEval(chartInstance->c14_covrtInstance, 4U, 0, 1,
                     covrtRelationalopUpdateFcn(chartInstance->c14_covrtInstance,
        4U, 0U, 1U, c14_b_i, 0.0, -1, 0U, c14_b_i == 0.0))) {
    c14_i_y = 0.0;
  } else {
    c14_center_column = c14_columns_counter / c14_b_i + 20.0;
    c14_center_row = c14_rows_counter / c14_b_i + 20.0;
    c14_theta = 0;
    do {
      c14_exitg3 = 0;
      if (c14_theta < 63) {
        c14_b_theta = (real_T)c14_theta;
        covrtEmlForEval(chartInstance->c14_covrtInstance, 4U, 0, 2, 1);
        c14_h_x = c14_b_theta / 10.0;
        c14_i_x = c14_h_x;
        c14_i_x = muDoubleScalarCos(c14_i_x);
        c14_j_x = 15.0 * c14_i_x + c14_center_row;
        c14_k_x = c14_j_x;
        c14_j_y = c14_k_x;
        c14_j_y = muDoubleScalarRound(c14_j_y);
        c14_l_x = c14_b_theta / 10.0;
        c14_m_x = c14_l_x;
        c14_m_x = muDoubleScalarSin(c14_m_x);
        c14_p_x = 15.0 * c14_m_x + c14_center_column;
        c14_q_x = c14_p_x;
        c14_k_y = c14_q_x;
        c14_k_y = muDoubleScalarRound(c14_k_y);
        if (c14_j_y != (real_T)(int32_T)muDoubleScalarFloor(c14_j_y)) {
          emlrtIntegerCheckR2012b(c14_j_y, &c14_hb_emlrtDCI, &c14_st);
        }

        c14_i37 = (int32_T)c14_j_y;
        if ((c14_i37 < 1) || (c14_i37 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c14_i37, 1, 120, &c14_hb_emlrtBCI,
            &c14_st);
        }

        if (c14_k_y != (real_T)(int32_T)muDoubleScalarFloor(c14_k_y)) {
          emlrtIntegerCheckR2012b(c14_k_y, &c14_ib_emlrtDCI, &c14_st);
        }

        c14_i38 = (int32_T)c14_k_y;
        if ((c14_i38 < 1) || (c14_i38 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c14_i38, 1, 160, &c14_ib_emlrtBCI,
            &c14_st);
        }

        c14_d18 = (real_T)c14_c_u[(c14_i37 + 120 * (c14_i38 - 1)) - 1];
        if (covrtEmlIfEval(chartInstance->c14_covrtInstance, 4U, 0, 2,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c14_covrtInstance, 4U, 0U, 2U,
                            c14_d18, 0.0, -1, 0U, c14_d18 == 0.0))) {
          c14_i_y = 0.0;
          c14_exitg3 = 1;
        } else {
          c14_theta++;
          _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
        }
      } else {
        covrtEmlForEval(chartInstance->c14_covrtInstance, 4U, 0, 2, 0);
        c14_c_theta = 0;
        c14_exitg3 = 2;
      }
    } while (c14_exitg3 == 0);

    if (c14_exitg3 == 1) {
    } else {
      do {
        c14_exitg2 = 0;
        if (c14_c_theta < 63) {
          c14_b_theta = (real_T)c14_c_theta;
          covrtEmlForEval(chartInstance->c14_covrtInstance, 4U, 0, 3, 1);
          c14_n_x = c14_b_theta / 10.0;
          c14_o_x = c14_n_x;
          c14_o_x = muDoubleScalarCos(c14_o_x);
          c14_r_x = 21.0 * c14_o_x + c14_center_row;
          c14_s_x = c14_r_x;
          c14_l_y = c14_s_x;
          c14_l_y = muDoubleScalarRound(c14_l_y);
          c14_t_x = c14_b_theta / 10.0;
          c14_u_x = c14_t_x;
          c14_u_x = muDoubleScalarSin(c14_u_x);
          c14_v_x = 21.0 * c14_u_x + c14_center_column;
          c14_w_x = c14_v_x;
          c14_m_y = c14_w_x;
          c14_m_y = muDoubleScalarRound(c14_m_y);
          if (c14_l_y != (real_T)(int32_T)muDoubleScalarFloor(c14_l_y)) {
            emlrtIntegerCheckR2012b(c14_l_y, &c14_jb_emlrtDCI, &c14_st);
          }

          c14_i40 = (int32_T)c14_l_y;
          if ((c14_i40 < 1) || (c14_i40 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c14_i40, 1, 120, &c14_jb_emlrtBCI,
              &c14_st);
          }

          if (c14_m_y != (real_T)(int32_T)muDoubleScalarFloor(c14_m_y)) {
            emlrtIntegerCheckR2012b(c14_m_y, &c14_kb_emlrtDCI, &c14_st);
          }

          c14_i41 = (int32_T)c14_m_y;
          if ((c14_i41 < 1) || (c14_i41 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c14_i41, 1, 160, &c14_kb_emlrtBCI,
              &c14_st);
          }

          c14_d19 = (real_T)c14_c_u[(c14_i40 + 120 * (c14_i41 - 1)) - 1];
          if (covrtEmlIfEval(chartInstance->c14_covrtInstance, 4U, 0, 3,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c14_covrtInstance, 4U, 0U, 3U,
                              c14_d19, 1.0, -1, 0U, c14_d19 == 1.0))) {
            c14_i_y = 0.0;
            c14_exitg2 = 1;
          } else {
            c14_c_theta++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c14_covrtInstance, 4U, 0, 3, 0);
          c14_i_y = 1.0;
          c14_exitg2 = 1;
        }
      } while (c14_exitg2 == 0);
    }
  }

  *chartInstance->c14_y = c14_i_y;
  covrtSigUpdateFcn(chartInstance->c14_covrtInstance, 1U, *chartInstance->c14_y);
}

static void ext_mode_exec_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c14_update_jit_animation_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c14_do_animation_call_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c14_b_y = NULL;
  const mxArray *c14_c_y = NULL;
  const mxArray *c14_st = NULL;
  c14_st = NULL;
  c14_b_y = NULL;
  sf_mex_assign(&c14_b_y, sf_mex_createcellmatrix(1, 1), false);
  c14_c_y = NULL;
  sf_mex_assign(&c14_c_y, sf_mex_create("y", chartInstance->c14_y, 0, 0U, 0, 0U,
    0), false);
  sf_mex_setcell(c14_b_y, 0, c14_c_y);
  sf_mex_assign(&c14_st, c14_b_y, false);
  return c14_st;
}

static void set_sim_state_c14_flightControlSystem
  (SFc14_flightControlSystemInstanceStruct *chartInstance, const mxArray *c14_st)
{
  const mxArray *c14_b_u;
  chartInstance->c14_doneDoubleBufferReInit = true;
  c14_b_u = sf_mex_dup(c14_st);
  *chartInstance->c14_y = c14_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c14_b_u, 0)), "y");
  sf_mex_destroy(&c14_b_u);
  sf_mex_destroy(&c14_st);
}

const mxArray *sf_c14_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c14_nameCaptureInfo = NULL;
  c14_nameCaptureInfo = NULL;
  sf_mex_assign(&c14_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c14_nameCaptureInfo;
}

static real_T c14_emlrt_marshallIn(SFc14_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c14_nullptr, const char_T *c14_identifier)
{
  emlrtMsgIdentifier c14_thisId;
  real_T c14_b_y;
  c14_thisId.fIdentifier = (const char_T *)c14_identifier;
  c14_thisId.fParent = NULL;
  c14_thisId.bParentIsCell = false;
  c14_b_y = c14_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c14_nullptr),
    &c14_thisId);
  sf_mex_destroy(&c14_nullptr);
  return c14_b_y;
}

static real_T c14_b_emlrt_marshallIn(SFc14_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c14_b_u, const emlrtMsgIdentifier *c14_parentId)
{
  real_T c14_b_y;
  real_T c14_d;
  (void)chartInstance;
  sf_mex_import(c14_parentId, sf_mex_dup(c14_b_u), &c14_d, 1, 0, 0U, 0, 0U, 0);
  c14_b_y = c14_d;
  sf_mex_destroy(&c14_b_u);
  return c14_b_y;
}

static void init_dsm_address_info(SFc14_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc14_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c14_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c14_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c14_u = (real_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c14_y = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c14_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3823644881U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1035648858U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2650951917U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2972959638U);
}

mxArray *sf_c14_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c14_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c14_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c14_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCWYGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYeAD/aU6RdxAOk3QNLPQkC/AJBVCQ0XEAAALEwMtA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c14_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sYRIFa2nIC1qUhrhlf5lwIB";
}

static void sf_opaque_initialize_c14_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c14_flightControlSystem
    ((SFc14_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c14_flightControlSystem((SFc14_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c14_flightControlSystem(void *chartInstanceVar)
{
  enable_c14_flightControlSystem((SFc14_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c14_flightControlSystem(void *chartInstanceVar)
{
  disable_c14_flightControlSystem((SFc14_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c14_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c14_flightControlSystem((SFc14_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c14_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c14_flightControlSystem
    ((SFc14_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c14_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c14_flightControlSystem((SFc14_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c14_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc14_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c14_flightControlSystem
      ((SFc14_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c14_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c14_flightControlSystem((SFc14_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc14_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c14_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c14_flightControlSystem((SFc14_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c14_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c14_flightControlSystem
      ((SFc14_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c14_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [20] = {
    "eNrdWE1v40QYnlSlYtGyKhJiOSDBkQsS7bISQivYNh9g1NJonS6CC5rYr+1RxjPufCTNHrnyF/g",
    "zXBAnzhz5A0hw48g7jpNGaUg9jrQtWHKcsfPM+84zz/vhkFZwSvB4gGf/ISF7eH0Vzx0yO16pxq",
    "2lc3Z/lzypxv3XCIkyqkwgEkn8j0jGkIIIbZKwS0+ssHmfKprrBnYFzeEZaMmtYVL4Oc9EAgpEh",
    "BMUUhkvu5rlljMx6lkROcv664xFWZhJy+NjnJDGZ4JP/81uYU0fLXaYgsj0AGKTKWnTrMdpupkF",
    "ZSbtDKKRtrk3VxpMaAu3VH1quWEFh+4lRIHQhiIL+ob1hoYaaJtLb4UwHc7RMi84o6I+1xnVIRS",
    "oDgPnRYyfZ9YgezXtor0hE9RIxSjv5rztFF4T2+fo5ynKmnvzbHLTgaFNUyZSx66yOQhcP+qkBl",
    "dJW45B0RTOhGcMutV1L8sNXuiyfgwGTpaNYtDms13RjbCl3e4YGdIN7fYi0aacaz/sQBYnMAZe2",
    "u9QQxtgZ/Y9wFqzeCCfU+WiwDOSrGAXFipsW4qY1d/h8QqqTLhfYfKsAWe5kxTESPPC9cVEN2nS",
    "aiPzNoZR5+Skpr3r2EAYUAmNoHbuU5RpQIdLXXnajZmmQ+7QyJIpV1l7BhCNoUQnVnQmUo2QY98",
    "ke8WViwQ/NMQpdMBAmTC6qO7nlNuaPucaM5yTx7nGjOVnF7EufhqBIxplELt6wjicgnYT6Nr5Ge",
    "vIEa52zMy0AzpSrKgbSVZDjIXEsTSYFnAuRkJORE/JPKw6gg26AsCsQZXAsnCMZUlNe+h8Pa8VX",
    "Aycspq0Zzk1nA6dNj4HgZXFrdVVQhphVHUFtm7o0DbYkL3A0i400wbbqWm3jIG47Effbvn1o29U",
    "40eLWAr0QOFOUSzDAjulo2HZ7MGA5VDeCCn2FLNhdTi7H5Iru/d2NtvdwW+thjiyJe6LJdzuGn4",
    "eLuH2q3F08NF3CWdp5rKwUZKHUyQ+v+bH/Rp8r/N/FUeu4a54nl/fX8K31tglS9dt9ufpEu71FT",
    "u7K7i9irMvR7//9MePb/0Q//pC//XzJ99vY/8XTz0/qMbvzPuzRQUbX0vyTfWgv3kW9OihCNoHF",
    "+eZynjymE+C40bxN7//Hp4GE1yZL1UUxNW7lhtTO3sHcPN/vOTv3g3z31vSEyF/frYd/s2nq/u4",
    "ewN+H79NV3R71/PEbeWl2/SzTt5qvWQcecm4bdfnm4//67/flAfIyu/37/A6yIb85FOX79q6fiN",
    "+dejdavzp4p25nTEer+naq8fYWCfrnv5P9P23J3/zPqHr+Kv+9Pv20ZGgfIpt+uw1qLrdV+7/ps",
    "UjBVSvfxe6jTpE1vR96+r8/ZX4duMJE7Gc6A8ODh8fblPX/gEQVwIF",
    ""
  };

  static char newstr [1405] = "";
  newstr[0] = '\0';
  for (i = 0; i < 20; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c14_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c14_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3252710218U));
  ssSetChecksum1(S,(2333514989U));
  ssSetChecksum2(S,(1937428068U));
  ssSetChecksum3(S,(2184890097U));
}

static void mdlRTW_c14_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c14_flightControlSystem(SimStruct *S)
{
  SFc14_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc14_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc14_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc14_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c14_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c14_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c14_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c14_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c14_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c14_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c14_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c14_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c14_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c14_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c14_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c14_flightControlSystem;
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

  mdl_setup_runtime_resources_c14_flightControlSystem(chartInstance);
}

void c14_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c14_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c14_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c14_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c14_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
