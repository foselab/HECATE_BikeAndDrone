/* Include files */

#include "flightControlSystem_sfun.h"
#include "c11_flightControlSystem.h"
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
static emlrtMCInfo c11_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c11_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c11_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c11_emlrtRSI = { 3, /* lineNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fcnName */
  "#flightControlSystem:2908"          /* pathName */
};

static emlrtRSInfo c11_b_emlrtRSI = { 25,/* lineNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fcnName */
  "#flightControlSystem:2908"          /* pathName */
};

static emlrtRSInfo c11_c_emlrtRSI = { 70,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c11_d_emlrtRSI = { 102,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c11_e_emlrtRSI = { 39,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c11_f_emlrtRSI = { 195,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c11_g_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRSInfo c11_h_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c11_i_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c11_j_emlrtRSI = { 203,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c11_k_emlrtRSI = { 448,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c11_l_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c11_m_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c11_n_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c11_o_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c11_p_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c11_q_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c11_emlrtBCI = { 1, /* iFirst */
  160,                                 /* iLast */
  32,                                  /* lineNo */
  24,                                  /* colNo */
  "im",                                /* aName */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_emlrtDCI = { 32,/* lineNo */
  24,                                  /* colNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_b_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  32,                                  /* lineNo */
  20,                                  /* colNo */
  "im",                                /* aName */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_b_emlrtDCI = { 32,/* lineNo */
  20,                                  /* colNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_c_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1051,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_c_emlrtDCI = { 1051,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_d_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1052,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_d_emlrtDCI = { 1052,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_e_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1066,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_e_emlrtDCI = { 1066,/* lineNo */
  47,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_f_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1053,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_f_emlrtDCI = { 1053,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_g_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  1054,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_g_emlrtDCI = { 1054,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_h_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_h_emlrtDCI = { 1130,/* lineNo */
  18,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_i_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_i_emlrtDCI = { 1130,/* lineNo */
  34,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_j_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_j_emlrtDCI = { 1130,/* lineNo */
  50,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_k_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_k_emlrtDCI = { 1130,/* lineNo */
  66,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_l_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_l_emlrtDCI = { 1130,/* lineNo */
  11,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_m_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_m_emlrtDCI = { 1068,/* lineNo */
  52,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_n_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_n_emlrtDCI = { 1068,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_o_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_o_emlrtDCI = { 1056,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_p_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_p_emlrtDCI = { 1056,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_q_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_q_emlrtDCI = { 1057,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_r_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_r_emlrtDCI = { 1057,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_s_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_s_emlrtDCI = { 1058,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_t_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_t_emlrtDCI = { 1058,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_u_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_u_emlrtDCI = { 1059,/* lineNo */
  53,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_v_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_v_emlrtDCI = { 1059,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_w_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  54,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_w_emlrtDCI = { 54,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_x_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  66,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_x_emlrtDCI = { 66,/* lineNo */
  27,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_y_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_y_emlrtDCI = { 68,/* lineNo */
  26,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_ab_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_ab_emlrtDCI = { 68,/* lineNo */
  15,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_bb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_bb_emlrtDCI = { 70,/* lineNo */
  20,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_cb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c11_cb_emlrtDCI = { 70,/* lineNo */
  12,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_db_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_db_emlrtDCI = { 85,/* lineNo */
  39,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_eb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_eb_emlrtDCI = { 85,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_fb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_fb_emlrtDCI = { 85,/* lineNo */
  62,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_gb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_gb_emlrtDCI = { 85,/* lineNo */
  74,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_hb_emlrtBCI = { 1,/* iFirst */
  1810,                                /* iLast */
  7,                                   /* lineNo */
  5,                                   /* colNo */
  "control_matrix_in",                 /* aName */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_hb_emlrtDCI = { 7,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_ib_emlrtBCI = { 1,/* iFirst */
  1810,                                /* iLast */
  15,                                  /* lineNo */
  5,                                   /* colNo */
  "control_matrix_in",                 /* aName */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_ib_emlrtDCI = { 15,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_jb_emlrtBCI = { 1,/* iFirst */
  1810,                                /* iLast */
  11,                                  /* lineNo */
  5,                                   /* colNo */
  "control_matrix_in",                 /* aName */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_jb_emlrtDCI = { 11,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_kb_emlrtBCI = { 1,/* iFirst */
  1810,                                /* iLast */
  19,                                  /* lineNo */
  5,                                   /* colNo */
  "control_matrix_in",                 /* aName */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_kb_emlrtDCI = { 19,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_lb_emlrtBCI = { 1,/* iFirst */
  1810,                                /* iLast */
  31,                                  /* lineNo */
  31,                                  /* colNo */
  "control_matrix",                    /* aName */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_lb_emlrtDCI = { 31,/* lineNo */
  31,                                  /* colNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c11_mb_emlrtBCI = { 1,/* iFirst */
  1810,                                /* iLast */
  31,                                  /* lineNo */
  35,                                  /* colNo */
  "control_matrix",                    /* aName */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c11_mb_emlrtDCI = { 31,/* lineNo */
  35,                                  /* colNo */
  "Image Processing System/Soluzione1/MATLAB Function",/* fName */
  "#flightControlSystem:2908",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void enable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void disable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void c11_update_jit_animation_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void c11_do_animation_call_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance, const mxArray *c11_st);
static void c11_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier,
  real_T c11_y[3276100]);
static void c11_b_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId,
  real_T c11_y[3276100]);
static void c11_c_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier,
  boolean_T c11_y[19200]);
static void c11_d_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId,
  boolean_T c11_y[19200]);
static real_T c11_e_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier);
static real_T c11_f_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static int32_T c11__s32_minus__(SFc11_flightControlSystemInstanceStruct
  *chartInstance, int32_T c11_b, int32_T c11_c, int32_T c11_EMLOvCount_src_loc,
  uint32_T c11_ssid_src_loc, int32_T c11_offset_src_loc, int32_T
  c11_length_src_loc);
static void init_dsm_address_info(SFc11_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc11_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c11_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c11_st.tls = chartInstance->c11_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c11_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c11_doneDoubleBufferReInit = false;
  chartInstance->c11_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c11_decisionTxtEndIdx = 0U;
  static const uint32_T c11_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c11_JITStateAnimation
                        [0], &chartInstance->c11_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c11_covrtInstance, 1U, 0U, 1U,
    188U);
  covrtChartInitFcn(chartInstance->c11_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c11_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c11_decisionTxtStartIdx, &c11_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c11_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c11_covrtInstance, "", 4U, 0U, 2U, 0U, 5U, 0U,
                  0U, 0U, 2U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U,
                     "c11_flightControlSystem", 0, -1, 779);
  covrtEmlFcnInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 1U, "filterImage",
                     781, -1, 1006);
  covrtEmlIfInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U, 171, 195, 281,
                    396, false);
  covrtEmlIfInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 1U, 281, 310, 396,
                    631, false);
  covrtEmlIfInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 2U, 396, 425, 513,
                    631, false);
  covrtEmlIfInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 3U, 513, 541, -1,
                    628, false);
  covrtEmlIfInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 4U, 885, 915, -1,
                    962, false);
  covrtEmlForInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U, 841, 852, 982);
  covrtEmlForInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 1U, 861, 872, 974);
  covrtEmlRelationalInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 0U, 174,
    194, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 1U, 288,
    309, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 2U, 403,
    424, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 3U, 520,
    540, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c11_covrtInstance, 4U, 0U, 4U, 888,
    914, -1, 0U);
}

static void mdl_cleanup_runtime_resources_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c11_covrtInstance);
}

static void enable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c11_cv4[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c11_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c11_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c11_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c11_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  static char_T c11_cv5[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c11_b_st;
  emlrtStack c11_c_st;
  emlrtStack c11_d_st;
  emlrtStack c11_e_st;
  emlrtStack c11_f_st;
  emlrtStack c11_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c11_b_y = NULL;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_d_y = NULL;
  const mxArray *c11_e_y = NULL;
  const mxArray *c11_f_y = NULL;
  const mxArray *c11_g_y = NULL;
  real_T c11_localBins1[256];
  real_T c11_localBins2[256];
  real_T c11_localBins3[256];
  real_T c11_y[256];
  real_T c11_b_last_direction[2];
  real_T c11_T;
  real_T c11_b_idx;
  real_T c11_b_k;
  real_T c11_b_r;
  real_T c11_b_x;
  real_T c11_b_x_in;
  real_T c11_b_x_out;
  real_T c11_b_y_in;
  real_T c11_b_y_out;
  real_T c11_c_x;
  real_T c11_c_x_in;
  real_T c11_c_y_in;
  real_T c11_d;
  real_T c11_d1;
  real_T c11_d10;
  real_T c11_d11;
  real_T c11_d12;
  real_T c11_d13;
  real_T c11_d14;
  real_T c11_d15;
  real_T c11_d16;
  real_T c11_d17;
  real_T c11_d18;
  real_T c11_d19;
  real_T c11_d2;
  real_T c11_d20;
  real_T c11_d21;
  real_T c11_d22;
  real_T c11_d23;
  real_T c11_d24;
  real_T c11_d25;
  real_T c11_d26;
  real_T c11_d27;
  real_T c11_d28;
  real_T c11_d29;
  real_T c11_d3;
  real_T c11_d4;
  real_T c11_d5;
  real_T c11_d6;
  real_T c11_d7;
  real_T c11_d8;
  real_T c11_d9;
  real_T c11_d_i;
  real_T c11_d_k;
  real_T c11_d_p;
  real_T c11_d_x;
  real_T c11_d_x_in;
  real_T c11_d_y_in;
  real_T c11_e_x;
  real_T c11_e_x_in;
  real_T c11_e_y_in;
  real_T c11_f_k;
  real_T c11_f_x;
  real_T c11_f_y_in;
  real_T c11_g_a;
  real_T c11_g_c;
  real_T c11_g_x;
  real_T c11_h_a;
  real_T c11_h_x;
  real_T c11_h_y;
  real_T c11_i_a;
  real_T c11_j_a;
  real_T c11_k_a;
  real_T c11_k_c;
  real_T c11_maxval;
  real_T c11_mu_t;
  real_T c11_num_elems;
  real_T c11_num_maxval;
  real_T c11_out;
  real_T c11_sigma_b_squared;
  real_T c11_t;
  real_T c11_x;
  int32_T c11_a;
  int32_T c11_b_a;
  int32_T c11_b_c;
  int32_T c11_b_i;
  int32_T c11_c;
  int32_T c11_c_a;
  int32_T c11_c_c;
  int32_T c11_c_i;
  int32_T c11_c_k;
  int32_T c11_d_a;
  int32_T c11_d_c;
  int32_T c11_e_a;
  int32_T c11_e_c;
  int32_T c11_e_k;
  int32_T c11_f_a;
  int32_T c11_f_c;
  int32_T c11_g_k;
  int32_T c11_h_c;
  int32_T c11_h_k;
  int32_T c11_i;
  int32_T c11_i1;
  int32_T c11_i10;
  int32_T c11_i11;
  int32_T c11_i12;
  int32_T c11_i13;
  int32_T c11_i14;
  int32_T c11_i15;
  int32_T c11_i16;
  int32_T c11_i17;
  int32_T c11_i18;
  int32_T c11_i19;
  int32_T c11_i2;
  int32_T c11_i20;
  int32_T c11_i21;
  int32_T c11_i22;
  int32_T c11_i23;
  int32_T c11_i24;
  int32_T c11_i25;
  int32_T c11_i26;
  int32_T c11_i27;
  int32_T c11_i28;
  int32_T c11_i29;
  int32_T c11_i3;
  int32_T c11_i30;
  int32_T c11_i31;
  int32_T c11_i32;
  int32_T c11_i33;
  int32_T c11_i34;
  int32_T c11_i35;
  int32_T c11_i36;
  int32_T c11_i37;
  int32_T c11_i38;
  int32_T c11_i39;
  int32_T c11_i4;
  int32_T c11_i40;
  int32_T c11_i41;
  int32_T c11_i42;
  int32_T c11_i43;
  int32_T c11_i44;
  int32_T c11_i45;
  int32_T c11_i46;
  int32_T c11_i47;
  int32_T c11_i48;
  int32_T c11_i49;
  int32_T c11_i5;
  int32_T c11_i50;
  int32_T c11_i51;
  int32_T c11_i52;
  int32_T c11_i53;
  int32_T c11_i54;
  int32_T c11_i55;
  int32_T c11_i56;
  int32_T c11_i57;
  int32_T c11_i58;
  int32_T c11_i59;
  int32_T c11_i6;
  int32_T c11_i7;
  int32_T c11_i8;
  int32_T c11_i9;
  int32_T c11_i_c;
  int32_T c11_idx;
  int32_T c11_idx1;
  int32_T c11_idx2;
  int32_T c11_idx3;
  int32_T c11_idx4;
  int32_T c11_j_c;
  int32_T c11_k;
  int32_T c11_l_a;
  int32_T c11_l_c;
  int32_T c11_m_a;
  int32_T c11_m_c;
  int32_T c11_n_a;
  int32_T c11_o_a;
  int32_T c11_r;
  uint8_T c11_u[19200];
  boolean_T c11_b_binaryImage[19200];
  boolean_T c11_b;
  boolean_T c11_b1;
  boolean_T c11_b2;
  boolean_T c11_b3;
  boolean_T c11_b4;
  boolean_T c11_b5;
  boolean_T c11_b_b;
  boolean_T c11_b_p;
  boolean_T c11_c_b;
  boolean_T c11_c_p;
  boolean_T c11_d_b;
  boolean_T c11_e_b;
  boolean_T c11_exitg1;
  boolean_T c11_f_b;
  boolean_T c11_isfinite_maxval;
  boolean_T c11_p;
  c11_st.tls = chartInstance->c11_fEmlrtCtx;
  c11_b_st.prev = &c11_st;
  c11_b_st.tls = c11_st.tls;
  c11_c_st.prev = &c11_b_st;
  c11_c_st.tls = c11_b_st.tls;
  c11_d_st.prev = &c11_c_st;
  c11_d_st.tls = c11_c_st.tls;
  c11_e_st.prev = &c11_d_st;
  c11_e_st.tls = c11_d_st.tls;
  c11_f_st.prev = &c11_e_st;
  c11_f_st.tls = c11_e_st.tls;
  covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 4U,
                    *chartInstance->c11_y_in);
  covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 3U,
                    *chartInstance->c11_x_in);
  for (c11_i = 0; c11_i < 2; c11_i++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 2U,
                      (*chartInstance->c11_last_direction)[c11_i]);
  }

  for (c11_i1 = 0; c11_i1 < 19200; c11_i1++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 1U,
                      (*chartInstance->c11_binaryImage)[c11_i1]);
  }

  for (c11_i2 = 0; c11_i2 < 3276100; c11_i2++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 0U,
                      (*chartInstance->c11_b_control_matrix_in)[c11_i2]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c11_JITTransitionAnimation[0] = 0U;
  chartInstance->c11_sfEvent = CALL_EVENT;
  for (c11_i3 = 0; c11_i3 < 3276100; c11_i3++) {
    chartInstance->c11_control_matrix_in[c11_i3] =
      (*chartInstance->c11_b_control_matrix_in)[c11_i3];
  }

  for (c11_i4 = 0; c11_i4 < 2; c11_i4++) {
    c11_b_last_direction[c11_i4] = (*chartInstance->c11_last_direction)[c11_i4];
  }

  c11_b_x_in = *chartInstance->c11_x_in;
  c11_b_y_in = *chartInstance->c11_y_in;
  covrtEmlFcnEval(chartInstance->c11_covrtInstance, 4U, 0, 0);
  c11_b_st.site = &c11_emlrtRSI;
  c11_c_st.site = &c11_c_emlrtRSI;
  c11_d_st.site = &c11_d_emlrtRSI;
  c11_e_st.site = &c11_e_emlrtRSI;
  c11_f_st.site = &c11_f_emlrtRSI;
  grayto8_real64(&(*chartInstance->c11_binaryImage)[0], &c11_u[0], 19200.0);
  c11_d_st.site = &c11_d_emlrtRSI;
  c11_e_st.site = &c11_h_emlrtRSI;
  c11_f_st.site = &c11_i_emlrtRSI;
  c11_out = 1.0;
  getnumcores(&c11_out);
  c11_f_st.site = &c11_j_emlrtRSI;
  memset(&c11_y[0], 0, sizeof(real_T) << 8);
  memset(&c11_localBins1[0], 0, sizeof(real_T) << 8);
  memset(&c11_localBins2[0], 0, sizeof(real_T) << 8);
  memset(&c11_localBins3[0], 0, sizeof(real_T) << 8);
  for (c11_b_i = 1; c11_b_i + 3 <= 19200; c11_b_i += 4) {
    c11_d = (real_T)c11_b_i;
    if (c11_d != (real_T)(int32_T)muDoubleScalarFloor(c11_d)) {
      emlrtIntegerCheckR2012b(c11_d, &c11_c_emlrtDCI, &c11_f_st);
    }

    c11_i5 = (int32_T)muDoubleScalarFloor(c11_d);
    if ((c11_i5 < 1) || (c11_i5 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c11_i5, 1, 19200, &c11_c_emlrtBCI, &c11_f_st);
    }

    c11_idx1 = c11_u[c11_i5 - 1];
    c11_d2 = (real_T)(c11_b_i + 1);
    if (c11_d2 != (real_T)(int32_T)muDoubleScalarFloor(c11_d2)) {
      emlrtIntegerCheckR2012b(c11_d2, &c11_d_emlrtDCI, &c11_f_st);
    }

    c11_i8 = (int32_T)muDoubleScalarFloor(c11_d2);
    if ((c11_i8 < 1) || (c11_i8 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c11_i8, 1, 19200, &c11_d_emlrtBCI, &c11_f_st);
    }

    c11_idx2 = c11_u[c11_i8 - 1];
    c11_d4 = (real_T)(c11_b_i + 2);
    if (c11_d4 != (real_T)(int32_T)muDoubleScalarFloor(c11_d4)) {
      emlrtIntegerCheckR2012b(c11_d4, &c11_f_emlrtDCI, &c11_f_st);
    }

    c11_i12 = (int32_T)muDoubleScalarFloor(c11_d4);
    if ((c11_i12 < 1) || (c11_i12 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c11_i12, 1, 19200, &c11_f_emlrtBCI,
        &c11_f_st);
    }

    c11_idx3 = c11_u[c11_i12 - 1];
    c11_d6 = (real_T)(c11_b_i + 3);
    if (c11_d6 != (real_T)(int32_T)muDoubleScalarFloor(c11_d6)) {
      emlrtIntegerCheckR2012b(c11_d6, &c11_g_emlrtDCI, &c11_f_st);
    }

    c11_i15 = (int32_T)muDoubleScalarFloor(c11_d6);
    if ((c11_i15 < 1) || (c11_i15 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c11_i15, 1, 19200, &c11_g_emlrtBCI,
        &c11_f_st);
    }

    c11_idx4 = c11_u[c11_i15 - 1];
    c11_c_a = c11_idx1 + 1;
    c11_c_c = c11_c_a;
    c11_d_a = c11_idx1 + 1;
    c11_d_c = c11_d_a;
    c11_d7 = (real_T)c11_d_c;
    if (c11_d7 != (real_T)(int32_T)muDoubleScalarFloor(c11_d7)) {
      emlrtIntegerCheckR2012b(c11_d7, &c11_o_emlrtDCI, &c11_f_st);
    }

    c11_i18 = (int32_T)muDoubleScalarFloor(c11_d7);
    if ((c11_i18 < 1) || (c11_i18 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i18, 1, 256, &c11_o_emlrtBCI, &c11_f_st);
    }

    c11_d8 = (real_T)c11_c_c;
    if (c11_d8 != (real_T)(int32_T)muDoubleScalarFloor(c11_d8)) {
      emlrtIntegerCheckR2012b(c11_d8, &c11_p_emlrtDCI, &c11_f_st);
    }

    c11_i20 = (int32_T)muDoubleScalarFloor(c11_d8);
    if ((c11_i20 < 1) || (c11_i20 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i20, 1, 256, &c11_p_emlrtBCI, &c11_f_st);
    }

    c11_localBins1[c11_i20 - 1] = c11_localBins1[c11_i18 - 1] + 1.0;
    c11_e_a = c11_idx2 + 1;
    c11_e_c = c11_e_a;
    c11_f_a = c11_idx2 + 1;
    c11_f_c = c11_f_a;
    c11_d10 = (real_T)c11_f_c;
    if (c11_d10 != (real_T)(int32_T)muDoubleScalarFloor(c11_d10)) {
      emlrtIntegerCheckR2012b(c11_d10, &c11_q_emlrtDCI, &c11_f_st);
    }

    c11_i25 = (int32_T)muDoubleScalarFloor(c11_d10);
    if ((c11_i25 < 1) || (c11_i25 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i25, 1, 256, &c11_q_emlrtBCI, &c11_f_st);
    }

    c11_d12 = (real_T)c11_e_c;
    if (c11_d12 != (real_T)(int32_T)muDoubleScalarFloor(c11_d12)) {
      emlrtIntegerCheckR2012b(c11_d12, &c11_r_emlrtDCI, &c11_f_st);
    }

    c11_i28 = (int32_T)muDoubleScalarFloor(c11_d12);
    if ((c11_i28 < 1) || (c11_i28 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i28, 1, 256, &c11_r_emlrtBCI, &c11_f_st);
    }

    c11_localBins2[c11_i28 - 1] = c11_localBins2[c11_i25 - 1] + 1.0;
    c11_l_a = c11_idx3 + 1;
    c11_h_c = c11_l_a;
    c11_m_a = c11_idx3 + 1;
    c11_i_c = c11_m_a;
    c11_d17 = (real_T)c11_i_c;
    if (c11_d17 != (real_T)(int32_T)muDoubleScalarFloor(c11_d17)) {
      emlrtIntegerCheckR2012b(c11_d17, &c11_s_emlrtDCI, &c11_f_st);
    }

    c11_i44 = (int32_T)muDoubleScalarFloor(c11_d17);
    if ((c11_i44 < 1) || (c11_i44 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i44, 1, 256, &c11_s_emlrtBCI, &c11_f_st);
    }

    c11_d22 = (real_T)c11_h_c;
    if (c11_d22 != (real_T)(int32_T)muDoubleScalarFloor(c11_d22)) {
      emlrtIntegerCheckR2012b(c11_d22, &c11_t_emlrtDCI, &c11_f_st);
    }

    c11_i51 = (int32_T)muDoubleScalarFloor(c11_d22);
    if ((c11_i51 < 1) || (c11_i51 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i51, 1, 256, &c11_t_emlrtBCI, &c11_f_st);
    }

    c11_localBins3[c11_i51 - 1] = c11_localBins3[c11_i44 - 1] + 1.0;
    c11_n_a = c11_idx4 + 1;
    c11_l_c = c11_n_a;
    c11_o_a = c11_idx4 + 1;
    c11_m_c = c11_o_a;
    c11_d25 = (real_T)c11_m_c;
    if (c11_d25 != (real_T)(int32_T)muDoubleScalarFloor(c11_d25)) {
      emlrtIntegerCheckR2012b(c11_d25, &c11_u_emlrtDCI, &c11_f_st);
    }

    c11_i56 = (int32_T)muDoubleScalarFloor(c11_d25);
    if ((c11_i56 < 1) || (c11_i56 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i56, 1, 256, &c11_u_emlrtBCI, &c11_f_st);
    }

    c11_d27 = (real_T)c11_l_c;
    if (c11_d27 != (real_T)(int32_T)muDoubleScalarFloor(c11_d27)) {
      emlrtIntegerCheckR2012b(c11_d27, &c11_v_emlrtDCI, &c11_f_st);
    }

    c11_i57 = (int32_T)muDoubleScalarFloor(c11_d27);
    if ((c11_i57 < 1) || (c11_i57 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i57, 1, 256, &c11_v_emlrtBCI, &c11_f_st);
    }

    c11_y[c11_i57 - 1] = c11_y[c11_i56 - 1] + 1.0;
  }

  while (c11_b_i <= 19200) {
    c11_d1 = (real_T)c11_b_i;
    if (c11_d1 != (real_T)(int32_T)muDoubleScalarFloor(c11_d1)) {
      emlrtIntegerCheckR2012b(c11_d1, &c11_e_emlrtDCI, &c11_f_st);
    }

    c11_i6 = (int32_T)muDoubleScalarFloor(c11_d1);
    if ((c11_i6 < 1) || (c11_i6 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c11_i6, 1, 19200, &c11_e_emlrtBCI, &c11_f_st);
    }

    c11_idx = c11_u[c11_i6 - 1];
    c11_a = c11_idx + 1;
    c11_c = c11_a;
    c11_b_a = c11_idx + 1;
    c11_b_c = c11_b_a;
    c11_d3 = (real_T)c11_b_c;
    if (c11_d3 != (real_T)(int32_T)muDoubleScalarFloor(c11_d3)) {
      emlrtIntegerCheckR2012b(c11_d3, &c11_m_emlrtDCI, &c11_f_st);
    }

    c11_i10 = (int32_T)muDoubleScalarFloor(c11_d3);
    if ((c11_i10 < 1) || (c11_i10 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i10, 1, 256, &c11_m_emlrtBCI, &c11_f_st);
    }

    c11_d5 = (real_T)c11_c;
    if (c11_d5 != (real_T)(int32_T)muDoubleScalarFloor(c11_d5)) {
      emlrtIntegerCheckR2012b(c11_d5, &c11_n_emlrtDCI, &c11_f_st);
    }

    c11_i14 = (int32_T)muDoubleScalarFloor(c11_d5);
    if ((c11_i14 < 1) || (c11_i14 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i14, 1, 256, &c11_n_emlrtBCI, &c11_f_st);
    }

    c11_y[c11_i14 - 1] = c11_y[c11_i10 - 1] + 1.0;
    c11_b_i++;
  }

  for (c11_c_i = 0; c11_c_i < 256; c11_c_i++) {
    c11_d_i = 1.0 + (real_T)c11_c_i;
    if (c11_d_i != (real_T)(int32_T)muDoubleScalarFloor(c11_d_i)) {
      emlrtIntegerCheckR2012b(c11_d_i, &c11_h_emlrtDCI, &c11_f_st);
    }

    c11_i7 = (int32_T)c11_d_i;
    if ((c11_i7 < 1) || (c11_i7 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i7, 1, 256, &c11_h_emlrtBCI, &c11_f_st);
    }

    if (c11_d_i != (real_T)(int32_T)muDoubleScalarFloor(c11_d_i)) {
      emlrtIntegerCheckR2012b(c11_d_i, &c11_i_emlrtDCI, &c11_f_st);
    }

    c11_i9 = (int32_T)c11_d_i;
    if ((c11_i9 < 1) || (c11_i9 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i9, 1, 256, &c11_i_emlrtBCI, &c11_f_st);
    }

    if (c11_d_i != (real_T)(int32_T)muDoubleScalarFloor(c11_d_i)) {
      emlrtIntegerCheckR2012b(c11_d_i, &c11_j_emlrtDCI, &c11_f_st);
    }

    c11_i11 = (int32_T)c11_d_i;
    if ((c11_i11 < 1) || (c11_i11 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i11, 1, 256, &c11_j_emlrtBCI, &c11_f_st);
    }

    if (c11_d_i != (real_T)(int32_T)muDoubleScalarFloor(c11_d_i)) {
      emlrtIntegerCheckR2012b(c11_d_i, &c11_k_emlrtDCI, &c11_f_st);
    }

    c11_i13 = (int32_T)c11_d_i;
    if ((c11_i13 < 1) || (c11_i13 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i13, 1, 256, &c11_k_emlrtBCI, &c11_f_st);
    }

    if (c11_d_i != (real_T)(int32_T)muDoubleScalarFloor(c11_d_i)) {
      emlrtIntegerCheckR2012b(c11_d_i, &c11_l_emlrtDCI, &c11_f_st);
    }

    c11_i16 = (int32_T)c11_d_i;
    if ((c11_i16 < 1) || (c11_i16 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i16, 1, 256, &c11_l_emlrtBCI, &c11_f_st);
    }

    c11_y[c11_i16 - 1] = ((c11_y[c11_i7 - 1] + c11_localBins1[c11_i9 - 1]) +
                          c11_localBins2[c11_i11 - 1]) + c11_localBins3[c11_i13
      - 1];
  }

  c11_d_st.site = &c11_d_emlrtRSI;
  c11_e_st.site = &c11_m_emlrtRSI;
  c11_f_st.site = &c11_o_emlrtRSI;
  c11_p = true;
  c11_k = 0;
  c11_exitg1 = false;
  while ((!c11_exitg1) && (c11_k < 256)) {
    c11_b_k = 1.0 + (real_T)c11_k;
    c11_x = c11_y[(int32_T)c11_b_k - 1];
    c11_b_x = c11_x;
    c11_b_b = muDoubleScalarIsInf(c11_b_x);
    c11_b1 = !c11_b_b;
    c11_c_x = c11_x;
    c11_c_b = muDoubleScalarIsNaN(c11_c_x);
    c11_b2 = !c11_c_b;
    c11_d_b = (c11_b1 && c11_b2);
    if (c11_d_b) {
      c11_k++;
    } else {
      c11_p = false;
      c11_exitg1 = true;
    }
  }

  if (c11_p) {
    c11_b = true;
  } else {
    c11_b = false;
  }

  if (!c11_b) {
    c11_b_y = NULL;
    sf_mex_assign(&c11_b_y, sf_mex_create("y", c11_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c11_c_y = NULL;
    sf_mex_assign(&c11_c_y, sf_mex_create("y", c11_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c11_d_y = NULL;
    sf_mex_assign(&c11_d_y, sf_mex_create("y", c11_cv2, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c11_f_st, &c11_emlrtMCI, "error", 0U, 2U, 14, c11_b_y, 14,
                sf_mex_call(&c11_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c11_f_st, NULL, "message", 1U, 2U, 14, c11_c_y, 14, c11_d_y)));
  }

  c11_f_st.site = &c11_o_emlrtRSI;
  c11_b_p = true;
  c11_c_k = 0;
  c11_exitg1 = false;
  while ((!c11_exitg1) && (c11_c_k < 256)) {
    c11_d_k = 1.0 + (real_T)c11_c_k;
    c11_d_x = c11_y[(int32_T)c11_d_k - 1];
    c11_c_p = !(c11_d_x < 0.0);
    if (c11_c_p) {
      c11_c_k++;
    } else {
      c11_b_p = false;
      c11_exitg1 = true;
    }
  }

  if (c11_b_p) {
    c11_b3 = true;
  } else {
    c11_b3 = false;
  }

  if (!c11_b3) {
    c11_e_y = NULL;
    sf_mex_assign(&c11_e_y, sf_mex_create("y", c11_cv3, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c11_f_y = NULL;
    sf_mex_assign(&c11_f_y, sf_mex_create("y", c11_cv4, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c11_g_y = NULL;
    sf_mex_assign(&c11_g_y, sf_mex_create("y", c11_cv5, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c11_f_st, &c11_b_emlrtMCI, "error", 0U, 2U, 14, c11_e_y, 14,
                sf_mex_call(&c11_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c11_f_st, NULL, "message", 1U, 2U, 14, c11_f_y, 14, c11_g_y)));
  }

  c11_num_elems = 0.0;
  for (c11_e_k = 0; c11_e_k < 256; c11_e_k++) {
    c11_f_k = 1.0 + (real_T)c11_e_k;
    if (c11_f_k != (real_T)(int32_T)muDoubleScalarFloor(c11_f_k)) {
      emlrtIntegerCheckR2012b(c11_f_k, &c11_w_emlrtDCI, &c11_d_st);
    }

    c11_i17 = (int32_T)c11_f_k;
    if ((c11_i17 < 1) || (c11_i17 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i17, 1, 256, &c11_w_emlrtBCI, &c11_d_st);
    }

    c11_num_elems += c11_y[c11_i17 - 1];
  }

  c11_localBins1[0] = c11_y[0] / c11_num_elems;
  c11_localBins2[0] = c11_localBins1[0];
  for (c11_g_k = 0; c11_g_k < 255; c11_g_k++) {
    c11_f_k = 2.0 + (real_T)c11_g_k;
    if (c11_f_k != (real_T)(int32_T)muDoubleScalarFloor(c11_f_k)) {
      emlrtIntegerCheckR2012b(c11_f_k, &c11_x_emlrtDCI, &c11_d_st);
    }

    c11_i19 = (int32_T)c11_f_k;
    if ((c11_i19 < 1) || (c11_i19 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i19, 1, 256, &c11_x_emlrtBCI, &c11_d_st);
    }

    c11_d_p = c11_y[c11_i19 - 1] / c11_num_elems;
    c11_d9 = c11_f_k - 1.0;
    if (c11_d9 != (real_T)(int32_T)muDoubleScalarFloor(c11_d9)) {
      emlrtIntegerCheckR2012b(c11_d9, &c11_y_emlrtDCI, &c11_d_st);
    }

    c11_i22 = (int32_T)c11_d9;
    if ((c11_i22 < 1) || (c11_i22 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i22, 1, 256, &c11_y_emlrtBCI, &c11_d_st);
    }

    if (c11_f_k != (real_T)(int32_T)muDoubleScalarFloor(c11_f_k)) {
      emlrtIntegerCheckR2012b(c11_f_k, &c11_ab_emlrtDCI, &c11_d_st);
    }

    c11_i24 = (int32_T)c11_f_k;
    if ((c11_i24 < 1) || (c11_i24 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i24, 1, 256, &c11_ab_emlrtBCI, &c11_d_st);
    }

    c11_localBins1[c11_i24 - 1] = c11_localBins1[c11_i22 - 1] + c11_d_p;
    c11_d11 = c11_f_k - 1.0;
    if (c11_d11 != (real_T)(int32_T)muDoubleScalarFloor(c11_d11)) {
      emlrtIntegerCheckR2012b(c11_d11, &c11_bb_emlrtDCI, &c11_d_st);
    }

    c11_i27 = (int32_T)c11_d11;
    if ((c11_i27 < 1) || (c11_i27 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i27, 1, 256, &c11_bb_emlrtBCI, &c11_d_st);
    }

    if (c11_f_k != (real_T)(int32_T)muDoubleScalarFloor(c11_f_k)) {
      emlrtIntegerCheckR2012b(c11_f_k, &c11_cb_emlrtDCI, &c11_d_st);
    }

    c11_i37 = (int32_T)c11_f_k;
    if ((c11_i37 < 1) || (c11_i37 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i37, 1, 256, &c11_cb_emlrtBCI, &c11_d_st);
    }

    c11_localBins2[c11_i37 - 1] = c11_localBins2[c11_i27 - 1] + c11_d_p *
      c11_f_k;
  }

  c11_mu_t = c11_localBins2[255];
  c11_maxval = rtMinusInf;
  c11_b_idx = 0.0;
  c11_num_maxval = 0.0;
  for (c11_h_k = 0; c11_h_k < 255; c11_h_k++) {
    c11_f_k = 1.0 + (real_T)c11_h_k;
    c11_e_st.site = &c11_n_emlrtRSI;
    if (c11_f_k != (real_T)(int32_T)muDoubleScalarFloor(c11_f_k)) {
      emlrtIntegerCheckR2012b(c11_f_k, &c11_db_emlrtDCI, &c11_e_st);
    }

    c11_i21 = (int32_T)c11_f_k;
    if ((c11_i21 < 1) || (c11_i21 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i21, 1, 256, &c11_db_emlrtBCI, &c11_e_st);
    }

    if (c11_f_k != (real_T)(int32_T)muDoubleScalarFloor(c11_f_k)) {
      emlrtIntegerCheckR2012b(c11_f_k, &c11_eb_emlrtDCI, &c11_e_st);
    }

    c11_i23 = (int32_T)c11_f_k;
    if ((c11_i23 < 1) || (c11_i23 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i23, 1, 256, &c11_eb_emlrtBCI, &c11_e_st);
    }

    c11_g_a = c11_mu_t * c11_localBins1[c11_i21 - 1] - c11_localBins2[c11_i23 -
      1];
    c11_f_st.site = &c11_p_emlrtRSI;
    c11_h_a = c11_g_a;
    c11_i_a = c11_h_a;
    c11_j_a = c11_i_a;
    c11_k_a = c11_j_a;
    c11_g_c = c11_k_a * c11_k_a;
    if (c11_f_k != (real_T)(int32_T)muDoubleScalarFloor(c11_f_k)) {
      emlrtIntegerCheckR2012b(c11_f_k, &c11_fb_emlrtDCI, &c11_d_st);
    }

    c11_i36 = (int32_T)c11_f_k;
    if ((c11_i36 < 1) || (c11_i36 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i36, 1, 256, &c11_fb_emlrtBCI, &c11_d_st);
    }

    if (c11_f_k != (real_T)(int32_T)muDoubleScalarFloor(c11_f_k)) {
      emlrtIntegerCheckR2012b(c11_f_k, &c11_gb_emlrtDCI, &c11_d_st);
    }

    c11_i42 = (int32_T)c11_f_k;
    if ((c11_i42 < 1) || (c11_i42 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c11_i42, 1, 256, &c11_gb_emlrtBCI, &c11_d_st);
    }

    c11_sigma_b_squared = c11_g_c / (c11_localBins1[c11_i36 - 1] * (1.0 -
      c11_localBins1[c11_i42 - 1]));
    if (c11_sigma_b_squared > c11_maxval) {
      c11_maxval = c11_sigma_b_squared;
      c11_b_idx = c11_f_k;
      c11_num_maxval = 1.0;
    } else if (c11_sigma_b_squared == c11_maxval) {
      c11_b_idx += c11_f_k;
      c11_num_maxval++;
    }
  }

  c11_e_x = c11_maxval;
  c11_f_x = c11_e_x;
  c11_e_b = muDoubleScalarIsInf(c11_f_x);
  c11_b4 = !c11_e_b;
  c11_g_x = c11_e_x;
  c11_f_b = muDoubleScalarIsNaN(c11_g_x);
  c11_b5 = !c11_f_b;
  c11_isfinite_maxval = (c11_b4 && c11_b5);
  if (c11_isfinite_maxval) {
    c11_b_idx /= c11_num_maxval;
    c11_t = (c11_b_idx - 1.0) / 255.0;
  } else {
    c11_t = 0.0;
  }

  c11_T = c11_t;
  for (c11_i26 = 0; c11_i26 < 19200; c11_i26++) {
    c11_b_binaryImage[c11_i26] = ((*chartInstance->c11_binaryImage)[c11_i26] >
      c11_T);
  }

  if (covrtEmlIfEval(chartInstance->c11_covrtInstance, 4U, 0, 0,
                     covrtRelationalopUpdateFcn(chartInstance->c11_covrtInstance,
        4U, 0U, 0U, c11_b_last_direction[0], 1.0, -1, 0U, c11_b_last_direction[0]
        == 1.0))) {
    c11_b_y_in--;
    c11_c_y_in = c11_b_y_in - 5.0;
    c11_c_x_in = c11_b_x_in - 20.0;
    for (c11_i29 = 0; c11_i29 < 41; c11_i29++) {
      for (c11_i32 = 0; c11_i32 < 66; c11_i32++) {
        c11_d13 = c11_c_y_in + (real_T)c11_i32;
        if (c11_d13 != (real_T)(int32_T)muDoubleScalarFloor(c11_d13)) {
          emlrtIntegerCheckR2012b(c11_d13, &c11_hb_emlrtDCI, &c11_st);
        }

        c11_i39 = (int32_T)c11_d13;
        if ((c11_i39 < 1) || (c11_i39 > 1810)) {
          emlrtDynamicBoundsCheckR2012b(c11_i39, 1, 1810, &c11_hb_emlrtBCI,
            &c11_st);
        }

        c11_d18 = c11_c_x_in + (real_T)c11_i29;
        if (c11_d18 != (real_T)(int32_T)muDoubleScalarFloor(c11_d18)) {
          emlrtIntegerCheckR2012b(c11_d18, &c11_hb_emlrtDCI, &c11_st);
        }

        c11_i46 = (int32_T)c11_d18;
        if ((c11_i46 < 1) || (c11_i46 > 1810)) {
          emlrtDynamicBoundsCheckR2012b(c11_i46, 1, 1810, &c11_hb_emlrtBCI,
            &c11_st);
        }

        chartInstance->c11_control_matrix_in[(c11_i39 + 1810 * (c11_i46 - 1)) -
          1] = 1.0;
      }
    }
  } else if (covrtEmlIfEval(chartInstance->c11_covrtInstance, 4U, 0, 1,
              covrtRelationalopUpdateFcn(chartInstance->c11_covrtInstance, 4U,
               0U, 1U, c11_b_last_direction[0], -1.0, -1, 0U,
               c11_b_last_direction[0] == -1.0))) {
    c11_b_y_in++;
    c11_d_y_in = c11_b_y_in - 55.0;
    c11_d_x_in = c11_b_x_in - 20.0;
    for (c11_i31 = 0; c11_i31 < 41; c11_i31++) {
      for (c11_i35 = 0; c11_i35 < 51; c11_i35++) {
        c11_d15 = c11_d_y_in + (real_T)c11_i35;
        if (c11_d15 != (real_T)(int32_T)muDoubleScalarFloor(c11_d15)) {
          emlrtIntegerCheckR2012b(c11_d15, &c11_jb_emlrtDCI, &c11_st);
        }

        c11_i41 = (int32_T)c11_d15;
        if ((c11_i41 < 1) || (c11_i41 > 1810)) {
          emlrtDynamicBoundsCheckR2012b(c11_i41, 1, 1810, &c11_jb_emlrtBCI,
            &c11_st);
        }

        c11_d20 = c11_d_x_in + (real_T)c11_i31;
        if (c11_d20 != (real_T)(int32_T)muDoubleScalarFloor(c11_d20)) {
          emlrtIntegerCheckR2012b(c11_d20, &c11_jb_emlrtDCI, &c11_st);
        }

        c11_i48 = (int32_T)c11_d20;
        if ((c11_i48 < 1) || (c11_i48 > 1810)) {
          emlrtDynamicBoundsCheckR2012b(c11_i48, 1, 1810, &c11_jb_emlrtBCI,
            &c11_st);
        }

        chartInstance->c11_control_matrix_in[(c11_i41 + 1810 * (c11_i48 - 1)) -
          1] = 1.0;
      }
    }
  } else if (covrtEmlIfEval(chartInstance->c11_covrtInstance, 4U, 0, 2,
              covrtRelationalopUpdateFcn(chartInstance->c11_covrtInstance, 4U,
               0U, 2U, c11_b_last_direction[1], -1.0, -1, 0U,
               c11_b_last_direction[1] == -1.0))) {
    c11_b_x_in--;
    c11_e_y_in = c11_b_y_in - 15.0;
    for (c11_i30 = 0; c11_i30 < 81; c11_i30++) {
      for (c11_i34 = 0; c11_i34 < 41; c11_i34++) {
        c11_d14 = c11_e_y_in + (real_T)c11_i34;
        if (c11_d14 != (real_T)(int32_T)muDoubleScalarFloor(c11_d14)) {
          emlrtIntegerCheckR2012b(c11_d14, &c11_ib_emlrtDCI, &c11_st);
        }

        c11_i40 = (int32_T)c11_d14;
        if ((c11_i40 < 1) || (c11_i40 > 1810)) {
          emlrtDynamicBoundsCheckR2012b(c11_i40, 1, 1810, &c11_ib_emlrtBCI,
            &c11_st);
        }

        c11_d19 = c11_b_x_in + (real_T)c11_i30;
        if (c11_d19 != (real_T)(int32_T)muDoubleScalarFloor(c11_d19)) {
          emlrtIntegerCheckR2012b(c11_d19, &c11_ib_emlrtDCI, &c11_st);
        }

        c11_i47 = (int32_T)c11_d19;
        if ((c11_i47 < 1) || (c11_i47 > 1810)) {
          emlrtDynamicBoundsCheckR2012b(c11_i47, 1, 1810, &c11_ib_emlrtBCI,
            &c11_st);
        }

        chartInstance->c11_control_matrix_in[(c11_i40 + 1810 * (c11_i47 - 1)) -
          1] = 1.0;
      }
    }
  } else if (covrtEmlIfEval(chartInstance->c11_covrtInstance, 4U, 0, 3,
              covrtRelationalopUpdateFcn(chartInstance->c11_covrtInstance, 4U,
               0U, 3U, c11_b_last_direction[1], 1.0, -1, 0U,
               c11_b_last_direction[1] == 1.0))) {
    c11_b_x_in++;
    c11_f_y_in = c11_b_y_in - 15.0;
    c11_e_x_in = c11_b_x_in - 80.0;
    for (c11_i33 = 0; c11_i33 < 81; c11_i33++) {
      for (c11_i38 = 0; c11_i38 < 41; c11_i38++) {
        c11_d16 = c11_f_y_in + (real_T)c11_i38;
        if (c11_d16 != (real_T)(int32_T)muDoubleScalarFloor(c11_d16)) {
          emlrtIntegerCheckR2012b(c11_d16, &c11_kb_emlrtDCI, &c11_st);
        }

        c11_i43 = (int32_T)c11_d16;
        if ((c11_i43 < 1) || (c11_i43 > 1810)) {
          emlrtDynamicBoundsCheckR2012b(c11_i43, 1, 1810, &c11_kb_emlrtBCI,
            &c11_st);
        }

        c11_d21 = c11_e_x_in + (real_T)c11_i33;
        if (c11_d21 != (real_T)(int32_T)muDoubleScalarFloor(c11_d21)) {
          emlrtIntegerCheckR2012b(c11_d21, &c11_kb_emlrtDCI, &c11_st);
        }

        c11_i50 = (int32_T)c11_d21;
        if ((c11_i50 < 1) || (c11_i50 > 1810)) {
          emlrtDynamicBoundsCheckR2012b(c11_i50, 1, 1810, &c11_kb_emlrtBCI,
            &c11_st);
        }

        chartInstance->c11_control_matrix_in[(c11_i43 + 1810 * (c11_i50 - 1)) -
          1] = 1.0;
      }
    }
  }

  c11_b_x_out = c11_b_x_in;
  c11_b_y_out = c11_b_y_in;
  c11_b_st.site = &c11_b_emlrtRSI;
  c11_h_x = c11_b_x_in - 80.0;
  c11_h_y = c11_b_y_in - 60.0;
  covrtEmlFcnEval(chartInstance->c11_covrtInstance, 4U, 0, 1);
  for (c11_r = 0; c11_r < 120; c11_r++) {
    c11_b_r = (real_T)c11_r;
    covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 0, 1);
    for (c11_j_c = 0; c11_j_c < 160; c11_j_c++) {
      c11_k_c = (real_T)c11_j_c;
      covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 1, 1);
      c11_d23 = c11_h_y + c11_b_r;
      if (c11_d23 != (real_T)(int32_T)muDoubleScalarFloor(c11_d23)) {
        emlrtIntegerCheckR2012b(c11_d23, &c11_lb_emlrtDCI, &c11_b_st);
      }

      c11_i54 = (int32_T)c11_d23;
      if ((c11_i54 < 1) || (c11_i54 > 1810)) {
        emlrtDynamicBoundsCheckR2012b(c11_i54, 1, 1810, &c11_lb_emlrtBCI,
          &c11_b_st);
      }

      c11_d24 = c11_h_x + c11_k_c;
      if (c11_d24 != (real_T)(int32_T)muDoubleScalarFloor(c11_d24)) {
        emlrtIntegerCheckR2012b(c11_d24, &c11_mb_emlrtDCI, &c11_b_st);
      }

      c11_i55 = (int32_T)c11_d24;
      if ((c11_i55 < 1) || (c11_i55 > 1810)) {
        emlrtDynamicBoundsCheckR2012b(c11_i55, 1, 1810, &c11_mb_emlrtBCI,
          &c11_b_st);
      }

      c11_d26 = chartInstance->c11_control_matrix_in[c11__s32_minus__
        (chartInstance, c11_i54, 1, 0, 1U, 903, 3) + 1810 * c11__s32_minus__
        (chartInstance, c11_i55, 1, 0, 1U, 907, 3)];
      if (covrtEmlIfEval(chartInstance->c11_covrtInstance, 4U, 0, 4,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c11_covrtInstance, 4U, 0U, 4U, c11_d26,
                          1.0, -1, 0U, c11_d26 == 1.0))) {
        c11_d28 = c11_k_c + 1.0;
        if (c11_d28 != (real_T)(int32_T)muDoubleScalarFloor(c11_d28)) {
          emlrtIntegerCheckR2012b(c11_d28, &c11_emlrtDCI, &c11_b_st);
        }

        c11_i58 = (int32_T)c11_d28;
        if ((c11_i58 < 1) || (c11_i58 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c11_i58, 1, 160, &c11_emlrtBCI,
            &c11_b_st);
        }

        c11_d29 = c11_b_r + 1.0;
        if (c11_d29 != (real_T)(int32_T)muDoubleScalarFloor(c11_d29)) {
          emlrtIntegerCheckR2012b(c11_d29, &c11_b_emlrtDCI, &c11_b_st);
        }

        c11_i59 = (int32_T)c11_d29;
        if ((c11_i59 < 1) || (c11_i59 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c11_i59, 1, 120, &c11_b_emlrtBCI,
            &c11_b_st);
        }

        c11_b_binaryImage[c11__s32_minus__(chartInstance, c11_i59, 1, 0, 1U, 935,
          3) + 120 * c11__s32_minus__(chartInstance, c11_i58, 1, 0, 1U, 939, 3)]
          = false;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c11_covrtInstance, 4U, 0, 0, 0);
  for (c11_i45 = 0; c11_i45 < 3276100; c11_i45++) {
    (*chartInstance->c11_control_matrix_out)[c11_i45] =
      chartInstance->c11_control_matrix_in[c11_i45];
  }

  for (c11_i49 = 0; c11_i49 < 19200; c11_i49++) {
    (*chartInstance->c11_filteredBinaryImage)[c11_i49] =
      c11_b_binaryImage[c11_i49];
  }

  *chartInstance->c11_x_out = c11_b_x_out;
  *chartInstance->c11_y_out = c11_b_y_out;
  for (c11_i52 = 0; c11_i52 < 3276100; c11_i52++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 5U,
                      (*chartInstance->c11_control_matrix_out)[c11_i52]);
  }

  for (c11_i53 = 0; c11_i53 < 19200; c11_i53++) {
    covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 6U, (real_T)
                      (*chartInstance->c11_filteredBinaryImage)[c11_i53]);
  }

  covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 7U,
                    *chartInstance->c11_x_out);
  covrtSigUpdateFcn(chartInstance->c11_covrtInstance, 8U,
                    *chartInstance->c11_y_out);
}

static void ext_mode_exec_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_update_jit_animation_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_do_animation_call_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c11_b_y = NULL;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_d_y = NULL;
  const mxArray *c11_e_y = NULL;
  const mxArray *c11_st;
  const mxArray *c11_y = NULL;
  c11_st = NULL;
  c11_st = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_createcellmatrix(4, 1), false);
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y",
    *chartInstance->c11_control_matrix_out, 0, 0U, 1, 0U, 2, 1810, 1810), false);
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y",
    *chartInstance->c11_filteredBinaryImage, 11, 0U, 1, 0U, 2, 120, 160), false);
  sf_mex_setcell(c11_y, 1, c11_c_y);
  c11_d_y = NULL;
  sf_mex_assign(&c11_d_y, sf_mex_create("y", chartInstance->c11_x_out, 0, 0U, 0,
    0U, 0), false);
  sf_mex_setcell(c11_y, 2, c11_d_y);
  c11_e_y = NULL;
  sf_mex_assign(&c11_e_y, sf_mex_create("y", chartInstance->c11_y_out, 0, 0U, 0,
    0U, 0), false);
  sf_mex_setcell(c11_y, 3, c11_e_y);
  sf_mex_assign(&c11_st, c11_y, false);
  return c11_st;
}

static void set_sim_state_c11_flightControlSystem
  (SFc11_flightControlSystemInstanceStruct *chartInstance, const mxArray *c11_st)
{
  const mxArray *c11_u;
  int32_T c11_i;
  int32_T c11_i1;
  boolean_T c11_bv[19200];
  chartInstance->c11_doneDoubleBufferReInit = true;
  c11_u = sf_mex_dup(c11_st);
  c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 0)),
                       "control_matrix_out", chartInstance->c11_dv);
  for (c11_i = 0; c11_i < 3276100; c11_i++) {
    (*chartInstance->c11_control_matrix_out)[c11_i] = chartInstance->
      c11_dv[c11_i];
  }

  c11_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 1)),
    "filteredBinaryImage", c11_bv);
  for (c11_i1 = 0; c11_i1 < 19200; c11_i1++) {
    (*chartInstance->c11_filteredBinaryImage)[c11_i1] = c11_bv[c11_i1];
  }

  *chartInstance->c11_x_out = c11_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 2)), "x_out");
  *chartInstance->c11_y_out = c11_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 3)), "y_out");
  sf_mex_destroy(&c11_u);
  sf_mex_destroy(&c11_st);
}

const mxArray *sf_c11_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c11_nameCaptureInfo = NULL;
  c11_nameCaptureInfo = NULL;
  sf_mex_assign(&c11_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c11_nameCaptureInfo;
}

static void c11_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier,
  real_T c11_y[3276100])
{
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr), &c11_thisId,
    c11_y);
  sf_mex_destroy(&c11_nullptr);
}

static void c11_b_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId,
  real_T c11_y[3276100])
{
  int32_T c11_i;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), chartInstance->c11_b_dv, 1, 0,
                0U, 1, 0U, 2, 1810, 1810);
  for (c11_i = 0; c11_i < 3276100; c11_i++) {
    c11_y[c11_i] = chartInstance->c11_b_dv[c11_i];
  }

  sf_mex_destroy(&c11_u);
}

static void c11_c_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier,
  boolean_T c11_y[19200])
{
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr), &c11_thisId,
    c11_y);
  sf_mex_destroy(&c11_nullptr);
}

static void c11_d_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId,
  boolean_T c11_y[19200])
{
  int32_T c11_i;
  boolean_T c11_bv[19200];
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), c11_bv, 1, 11, 0U, 1, 0U, 2,
                120, 160);
  for (c11_i = 0; c11_i < 19200; c11_i++) {
    c11_y[c11_i] = c11_bv[c11_i];
  }

  sf_mex_destroy(&c11_u);
}

static real_T c11_e_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_nullptr, const char_T *c11_identifier)
{
  emlrtMsgIdentifier c11_thisId;
  real_T c11_y;
  c11_thisId.fIdentifier = (const char_T *)c11_identifier;
  c11_thisId.fParent = NULL;
  c11_thisId.bParentIsCell = false;
  c11_y = c11_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_nullptr),
    &c11_thisId);
  sf_mex_destroy(&c11_nullptr);
  return c11_y;
}

