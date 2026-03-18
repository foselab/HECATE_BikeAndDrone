/* Include files */

#include "flightControlSystem_sfun.h"
#include "c8_flightControlSystem.h"
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
static emlrtMCInfo c8_emlrtMCI = { 14, /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c8_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c8_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c8_emlrtRSI = { 7,  /* lineNo */
  "Image Processing System/soluzione3/detectCircle1",/* fcnName */
  "#flightControlSystem:2744"          /* pathName */
};

static emlrtRSInfo c8_b_emlrtRSI = { 70,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c8_c_emlrtRSI = { 102,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c8_d_emlrtRSI = { 39,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c8_e_emlrtRSI = { 195,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c8_f_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRSInfo c8_g_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_h_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_i_emlrtRSI = { 203,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_j_emlrtRSI = { 448,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_k_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c8_l_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c8_m_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c8_n_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c8_o_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c8_p_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c8_emlrtBCI = { 1,  /* iFirst */
  19200,                               /* iLast */
  1051,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_emlrtDCI = { 1051,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_b_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1052,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_b_emlrtDCI = { 1052,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_c_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1066,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_c_emlrtDCI = { 1066,/* lineNo */
  47,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_d_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1053,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_d_emlrtDCI = { 1053,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_e_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1054,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_e_emlrtDCI = { 1054,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_f_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_f_emlrtDCI = { 1130,/* lineNo */
  18,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_g_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_g_emlrtDCI = { 1130,/* lineNo */
  34,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_h_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_h_emlrtDCI = { 1130,/* lineNo */
  50,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_i_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_i_emlrtDCI = { 1130,/* lineNo */
  66,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_j_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_j_emlrtDCI = { 1130,/* lineNo */
  11,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_k_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_k_emlrtDCI = { 1068,/* lineNo */
  52,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_l_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_l_emlrtDCI = { 1068,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_m_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_m_emlrtDCI = { 1056,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_n_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_n_emlrtDCI = { 1056,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_o_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_o_emlrtDCI = { 1057,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_p_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_p_emlrtDCI = { 1057,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_q_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_q_emlrtDCI = { 1058,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_r_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_r_emlrtDCI = { 1058,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_s_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_s_emlrtDCI = { 1059,/* lineNo */
  53,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_t_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_t_emlrtDCI = { 1059,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_u_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  54,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_u_emlrtDCI = { 54,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_v_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  66,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_v_emlrtDCI = { 66,/* lineNo */
  27,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_w_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_w_emlrtDCI = { 68,/* lineNo */
  26,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_x_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_x_emlrtDCI = { 68,/* lineNo */
  15,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_y_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_y_emlrtDCI = { 70,/* lineNo */
  20,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_ab_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_ab_emlrtDCI = { 70,/* lineNo */
  12,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_bb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_bb_emlrtDCI = { 85,/* lineNo */
  39,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_cb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_cb_emlrtDCI = { 85,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_db_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_db_emlrtDCI = { 85,/* lineNo */
  62,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_eb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_eb_emlrtDCI = { 85,/* lineNo */
  74,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_fb_emlrtBCI = { 1,/* iFirst */
  80,                                  /* iLast */
  12,                                  /* lineNo */
  14,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_fb_emlrtDCI = { 12,/* lineNo */
  14,                                  /* colNo */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_gb_emlrtBCI = { 1,/* iFirst */
  40,                                  /* iLast */
  12,                                  /* lineNo */
  16,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_gb_emlrtDCI = { 12,/* lineNo */
  16,                                  /* colNo */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_hb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  27,                                  /* lineNo */
  10,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_hb_emlrtDCI = { 27,/* lineNo */
  10,                                  /* colNo */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_ib_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  27,                                  /* lineNo */
  49,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_ib_emlrtDCI = { 27,/* lineNo */
  49,                                  /* colNo */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_jb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  33,                                  /* lineNo */
  10,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_jb_emlrtDCI = { 33,/* lineNo */
  10,                                  /* colNo */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_kb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  33,                                  /* lineNo */
  53,                                  /* colNo */
  "w",                                 /* aName */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_kb_emlrtDCI = { 33,/* lineNo */
  53,                                  /* colNo */
  "Image Processing System/soluzione3/detectCircle1",/* fName */
  "#flightControlSystem:2744",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void enable_c8_flightControlSystem(SFc8_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void c8_update_jit_animation_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void c8_do_animation_call_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance, const mxArray *c8_st);
static real_T c8_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier);
static real_T c8_b_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId);
static void init_dsm_address_info(SFc8_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc8_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c8_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c8_doneDoubleBufferReInit = false;
  chartInstance->c8_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c8_decisionTxtEndIdx = 0U;
  static const uint32_T c8_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c8_JITStateAnimation[0],
                        &chartInstance->c8_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c8_covrtInstance, 1U, 0U, 1U,
    181U);
  covrtChartInitFcn(chartInstance->c8_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c8_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c8_decisionTxtStartIdx, &c8_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c8_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance, "", 4U, 0U, 1U, 0U, 4U, 0U,
                  0U, 0U, 4U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U,
                     "c8_flightControlSystem", 0, -1, 743);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 170, 182, -1,
                    301, false);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 1U, 314, 321, 424,
                    572, false);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 2U, 444, 532, 571,
                    572, false);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 3U, 593, 689, 729,
                    730, false);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 134, 145, 313);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 1U, 150, 161, 309);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 2U, 424, 439, 572);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 3U, 573, 588, 730);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 173,
    182, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 1U, 317,
    321, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 2U, 447,
    532, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 3U, 596,
    689, -1, 0U);
}

static void mdl_cleanup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c8_covrtInstance);
}

static void enable_c8_flightControlSystem(SFc8_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c8_cv4[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c8_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c8_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c8_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c8_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  static char_T c8_cv5[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_e_st;
  emlrtStack c8_f_st;
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_g_y = NULL;
  const mxArray *c8_h_y = NULL;
  real_T c8_b_y[256];
  real_T c8_localBins1[256];
  real_T c8_localBins2[256];
  real_T c8_localBins3[256];
  real_T c8_T;
  real_T c8_b_i;
  real_T c8_b_idx;
  real_T c8_b_k;
  real_T c8_b_r;
  real_T c8_b_theta;
  real_T c8_b_x;
  real_T c8_c_x;
  real_T c8_center_column;
  real_T c8_center_row;
  real_T c8_columns_counter;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d10;
  real_T c8_d11;
  real_T c8_d12;
  real_T c8_d13;
  real_T c8_d14;
  real_T c8_d15;
  real_T c8_d16;
  real_T c8_d17;
  real_T c8_d18;
  real_T c8_d19;
  real_T c8_d2;
  real_T c8_d3;
  real_T c8_d4;
  real_T c8_d5;
  real_T c8_d6;
  real_T c8_d7;
  real_T c8_d8;
  real_T c8_d9;
  real_T c8_d_k;
  real_T c8_d_p;
  real_T c8_d_x;
  real_T c8_e_i;
  real_T c8_e_x;
  real_T c8_f_k;
  real_T c8_f_x;
  real_T c8_g_a;
  real_T c8_g_c;
  real_T c8_g_x;
  real_T c8_h_a;
  real_T c8_h_x;
  real_T c8_i_a;
  real_T c8_i_x;
  real_T c8_i_y;
  real_T c8_j_a;
  real_T c8_j_c;
  real_T c8_j_x;
  real_T c8_j_y;
  real_T c8_k_a;
  real_T c8_k_x;
  real_T c8_k_y;
  real_T c8_l_x;
  real_T c8_l_y;
  real_T c8_m_x;
  real_T c8_m_y;
  real_T c8_maxval;
  real_T c8_mu_t;
  real_T c8_n_x;
  real_T c8_num_elems;
  real_T c8_num_maxval;
  real_T c8_o_x;
  real_T c8_out;
  real_T c8_p_x;
  real_T c8_q_x;
  real_T c8_r_x;
  real_T c8_rows_counter;
  real_T c8_s_x;
  real_T c8_sigma_b_squared;
  real_T c8_t;
  real_T c8_t_x;
  real_T c8_u_x;
  real_T c8_v_x;
  real_T c8_w_x;
  real_T c8_x;
  int32_T c8_a;
  int32_T c8_b_a;
  int32_T c8_b_c;
  int32_T c8_c;
  int32_T c8_c_a;
  int32_T c8_c_c;
  int32_T c8_c_i;
  int32_T c8_c_k;
  int32_T c8_c_theta;
  int32_T c8_d_a;
  int32_T c8_d_c;
  int32_T c8_d_i;
  int32_T c8_e_a;
  int32_T c8_e_c;
  int32_T c8_e_k;
  int32_T c8_exitg2;
  int32_T c8_exitg3;
  int32_T c8_f_a;
  int32_T c8_f_c;
  int32_T c8_g_k;
  int32_T c8_h_c;
  int32_T c8_h_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i34;
  int32_T c8_i35;
  int32_T c8_i36;
  int32_T c8_i37;
  int32_T c8_i38;
  int32_T c8_i39;
  int32_T c8_i4;
  int32_T c8_i40;
  int32_T c8_i41;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_i_c;
  int32_T c8_idx;
  int32_T c8_idx1;
  int32_T c8_idx2;
  int32_T c8_idx3;
  int32_T c8_idx4;
  int32_T c8_k;
  int32_T c8_k_c;
  int32_T c8_l_a;
  int32_T c8_l_c;
  int32_T c8_m_a;
  int32_T c8_m_c;
  int32_T c8_n_a;
  int32_T c8_o_a;
  int32_T c8_r;
  int32_T c8_theta;
  uint8_T c8_b_u[19200];
  boolean_T c8_c_u[19200];
  boolean_T c8_d_u[3200];
  boolean_T c8_b;
  boolean_T c8_b1;
  boolean_T c8_b2;
  boolean_T c8_b3;
  boolean_T c8_b4;
  boolean_T c8_b5;
  boolean_T c8_b_b;
  boolean_T c8_b_p;
  boolean_T c8_c_b;
  boolean_T c8_c_p;
  boolean_T c8_d_b;
  boolean_T c8_e_b;
  boolean_T c8_exitg1;
  boolean_T c8_f_b;
  boolean_T c8_isfinite_maxval;
  boolean_T c8_p;
  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_e_st.prev = &c8_d_st;
  c8_e_st.tls = c8_d_st.tls;
  c8_f_st.prev = &c8_e_st;
  c8_f_st.tls = c8_e_st.tls;
  for (c8_i = 0; c8_i < 19200; c8_i++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 0U, (*chartInstance->c8_u)
                      [c8_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c8_JITTransitionAnimation[0] = 0U;
  chartInstance->c8_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 4U, 0, 0);
  c8_b_i = 0.0;
  c8_columns_counter = 0.0;
  c8_rows_counter = 0.0;
  c8_b_st.site = &c8_emlrtRSI;
  c8_c_st.site = &c8_b_emlrtRSI;
  c8_d_st.site = &c8_c_emlrtRSI;
  c8_e_st.site = &c8_d_emlrtRSI;
  c8_f_st.site = &c8_e_emlrtRSI;
  grayto8_real64(&(*chartInstance->c8_u)[0], &c8_b_u[0], 19200.0);
  c8_d_st.site = &c8_c_emlrtRSI;
  c8_e_st.site = &c8_g_emlrtRSI;
  c8_f_st.site = &c8_h_emlrtRSI;
  c8_out = 1.0;
  getnumcores(&c8_out);
  c8_f_st.site = &c8_i_emlrtRSI;
  memset(&c8_b_y[0], 0, sizeof(real_T) << 8);
  memset(&c8_localBins1[0], 0, sizeof(real_T) << 8);
  memset(&c8_localBins2[0], 0, sizeof(real_T) << 8);
  memset(&c8_localBins3[0], 0, sizeof(real_T) << 8);
  for (c8_c_i = 1; c8_c_i + 3 <= 19200; c8_c_i += 4) {
    c8_d = (real_T)c8_c_i;
    if (c8_d != (real_T)(int32_T)muDoubleScalarFloor(c8_d)) {
      emlrtIntegerCheckR2012b(c8_d, &c8_emlrtDCI, &c8_f_st);
    }

    c8_i1 = (int32_T)muDoubleScalarFloor(c8_d);
    if ((c8_i1 < 1) || (c8_i1 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c8_i1, 1, 19200, &c8_emlrtBCI, &c8_f_st);
    }

    c8_idx1 = c8_b_u[c8_i1 - 1];
    c8_d2 = (real_T)(c8_c_i + 1);
    if (c8_d2 != (real_T)(int32_T)muDoubleScalarFloor(c8_d2)) {
      emlrtIntegerCheckR2012b(c8_d2, &c8_b_emlrtDCI, &c8_f_st);
    }

    c8_i4 = (int32_T)muDoubleScalarFloor(c8_d2);
    if ((c8_i4 < 1) || (c8_i4 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c8_i4, 1, 19200, &c8_b_emlrtBCI, &c8_f_st);
    }

    c8_idx2 = c8_b_u[c8_i4 - 1];
    c8_d4 = (real_T)(c8_c_i + 2);
    if (c8_d4 != (real_T)(int32_T)muDoubleScalarFloor(c8_d4)) {
      emlrtIntegerCheckR2012b(c8_d4, &c8_d_emlrtDCI, &c8_f_st);
    }

    c8_i8 = (int32_T)muDoubleScalarFloor(c8_d4);
    if ((c8_i8 < 1) || (c8_i8 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c8_i8, 1, 19200, &c8_d_emlrtBCI, &c8_f_st);
    }

    c8_idx3 = c8_b_u[c8_i8 - 1];
    c8_d6 = (real_T)(c8_c_i + 3);
    if (c8_d6 != (real_T)(int32_T)muDoubleScalarFloor(c8_d6)) {
      emlrtIntegerCheckR2012b(c8_d6, &c8_e_emlrtDCI, &c8_f_st);
    }

    c8_i11 = (int32_T)muDoubleScalarFloor(c8_d6);
    if ((c8_i11 < 1) || (c8_i11 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c8_i11, 1, 19200, &c8_e_emlrtBCI, &c8_f_st);
    }

    c8_idx4 = c8_b_u[c8_i11 - 1];
    c8_c_a = c8_idx1 + 1;
    c8_c_c = c8_c_a;
    c8_d_a = c8_idx1 + 1;
    c8_d_c = c8_d_a;
    c8_d7 = (real_T)c8_d_c;
    if (c8_d7 != (real_T)(int32_T)muDoubleScalarFloor(c8_d7)) {
      emlrtIntegerCheckR2012b(c8_d7, &c8_m_emlrtDCI, &c8_f_st);
    }

    c8_i14 = (int32_T)muDoubleScalarFloor(c8_d7);
    if ((c8_i14 < 1) || (c8_i14 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i14, 1, 256, &c8_m_emlrtBCI, &c8_f_st);
    }

    c8_d8 = (real_T)c8_c_c;
    if (c8_d8 != (real_T)(int32_T)muDoubleScalarFloor(c8_d8)) {
      emlrtIntegerCheckR2012b(c8_d8, &c8_n_emlrtDCI, &c8_f_st);
    }

    c8_i16 = (int32_T)muDoubleScalarFloor(c8_d8);
    if ((c8_i16 < 1) || (c8_i16 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i16, 1, 256, &c8_n_emlrtBCI, &c8_f_st);
    }

    c8_localBins1[c8_i16 - 1] = c8_localBins1[c8_i14 - 1] + 1.0;
    c8_e_a = c8_idx2 + 1;
    c8_e_c = c8_e_a;
    c8_f_a = c8_idx2 + 1;
    c8_f_c = c8_f_a;
    c8_d10 = (real_T)c8_f_c;
    if (c8_d10 != (real_T)(int32_T)muDoubleScalarFloor(c8_d10)) {
      emlrtIntegerCheckR2012b(c8_d10, &c8_o_emlrtDCI, &c8_f_st);
    }

    c8_i21 = (int32_T)muDoubleScalarFloor(c8_d10);
    if ((c8_i21 < 1) || (c8_i21 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i21, 1, 256, &c8_o_emlrtBCI, &c8_f_st);
    }

    c8_d12 = (real_T)c8_e_c;
    if (c8_d12 != (real_T)(int32_T)muDoubleScalarFloor(c8_d12)) {
      emlrtIntegerCheckR2012b(c8_d12, &c8_p_emlrtDCI, &c8_f_st);
    }

    c8_i27 = (int32_T)muDoubleScalarFloor(c8_d12);
    if ((c8_i27 < 1) || (c8_i27 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i27, 1, 256, &c8_p_emlrtBCI, &c8_f_st);
    }

    c8_localBins2[c8_i27 - 1] = c8_localBins2[c8_i21 - 1] + 1.0;
    c8_l_a = c8_idx3 + 1;
    c8_i_c = c8_l_a;
    c8_m_a = c8_idx3 + 1;
    c8_k_c = c8_m_a;
    c8_d13 = (real_T)c8_k_c;
    if (c8_d13 != (real_T)(int32_T)muDoubleScalarFloor(c8_d13)) {
      emlrtIntegerCheckR2012b(c8_d13, &c8_q_emlrtDCI, &c8_f_st);
    }

    c8_i33 = (int32_T)muDoubleScalarFloor(c8_d13);
    if ((c8_i33 < 1) || (c8_i33 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i33, 1, 256, &c8_q_emlrtBCI, &c8_f_st);
    }

    c8_d14 = (real_T)c8_i_c;
    if (c8_d14 != (real_T)(int32_T)muDoubleScalarFloor(c8_d14)) {
      emlrtIntegerCheckR2012b(c8_d14, &c8_r_emlrtDCI, &c8_f_st);
    }

    c8_i35 = (int32_T)muDoubleScalarFloor(c8_d14);
    if ((c8_i35 < 1) || (c8_i35 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i35, 1, 256, &c8_r_emlrtBCI, &c8_f_st);
    }

    c8_localBins3[c8_i35 - 1] = c8_localBins3[c8_i33 - 1] + 1.0;
    c8_n_a = c8_idx4 + 1;
    c8_l_c = c8_n_a;
    c8_o_a = c8_idx4 + 1;
    c8_m_c = c8_o_a;
    c8_d16 = (real_T)c8_m_c;
    if (c8_d16 != (real_T)(int32_T)muDoubleScalarFloor(c8_d16)) {
      emlrtIntegerCheckR2012b(c8_d16, &c8_s_emlrtDCI, &c8_f_st);
    }

    c8_i36 = (int32_T)muDoubleScalarFloor(c8_d16);
    if ((c8_i36 < 1) || (c8_i36 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i36, 1, 256, &c8_s_emlrtBCI, &c8_f_st);
    }

    c8_d17 = (real_T)c8_l_c;
    if (c8_d17 != (real_T)(int32_T)muDoubleScalarFloor(c8_d17)) {
      emlrtIntegerCheckR2012b(c8_d17, &c8_t_emlrtDCI, &c8_f_st);
    }

    c8_i39 = (int32_T)muDoubleScalarFloor(c8_d17);
    if ((c8_i39 < 1) || (c8_i39 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i39, 1, 256, &c8_t_emlrtBCI, &c8_f_st);
    }

    c8_b_y[c8_i39 - 1] = c8_b_y[c8_i36 - 1] + 1.0;
  }

  while (c8_c_i <= 19200) {
    c8_d1 = (real_T)c8_c_i;
    if (c8_d1 != (real_T)(int32_T)muDoubleScalarFloor(c8_d1)) {
      emlrtIntegerCheckR2012b(c8_d1, &c8_c_emlrtDCI, &c8_f_st);
    }

    c8_i2 = (int32_T)muDoubleScalarFloor(c8_d1);
    if ((c8_i2 < 1) || (c8_i2 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c8_i2, 1, 19200, &c8_c_emlrtBCI, &c8_f_st);
    }

    c8_idx = c8_b_u[c8_i2 - 1];
    c8_a = c8_idx + 1;
    c8_c = c8_a;
    c8_b_a = c8_idx + 1;
    c8_b_c = c8_b_a;
    c8_d3 = (real_T)c8_b_c;
    if (c8_d3 != (real_T)(int32_T)muDoubleScalarFloor(c8_d3)) {
      emlrtIntegerCheckR2012b(c8_d3, &c8_k_emlrtDCI, &c8_f_st);
    }

    c8_i6 = (int32_T)muDoubleScalarFloor(c8_d3);
    if ((c8_i6 < 1) || (c8_i6 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i6, 1, 256, &c8_k_emlrtBCI, &c8_f_st);
    }

    c8_d5 = (real_T)c8_c;
    if (c8_d5 != (real_T)(int32_T)muDoubleScalarFloor(c8_d5)) {
      emlrtIntegerCheckR2012b(c8_d5, &c8_l_emlrtDCI, &c8_f_st);
    }

    c8_i10 = (int32_T)muDoubleScalarFloor(c8_d5);
    if ((c8_i10 < 1) || (c8_i10 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i10, 1, 256, &c8_l_emlrtBCI, &c8_f_st);
    }

    c8_b_y[c8_i10 - 1] = c8_b_y[c8_i6 - 1] + 1.0;
    c8_c_i++;
  }

  for (c8_d_i = 0; c8_d_i < 256; c8_d_i++) {
    c8_e_i = 1.0 + (real_T)c8_d_i;
    if (c8_e_i != (real_T)(int32_T)muDoubleScalarFloor(c8_e_i)) {
      emlrtIntegerCheckR2012b(c8_e_i, &c8_f_emlrtDCI, &c8_f_st);
    }

    c8_i3 = (int32_T)c8_e_i;
    if ((c8_i3 < 1) || (c8_i3 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i3, 1, 256, &c8_f_emlrtBCI, &c8_f_st);
    }

    if (c8_e_i != (real_T)(int32_T)muDoubleScalarFloor(c8_e_i)) {
      emlrtIntegerCheckR2012b(c8_e_i, &c8_g_emlrtDCI, &c8_f_st);
    }

    c8_i5 = (int32_T)c8_e_i;
    if ((c8_i5 < 1) || (c8_i5 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i5, 1, 256, &c8_g_emlrtBCI, &c8_f_st);
    }

    if (c8_e_i != (real_T)(int32_T)muDoubleScalarFloor(c8_e_i)) {
      emlrtIntegerCheckR2012b(c8_e_i, &c8_h_emlrtDCI, &c8_f_st);
    }

    c8_i7 = (int32_T)c8_e_i;
    if ((c8_i7 < 1) || (c8_i7 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i7, 1, 256, &c8_h_emlrtBCI, &c8_f_st);
    }

    if (c8_e_i != (real_T)(int32_T)muDoubleScalarFloor(c8_e_i)) {
      emlrtIntegerCheckR2012b(c8_e_i, &c8_i_emlrtDCI, &c8_f_st);
    }

    c8_i9 = (int32_T)c8_e_i;
    if ((c8_i9 < 1) || (c8_i9 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i9, 1, 256, &c8_i_emlrtBCI, &c8_f_st);
    }

    if (c8_e_i != (real_T)(int32_T)muDoubleScalarFloor(c8_e_i)) {
      emlrtIntegerCheckR2012b(c8_e_i, &c8_j_emlrtDCI, &c8_f_st);
    }

    c8_i12 = (int32_T)c8_e_i;
    if ((c8_i12 < 1) || (c8_i12 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i12, 1, 256, &c8_j_emlrtBCI, &c8_f_st);
    }

    c8_b_y[c8_i12 - 1] = ((c8_b_y[c8_i3 - 1] + c8_localBins1[c8_i5 - 1]) +
                          c8_localBins2[c8_i7 - 1]) + c8_localBins3[c8_i9 - 1];
  }

  c8_d_st.site = &c8_c_emlrtRSI;
  c8_e_st.site = &c8_l_emlrtRSI;
  c8_f_st.site = &c8_n_emlrtRSI;
  c8_p = true;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k < 256)) {
    c8_b_k = 1.0 + (real_T)c8_k;
    c8_x = c8_b_y[(int32_T)c8_b_k - 1];
    c8_b_x = c8_x;
    c8_b_b = muDoubleScalarIsInf(c8_b_x);
    c8_b1 = !c8_b_b;
    c8_c_x = c8_x;
    c8_c_b = muDoubleScalarIsNaN(c8_c_x);
    c8_b2 = !c8_c_b;
    c8_d_b = (c8_b1 && c8_b2);
    if (c8_d_b) {
      c8_k++;
    } else {
      c8_p = false;
      c8_exitg1 = true;
    }
  }

  if (c8_p) {
    c8_b = true;
  } else {
    c8_b = false;
  }

  if (!c8_b) {
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c8_d_y = NULL;
    sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c8_e_y = NULL;
    sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_cv2, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c8_f_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_c_y, 14,
                sf_mex_call(&c8_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_f_st, NULL, "message", 1U, 2U, 14, c8_d_y, 14, c8_e_y)));
  }

  c8_f_st.site = &c8_n_emlrtRSI;
  c8_b_p = true;
  c8_c_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_c_k < 256)) {
    c8_d_k = 1.0 + (real_T)c8_c_k;
    c8_d_x = c8_b_y[(int32_T)c8_d_k - 1];
    c8_c_p = !(c8_d_x < 0.0);
    if (c8_c_p) {
      c8_c_k++;
    } else {
      c8_b_p = false;
      c8_exitg1 = true;
    }
  }

  if (c8_b_p) {
    c8_b3 = true;
  } else {
    c8_b3 = false;
  }

  if (!c8_b3) {
    c8_f_y = NULL;
    sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_cv3, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c8_g_y = NULL;
    sf_mex_assign(&c8_g_y, sf_mex_create("y", c8_cv4, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c8_h_y = NULL;
    sf_mex_assign(&c8_h_y, sf_mex_create("y", c8_cv5, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c8_f_st, &c8_b_emlrtMCI, "error", 0U, 2U, 14, c8_f_y, 14,
                sf_mex_call(&c8_f_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_f_st, NULL, "message", 1U, 2U, 14, c8_g_y, 14, c8_h_y)));
  }

  c8_num_elems = 0.0;
  for (c8_e_k = 0; c8_e_k < 256; c8_e_k++) {
    c8_f_k = 1.0 + (real_T)c8_e_k;
    if (c8_f_k != (real_T)(int32_T)muDoubleScalarFloor(c8_f_k)) {
      emlrtIntegerCheckR2012b(c8_f_k, &c8_u_emlrtDCI, &c8_d_st);
    }

    c8_i13 = (int32_T)c8_f_k;
    if ((c8_i13 < 1) || (c8_i13 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i13, 1, 256, &c8_u_emlrtBCI, &c8_d_st);
    }

    c8_num_elems += c8_b_y[c8_i13 - 1];
  }

  c8_localBins1[0] = c8_b_y[0] / c8_num_elems;
  c8_localBins2[0] = c8_localBins1[0];
  for (c8_g_k = 0; c8_g_k < 255; c8_g_k++) {
    c8_f_k = 2.0 + (real_T)c8_g_k;
    if (c8_f_k != (real_T)(int32_T)muDoubleScalarFloor(c8_f_k)) {
      emlrtIntegerCheckR2012b(c8_f_k, &c8_v_emlrtDCI, &c8_d_st);
    }

    c8_i15 = (int32_T)c8_f_k;
    if ((c8_i15 < 1) || (c8_i15 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i15, 1, 256, &c8_v_emlrtBCI, &c8_d_st);
    }

    c8_d_p = c8_b_y[c8_i15 - 1] / c8_num_elems;
    c8_d9 = c8_f_k - 1.0;
    if (c8_d9 != (real_T)(int32_T)muDoubleScalarFloor(c8_d9)) {
      emlrtIntegerCheckR2012b(c8_d9, &c8_w_emlrtDCI, &c8_d_st);
    }

    c8_i18 = (int32_T)c8_d9;
    if ((c8_i18 < 1) || (c8_i18 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i18, 1, 256, &c8_w_emlrtBCI, &c8_d_st);
    }

    if (c8_f_k != (real_T)(int32_T)muDoubleScalarFloor(c8_f_k)) {
      emlrtIntegerCheckR2012b(c8_f_k, &c8_x_emlrtDCI, &c8_d_st);
    }

    c8_i20 = (int32_T)c8_f_k;
    if ((c8_i20 < 1) || (c8_i20 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i20, 1, 256, &c8_x_emlrtBCI, &c8_d_st);
    }

    c8_localBins1[c8_i20 - 1] = c8_localBins1[c8_i18 - 1] + c8_d_p;
    c8_d11 = c8_f_k - 1.0;
    if (c8_d11 != (real_T)(int32_T)muDoubleScalarFloor(c8_d11)) {
      emlrtIntegerCheckR2012b(c8_d11, &c8_y_emlrtDCI, &c8_d_st);
    }

    c8_i26 = (int32_T)c8_d11;
    if ((c8_i26 < 1) || (c8_i26 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i26, 1, 256, &c8_y_emlrtBCI, &c8_d_st);
    }

    if (c8_f_k != (real_T)(int32_T)muDoubleScalarFloor(c8_f_k)) {
      emlrtIntegerCheckR2012b(c8_f_k, &c8_ab_emlrtDCI, &c8_d_st);
    }

    c8_i30 = (int32_T)c8_f_k;
    if ((c8_i30 < 1) || (c8_i30 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i30, 1, 256, &c8_ab_emlrtBCI, &c8_d_st);
    }

    c8_localBins2[c8_i30 - 1] = c8_localBins2[c8_i26 - 1] + c8_d_p * c8_f_k;
  }

  c8_mu_t = c8_localBins2[255];
  c8_maxval = rtMinusInf;
  c8_b_idx = 0.0;
  c8_num_maxval = 0.0;
  for (c8_h_k = 0; c8_h_k < 255; c8_h_k++) {
    c8_f_k = 1.0 + (real_T)c8_h_k;
    c8_e_st.site = &c8_m_emlrtRSI;
    if (c8_f_k != (real_T)(int32_T)muDoubleScalarFloor(c8_f_k)) {
      emlrtIntegerCheckR2012b(c8_f_k, &c8_bb_emlrtDCI, &c8_e_st);
    }

    c8_i17 = (int32_T)c8_f_k;
    if ((c8_i17 < 1) || (c8_i17 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i17, 1, 256, &c8_bb_emlrtBCI, &c8_e_st);
    }

    if (c8_f_k != (real_T)(int32_T)muDoubleScalarFloor(c8_f_k)) {
      emlrtIntegerCheckR2012b(c8_f_k, &c8_cb_emlrtDCI, &c8_e_st);
    }

    c8_i19 = (int32_T)c8_f_k;
    if ((c8_i19 < 1) || (c8_i19 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i19, 1, 256, &c8_cb_emlrtBCI, &c8_e_st);
    }

    c8_g_a = c8_mu_t * c8_localBins1[c8_i17 - 1] - c8_localBins2[c8_i19 - 1];
    c8_f_st.site = &c8_o_emlrtRSI;
    c8_h_a = c8_g_a;
    c8_i_a = c8_h_a;
    c8_j_a = c8_i_a;
    c8_k_a = c8_j_a;
    c8_g_c = c8_k_a * c8_k_a;
    if (c8_f_k != (real_T)(int32_T)muDoubleScalarFloor(c8_f_k)) {
      emlrtIntegerCheckR2012b(c8_f_k, &c8_db_emlrtDCI, &c8_d_st);
    }

    c8_i29 = (int32_T)c8_f_k;
    if ((c8_i29 < 1) || (c8_i29 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i29, 1, 256, &c8_db_emlrtBCI, &c8_d_st);
    }

    if (c8_f_k != (real_T)(int32_T)muDoubleScalarFloor(c8_f_k)) {
      emlrtIntegerCheckR2012b(c8_f_k, &c8_eb_emlrtDCI, &c8_d_st);
    }

    c8_i31 = (int32_T)c8_f_k;
    if ((c8_i31 < 1) || (c8_i31 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c8_i31, 1, 256, &c8_eb_emlrtBCI, &c8_d_st);
    }

    c8_sigma_b_squared = c8_g_c / (c8_localBins1[c8_i29 - 1] * (1.0 -
      c8_localBins1[c8_i31 - 1]));
    if (c8_sigma_b_squared > c8_maxval) {
      c8_maxval = c8_sigma_b_squared;
      c8_b_idx = c8_f_k;
      c8_num_maxval = 1.0;
    } else if (c8_sigma_b_squared == c8_maxval) {
      c8_b_idx += c8_f_k;
      c8_num_maxval++;
    }
  }

  c8_e_x = c8_maxval;
  c8_f_x = c8_e_x;
  c8_e_b = muDoubleScalarIsInf(c8_f_x);
  c8_b4 = !c8_e_b;
  c8_g_x = c8_e_x;
  c8_f_b = muDoubleScalarIsNaN(c8_g_x);
  c8_b5 = !c8_f_b;
  c8_isfinite_maxval = (c8_b4 && c8_b5);
  if (c8_isfinite_maxval) {
    c8_b_idx /= c8_num_maxval;
    c8_t = (c8_b_idx - 1.0) / 255.0;
  } else {
    c8_t = 0.0;
  }

  c8_T = c8_t;
  for (c8_i22 = 0; c8_i22 < 19200; c8_i22++) {
    c8_c_u[c8_i22] = ((*chartInstance->c8_u)[c8_i22] > c8_T);
  }

  c8_i23 = 0;
  c8_i24 = 0;
  for (c8_i25 = 0; c8_i25 < 40; c8_i25++) {
    for (c8_i28 = 0; c8_i28 < 80; c8_i28++) {
      c8_d_u[c8_i28 + c8_i23] = c8_c_u[(c8_i28 + c8_i24) + 7220];
    }

    c8_i23 += 80;
    c8_i24 += 120;
  }

  for (c8_r = 0; c8_r < 80; c8_r++) {
    c8_b_r = 1.0 + (real_T)c8_r;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 0, 1);
    for (c8_h_c = 0; c8_h_c < 40; c8_h_c++) {
      c8_j_c = 1.0 + (real_T)c8_h_c;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 1, 1);
      if (c8_b_r != (real_T)(int32_T)muDoubleScalarFloor(c8_b_r)) {
        emlrtIntegerCheckR2012b(c8_b_r, &c8_fb_emlrtDCI, &c8_st);
      }

      c8_i32 = (int32_T)c8_b_r;
      if ((c8_i32 < 1) || (c8_i32 > 80)) {
        emlrtDynamicBoundsCheckR2012b(c8_i32, 1, 80, &c8_fb_emlrtBCI, &c8_st);
      }

      if (c8_j_c != (real_T)(int32_T)muDoubleScalarFloor(c8_j_c)) {
        emlrtIntegerCheckR2012b(c8_j_c, &c8_gb_emlrtDCI, &c8_st);
      }

      c8_i34 = (int32_T)c8_j_c;
      if ((c8_i34 < 1) || (c8_i34 > 40)) {
        emlrtDynamicBoundsCheckR2012b(c8_i34, 1, 40, &c8_gb_emlrtBCI, &c8_st);
      }

      c8_d15 = (real_T)c8_d_u[(c8_i32 + 80 * (c8_i34 - 1)) - 1];
      if (covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c8_covrtInstance, 4U, 0U, 0U, c8_d15,
                          1.0, -1, 0U, c8_d15 == 1.0))) {
        c8_b_i++;
        c8_columns_counter += c8_j_c;
        c8_rows_counter += c8_b_r;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 0, 0);
  if (covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 1,
                     covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance,
        4U, 0U, 1U, c8_b_i, 0.0, -1, 0U, c8_b_i == 0.0))) {
    c8_i_y = 0.0;
  } else {
    c8_center_column = c8_columns_counter / c8_b_i + 60.0;
    c8_center_row = c8_rows_counter / c8_b_i + 20.0;
    c8_theta = 0;
    do {
      c8_exitg3 = 0;
      if (c8_theta < 63) {
        c8_b_theta = (real_T)c8_theta;
        covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 2, 1);
        c8_h_x = c8_b_theta / 10.0;
        c8_i_x = c8_h_x;
        c8_i_x = muDoubleScalarCos(c8_i_x);
        c8_j_x = 15.0 * c8_i_x + c8_center_row;
        c8_k_x = c8_j_x;
        c8_j_y = c8_k_x;
        c8_j_y = muDoubleScalarRound(c8_j_y);
        c8_l_x = c8_b_theta / 10.0;
        c8_m_x = c8_l_x;
        c8_m_x = muDoubleScalarSin(c8_m_x);
        c8_p_x = 15.0 * c8_m_x + c8_center_column;
        c8_q_x = c8_p_x;
        c8_k_y = c8_q_x;
        c8_k_y = muDoubleScalarRound(c8_k_y);
        if (c8_j_y != (real_T)(int32_T)muDoubleScalarFloor(c8_j_y)) {
          emlrtIntegerCheckR2012b(c8_j_y, &c8_hb_emlrtDCI, &c8_st);
        }

        c8_i37 = (int32_T)c8_j_y;
        if ((c8_i37 < 1) || (c8_i37 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c8_i37, 1, 120, &c8_hb_emlrtBCI, &c8_st);
        }

        if (c8_k_y != (real_T)(int32_T)muDoubleScalarFloor(c8_k_y)) {
          emlrtIntegerCheckR2012b(c8_k_y, &c8_ib_emlrtDCI, &c8_st);
        }

        c8_i38 = (int32_T)c8_k_y;
        if ((c8_i38 < 1) || (c8_i38 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c8_i38, 1, 160, &c8_ib_emlrtBCI, &c8_st);
        }

        c8_d18 = (real_T)c8_c_u[(c8_i37 + 120 * (c8_i38 - 1)) - 1];
        if (covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 2,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c8_covrtInstance, 4U, 0U, 2U, c8_d18,
                            0.0, -1, 0U, c8_d18 == 0.0))) {
          c8_i_y = 0.0;
          c8_exitg3 = 1;
        } else {
          c8_theta++;
          _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
        }
      } else {
        covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 2, 0);
        c8_c_theta = 0;
        c8_exitg3 = 2;
      }
    } while (c8_exitg3 == 0);

    if (c8_exitg3 == 1) {
    } else {
      do {
        c8_exitg2 = 0;
        if (c8_c_theta < 63) {
          c8_b_theta = (real_T)c8_c_theta;
          covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 3, 1);
          c8_n_x = c8_b_theta / 10.0;
          c8_o_x = c8_n_x;
          c8_o_x = muDoubleScalarCos(c8_o_x);
          c8_r_x = 21.0 * c8_o_x + c8_center_row;
          c8_s_x = c8_r_x;
          c8_l_y = c8_s_x;
          c8_l_y = muDoubleScalarRound(c8_l_y);
          c8_t_x = c8_b_theta / 10.0;
          c8_u_x = c8_t_x;
          c8_u_x = muDoubleScalarSin(c8_u_x);
          c8_v_x = 21.0 * c8_u_x + c8_center_column;
          c8_w_x = c8_v_x;
          c8_m_y = c8_w_x;
          c8_m_y = muDoubleScalarRound(c8_m_y);
          if (c8_l_y != (real_T)(int32_T)muDoubleScalarFloor(c8_l_y)) {
            emlrtIntegerCheckR2012b(c8_l_y, &c8_jb_emlrtDCI, &c8_st);
          }

          c8_i40 = (int32_T)c8_l_y;
          if ((c8_i40 < 1) || (c8_i40 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c8_i40, 1, 120, &c8_jb_emlrtBCI,
              &c8_st);
          }

          if (c8_m_y != (real_T)(int32_T)muDoubleScalarFloor(c8_m_y)) {
            emlrtIntegerCheckR2012b(c8_m_y, &c8_kb_emlrtDCI, &c8_st);
          }

          c8_i41 = (int32_T)c8_m_y;
          if ((c8_i41 < 1) || (c8_i41 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c8_i41, 1, 160, &c8_kb_emlrtBCI,
              &c8_st);
          }

          c8_d19 = (real_T)c8_c_u[(c8_i40 + 120 * (c8_i41 - 1)) - 1];
          if (covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 3,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c8_covrtInstance, 4U, 0U, 3U,
                              c8_d19, 1.0, -1, 0U, c8_d19 == 1.0))) {
            c8_i_y = 0.0;
            c8_exitg2 = 1;
          } else {
            c8_c_theta++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 3, 0);
          c8_i_y = 1.0;
          c8_exitg2 = 1;
        }
      } while (c8_exitg2 == 0);
    }
  }

  *chartInstance->c8_y = c8_i_y;
  covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 1U, *chartInstance->c8_y);
}

static void ext_mode_exec_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_update_jit_animation_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_do_animation_call_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_st = NULL;
  c8_st = NULL;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_createcellmatrix(1, 1), false);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", chartInstance->c8_y, 0, 0U, 0, 0U, 0),
                false);
  sf_mex_setcell(c8_b_y, 0, c8_c_y);
  sf_mex_assign(&c8_st, c8_b_y, false);
  return c8_st;
}

static void set_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance, const mxArray *c8_st)
{
  const mxArray *c8_b_u;
  chartInstance->c8_doneDoubleBufferReInit = true;
  c8_b_u = sf_mex_dup(c8_st);
  *chartInstance->c8_y = c8_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c8_b_u, 0)), "y");
  sf_mex_destroy(&c8_b_u);
  sf_mex_destroy(&c8_st);
}

const mxArray *sf_c8_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c8_nameCaptureInfo = NULL;
  c8_nameCaptureInfo = NULL;
  sf_mex_assign(&c8_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c8_nameCaptureInfo;
}

static real_T c8_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_nullptr, const char_T *c8_identifier)
{
  emlrtMsgIdentifier c8_thisId;
  real_T c8_b_y;
  c8_thisId.fIdentifier = (const char_T *)c8_identifier;
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_b_y = c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_nullptr),
    &c8_thisId);
  sf_mex_destroy(&c8_nullptr);
  return c8_b_y;
}

static real_T c8_b_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId)
{
  real_T c8_b_y;
  real_T c8_d;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_b_u), &c8_d, 1, 0, 0U, 0, 0U, 0);
  c8_b_y = c8_d;
  sf_mex_destroy(&c8_b_u);
  return c8_b_y;
}

static void init_dsm_address_info(SFc8_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc8_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c8_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c8_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c8_u = (real_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c8_y = (real_T *)ssGetOutputPortSignal_wrapper(chartInstance->S,
    1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c8_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(668166548U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1594288880U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2672055285U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3039771375U);
}

mxArray *sf_c8_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c8_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c8_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c8_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCWYGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYeAD/aU6RdxAOk3QNLPQkC/AJBVCQ0XEAAALEwMtA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c8_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sUaCw3KtSlEVK0edJN9DvWD";
}

static void sf_opaque_initialize_c8_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c8_flightControlSystem
    ((SFc8_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c8_flightControlSystem(void *chartInstanceVar)
{
  enable_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c8_flightControlSystem(void *chartInstanceVar)
{
  disable_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c8_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c8_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c8_flightControlSystem
    ((SFc8_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c8_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c8_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc8_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c8_flightControlSystem
      ((SFc8_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c8_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc8_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c8_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c8_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c8_flightControlSystem
      ((SFc8_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c8_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [20] = {
    "eNrdWM+P20QUnqyWFa1KtUiIcqhUbnBBKl0hFbWCbuMEQne7Ec7uSlzQxH6xRzuecedHsuHGjSt",
    "n/iHuXPovcOsJceSN42Qjb8h6HKm7YMlxxs4378033/vhkFbvkOBxF8/+PUJ28PounltkdrxTjl",
    "tL5+z+Nnlajvu3CYlSqkxPjCTxPyIZQwIitKMRO/fECpv1qaKZbmBX0Ay+By25NUwKP+eZGIECE",
    "eEEuVTGy65mmeVMnHWtiJxlfZqyKA1TaXn8HCek8ZHg03+zm1vTR4sBUxCZLkBsUiVtknY5Tdaz",
    "oMyknUJ0pm3mzZUGE9rcLVUfWm5YzqFzDlFPaEORBX3FekNDDbTNubdCmA7naJnlnFFRn+uU6hB",
    "yVIeB4zzGzyNrkL2adtHekAlqpGKUdzLedgqvie1z9PMQZc29eTaZCWBok4SJxLGrbAYC1486qc",
    "HVqC3HoGgCR8IzBt3qOufFBi90WT8Ge06WjWLQZrNd0Y2whd3OGBnSDe12I9GmnGs/7EDmBzAGX",
    "tgPqKENsDP7HmCtWTyQJ1S5KPCMJCvYKwslti1FzOrv8LiCKhLuS0yeNeAsc5KCGGleuL6Y6CpN",
    "Wm1k1sYwCg4Oatq7jO0JA2pEI6id+xRlGtDhQleedmOm6ZA7NLJkilXWngFEYyjRIyuCiVRnyLF",
    "vkr3gykWCHxriBAIwUCSMDqr7hHJb0+dMY4Zz8jjWmLH87CLWxU8jcESjFGJXTxiHQ9BuAl07P2",
    "Md2cfVjpmZBqAjxfK6kWQ1xFhIHEuDaQ7H4kzIiegqmYVlR7BGVwCYNagSWBaeY1lS0y46X89rB",
    "a8GTllN2rOMGk6HThvfgMDK4tbqKiGNMKo6Als3dGgTbMh+wtIuNNMG26lpp4iBuOhHP2r59aPv",
    "l+O9RSz19EDhTlEswwI7pf1h0ezBgGVQ3Agp9hSzYXk4uw/Jhd1bW+vtbuG3VkMc2RD37RJuewU",
    "/Hy7hdstx9PjHEWdJ6pKwUZKHU+Q9u+zHnRp8r/K/iiOXcBc8z6+fLuFbK+ySpesm+/NsCfdexc",
    "52BbdTcvbrJ6fjN7/8/Ndvf9x//WfryZNN7P/uqee75fj+vD9bVLDxpSRfRw/3KnpwY31M25O9F",
    "ybknZMXDyH+7uWXwfg0aBR/8/sf42kwwRX5UkW9uHzXcmNqZ+8Abv7HS/7uXDH/rSU9EfLm683w",
    "Hzyr7uP2Ffhd/Dat6Pam54nrykvX6WedvNV6yzjylnGbrs83H//Xf78uD5DK73dv8DrImvzkU5d",
    "v2rpeE7869KAcf7V4Z26njMcruvbyMTbWo1VP/yf6/tuTv3mf0HH8lX/6/bC3LyifYps+ew0qb/",
    "eV+79p8UgB1avfha6jDpEVfd+qOn+nEt9uPGEilhP92eePvni0SV37B1tTAKs=",
    ""
  };

  static char newstr [1413] = "";
  newstr[0] = '\0';
  for (i = 0; i < 20; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c8_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c8_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1985423249U));
  ssSetChecksum1(S,(4135684336U));
  ssSetChecksum2(S,(3625767835U));
  ssSetChecksum3(S,(993722857U));
}

static void mdlRTW_c8_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c8_flightControlSystem(SimStruct *S)
{
  SFc8_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc8_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc8_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc8_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c8_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c8_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c8_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c8_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c8_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c8_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c8_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c8_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c8_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c8_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c8_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c8_flightControlSystem;
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

  mdl_setup_runtime_resources_c8_flightControlSystem(chartInstance);
}

void c8_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c8_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c8_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c8_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c8_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