static real_T c11_f_emlrt_marshallIn(SFc11_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  real_T c11_d;
  real_T c11_y;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_d, 1, 0, 0U, 0, 0U, 0);
  c11_y = c11_d;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static int32_T c11__s32_minus__(SFc11_flightControlSystemInstanceStruct
  *chartInstance, int32_T c11_b, int32_T c11_c, int32_T c11_EMLOvCount_src_loc,
  uint32_T c11_ssid_src_loc, int32_T c11_offset_src_loc, int32_T
  c11_length_src_loc)
{
  int32_T c11_a;
  (void)c11_EMLOvCount_src_loc;
  c11_a = c11_b - c11_c;
  if (((c11_b ^ c11_a) & (c11_b ^ c11_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c11_ssid_src_loc,
      c11_offset_src_loc, c11_length_src_loc);
  }

  return c11_a;
}

static void init_dsm_address_info(SFc11_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc11_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c11_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c11_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c11_b_control_matrix_in = (real_T (*)[3276100])
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c11_control_matrix_out = (real_T (*)[3276100])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c11_binaryImage = (real_T (*)[19200])
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c11_last_direction = (real_T (*)[2])
    ssGetInputPortSignal_wrapper(chartInstance->S, 2);
  chartInstance->c11_x_in = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c11_y_in = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c11_filteredBinaryImage = (boolean_T (*)[19200])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 2);
  chartInstance->c11_x_out = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c11_y_out = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c11_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2879045009U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(787238300U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2048612899U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3951023686U);
}

mxArray *sf_c11_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c11_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c11_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c11_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCewczAwAakOYCYiQECWKF8RiBmgdIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Is4gPR7IOlnwaJfCEm/AJSfnJ9XUpSfE5+bWF"
    "KUWRGfX1oCkedjQNAD5y8VovwljOYvED8tM6cktSg1xSkzL7Go0jM3MT11EPlLzQFdPzZ/saL5C"
    "8SHRdHg8IcG2f6oRPMHAPBCKhY="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c11_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sXCExy4fIoyezMIKjVkHf8C";
}

static void sf_opaque_initialize_c11_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c11_flightControlSystem
    ((SFc11_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c11_flightControlSystem(void *chartInstanceVar)
{
  enable_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c11_flightControlSystem(void *chartInstanceVar)
{
  disable_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c11_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c11_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c11_flightControlSystem
    ((SFc11_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c11_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c11_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc11_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c11_flightControlSystem
      ((SFc11_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c11_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc11_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c11_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c11_flightControlSystem((SFc11_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c11_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c11_flightControlSystem
      ((SFc11_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c11_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrdWE9vG0UUnwQnpaiEUpAACVEOqOoFqWlB6gFBUv8hFgmxsBMKl2i8+9Y7eHbGnT+O3QOfg0/",
    "DnW9QcUJ8Ao4cOPBmvXasjevsrKXGsNJ6Pbv7m/feb96/WbLRPCJ47OD54gNCtvH6Op6bZHJsZe",
    "ONuXNyv0K+yMatNwgJYqpMU0SS+B+BDKEHom2jiI08scImLapookvIFTSB70BLbg2Twk95JiJQI",
    "AKcYCCV8ZKrWWI5E/2GFYGTrL+PWRC3Y2l5+AQnpOGx4OOXyR1Y00KJNaYgMA2A0MRK2l7c4LS3",
    "nAVlzqsxBH1tE2+uNJi2HThT9ZHlhg041EcQNIU2FFnQV9jbNtRA1Yy8PYTp9hQtkwFnVBTnOqa",
    "6DQP0DgMngxB/j61B9grKRXldJqiRilFeT3jVeXhBbIujnkfo1tybZ5OYGnRtr8dEz7GrbAIC7U",
    "c/KcBVVJVDULQHx8IzBp119VG6wDO/LB6DTeeWpWLQJpNV0aWwqdz6EBnSJeU2AlGlnGs/bEcOD",
    "mEIPJVfo4aWwE7ke4C1ZmFHnlLlosAzkqxgzyxk2KoUISu+wsMcKk2432LyLABniXMpCJHmmeqz",
    "ia7ySauNTKoYRrXDw4LyLmObwoCKaACFc5+iTAMqnPqVp9yQadrlDo0smdTKwjOAKA0lOrKidi5",
    "VHzn2TbIXXLlI8END2IMaGEgTRh29+5RyW1DnRGOGc+5xojFj+clFrIufUuCABjGErp4wDkeg3Q",
    "S6cH7GOrKP1g6ZGddAB4oNikaS1RBiIXEsdcYDOBF9Ic9FQ8mknXUES/wKALMGVQLLwhMsS2rcQ",
    "OWLaa3gWcd5Vpn2LKGG067zja9BYGVxtrpKSAOMqrrA1g0VWgXbZs+xtAvNtMF2alxPYyBM+9H3",
    "N/z60bez8aNZLDV1R+FKUSzDAjul/W7a7EGHJZDeaFPsKSbD7HByH5ALuTc3l8vdxH8bJXFkRdz",
    "BHK6ygJ/35nC3s3Gwu3sWcdaLXRY2SvL2GIlPLulxqwDfi/TP48gl3AXP0+v9OfzGArlk7uref7",
    "yEr61LfGX33JHh9+bwb+bkVXL47Yy7G7/f++j4t59//efuH523frjx5yp+clDx8+udbPzhtE+bV",
    "bLhpWRf1i/002p9NP4sasoxPD9qfvPTaf8gelxN5/vlteX6VnL6Tu9/jKfBRJfmTRU0w2zP5cbU",
    "TvYC+fXcvoKPm3N+RchfX62Gf3evCF93cnzdSfesafScYY5TbHQmp9uKnZf46au165NCdr2Ts8u",
    "NI8YxOUM4qTHNBEvjGtl1by+PX2TXVs4uN54u0XrYcb+0HeMFdqx7vbqu+nidehapn1slcZWSOP",
    "KKcava59sX/Nfff7AkH5Dc+7fX2A6yJD/59IfrZtcL4te33c3GX86+3VRjxsMFu8fsMW7wokVP/",
    "yf+/bcnf9M+te74yz4+//hoX1A+xu3iZDue3W4p991z9kgB1Yv35NdRh8iCfceien8rF99ufM5E",
    "KM/1p7sPP3+4Sl37F3lOHdU=",
    ""
  };

  static char newstr [1525] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c11_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c11_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(505862663U));
  ssSetChecksum1(S,(3195980111U));
  ssSetChecksum2(S,(1423974396U));
  ssSetChecksum3(S,(3792132367U));
}

static void mdlRTW_c11_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c11_flightControlSystem(SimStruct *S)
{
  SFc11_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc11_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc11_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc11_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c11_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c11_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c11_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c11_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c11_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c11_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c11_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c11_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c11_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c11_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c11_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c11_flightControlSystem;
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

  mdl_setup_runtime_resources_c11_flightControlSystem(chartInstance);
}

void c11_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c11_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c11_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c11_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c11_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
