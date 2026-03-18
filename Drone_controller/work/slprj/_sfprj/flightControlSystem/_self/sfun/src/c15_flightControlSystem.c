/* Include files */

#include "flightControlSystem_sfun.h"
#include "c15_flightControlSystem.h"
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
static emlrtMCInfo c15_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c15_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c15_c_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRSInfo c15_emlrtRSI = { 2, /* lineNo */
  "Image Processing System/soluzione2/MATLAB Function",/* fcnName */
  "#flightControlSystem:2940"          /* pathName */
};

static emlrtRSInfo c15_b_emlrtRSI = { 70,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c15_c_emlrtRSI = { 102,/* lineNo */
  "imbinarize",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imbinarize.m"/* pathName */
};

static emlrtRSInfo c15_d_emlrtRSI = { 39,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c15_e_emlrtRSI = { 195,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c15_f_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRSInfo c15_g_emlrtRSI = { 131,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c15_h_emlrtRSI = { 166,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c15_i_emlrtRSI = { 203,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c15_j_emlrtRSI = { 448,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c15_k_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c15_l_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c15_m_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c15_n_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c15_o_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c15_p_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtBCInfo c15_emlrtBCI = { 1, /* iFirst */
  40000,                               /* iLast */
  1051,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_emlrtDCI = { 1051,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_b_emlrtBCI = { 1,/* iFirst */
  40000,                               /* iLast */
  1052,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_b_emlrtDCI = { 1052,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_c_emlrtBCI = { 1,/* iFirst */
  40000,                               /* iLast */
  1066,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_c_emlrtDCI = { 1066,/* lineNo */
  47,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_d_emlrtBCI = { 1,/* iFirst */
  40000,                               /* iLast */
  1053,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_d_emlrtDCI = { 1053,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_e_emlrtBCI = { 1,/* iFirst */
  40000,                               /* iLast */
  1054,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_e_emlrtDCI = { 1054,/* lineNo */
  48,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_f_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_f_emlrtDCI = { 1130,/* lineNo */
  18,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_g_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_g_emlrtDCI = { 1130,/* lineNo */
  34,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_h_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_h_emlrtDCI = { 1130,/* lineNo */
  50,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_i_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_i_emlrtDCI = { 1130,/* lineNo */
  66,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_j_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1130,                                /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c15_j_emlrtDCI = { 1130,/* lineNo */
  11,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_k_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_k_emlrtDCI = { 1068,/* lineNo */
  52,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_l_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1068,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c15_l_emlrtDCI = { 1068,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_m_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_m_emlrtDCI = { 1056,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_n_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1056,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c15_n_emlrtDCI = { 1056,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_o_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_o_emlrtDCI = { 1057,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_p_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1057,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c15_p_emlrtDCI = { 1057,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_q_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_q_emlrtDCI = { 1058,/* lineNo */
  71,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_r_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1058,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c15_r_emlrtDCI = { 1058,/* lineNo */
  24,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_s_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_s_emlrtDCI = { 1059,/* lineNo */
  53,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_t_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  1059,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c15_t_emlrtDCI = { 1059,/* lineNo */
  15,                                  /* colNo */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_u_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  54,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_u_emlrtDCI = { 54,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_v_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  66,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_v_emlrtDCI = { 66,/* lineNo */
  27,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_w_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_w_emlrtDCI = { 68,/* lineNo */
  26,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_x_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  68,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c15_x_emlrtDCI = { 68,/* lineNo */
  15,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_y_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_y_emlrtDCI = { 70,/* lineNo */
  20,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_ab_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  70,                                  /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c15_ab_emlrtDCI = { 70,/* lineNo */
  12,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_bb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_bb_emlrtDCI = { 85,/* lineNo */
  39,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_cb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_cb_emlrtDCI = { 85,/* lineNo */
  47,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_db_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_db_emlrtDCI = { 85,/* lineNo */
  62,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c15_eb_emlrtBCI = { 1,/* iFirst */
  256,                                 /* iLast */
  85,                                  /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c15_eb_emlrtDCI = { 85,/* lineNo */
  74,                                  /* colNo */
  "otsuthresh",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\otsuthresh.m",/* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void enable_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void disable_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void c15_update_jit_animation_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void c15_do_animation_call_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance, const mxArray *c15_st);
static void c15_emlrt_marshallIn(SFc15_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c15_nullptr, const char_T *c15_identifier,
  boolean_T c15_b_y[40000]);
static void c15_b_emlrt_marshallIn(SFc15_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c15_b_u, const emlrtMsgIdentifier *c15_parentId,
  boolean_T c15_b_y[40000]);
static void init_dsm_address_info(SFc15_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc15_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c15_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c15_st.tls = chartInstance->c15_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c15_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c15_doneDoubleBufferReInit = false;
  chartInstance->c15_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c15_decisionTxtEndIdx = 0U;
  static const uint32_T c15_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c15_JITStateAnimation
                        [0], &chartInstance->c15_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c15_covrtInstance, 1U, 0U, 1U,
    181U);
  covrtChartInitFcn(chartInstance->c15_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c15_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c15_decisionTxtStartIdx, &c15_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c15_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c15_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c15_covrtInstance, 4U, 0U, 0U,
                     "c15_flightControlSystem", 0, -1, 72);
}

static void mdl_cleanup_runtime_resources_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c15_covrtInstance);
}

static void enable_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c15_cv4[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c15_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c15_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c15_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c15_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  static char_T c15_cv5[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c15_b_st;
  emlrtStack c15_c_st;
  emlrtStack c15_d_st;
  emlrtStack c15_e_st;
  emlrtStack c15_f_st;
  emlrtStack c15_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c15_c_y = NULL;
  const mxArray *c15_d_y = NULL;
  const mxArray *c15_e_y = NULL;
  const mxArray *c15_f_y = NULL;
  const mxArray *c15_g_y = NULL;
  const mxArray *c15_h_y = NULL;
  real_T c15_b_y[256];
  real_T c15_localBins1[256];
  real_T c15_localBins2[256];
  real_T c15_localBins3[256];
  real_T c15_T;
  real_T c15_b_idx;
  real_T c15_b_k;
  real_T c15_b_x;
  real_T c15_c_x;
  real_T c15_d;
  real_T c15_d1;
  real_T c15_d10;
  real_T c15_d11;
  real_T c15_d12;
  real_T c15_d13;
  real_T c15_d14;
  real_T c15_d15;
  real_T c15_d16;
  real_T c15_d2;
  real_T c15_d3;
  real_T c15_d4;
  real_T c15_d5;
  real_T c15_d6;
  real_T c15_d7;
  real_T c15_d8;
  real_T c15_d9;
  real_T c15_d_i;
  real_T c15_d_k;
  real_T c15_d_p;
  real_T c15_d_x;
  real_T c15_e_x;
  real_T c15_f_k;
  real_T c15_f_x;
  real_T c15_g_a;
  real_T c15_g_c;
  real_T c15_g_x;
  real_T c15_h_a;
  real_T c15_i_a;
  real_T c15_j_a;
  real_T c15_k_a;
  real_T c15_maxval;
  real_T c15_mu_t;
  real_T c15_num_elems;
  real_T c15_num_maxval;
  real_T c15_out;
  real_T c15_sigma_b_squared;
  real_T c15_t;
  real_T c15_x;
  int32_T c15_a;
  int32_T c15_b_a;
  int32_T c15_b_c;
  int32_T c15_b_i;
  int32_T c15_c;
  int32_T c15_c_a;
  int32_T c15_c_c;
  int32_T c15_c_i;
  int32_T c15_c_k;
  int32_T c15_d_a;
  int32_T c15_d_c;
  int32_T c15_e_a;
  int32_T c15_e_c;
  int32_T c15_e_k;
  int32_T c15_f_a;
  int32_T c15_f_c;
  int32_T c15_g_k;
  int32_T c15_h_c;
  int32_T c15_h_k;
  int32_T c15_i;
  int32_T c15_i1;
  int32_T c15_i10;
  int32_T c15_i11;
  int32_T c15_i12;
  int32_T c15_i13;
  int32_T c15_i14;
  int32_T c15_i15;
  int32_T c15_i16;
  int32_T c15_i17;
  int32_T c15_i18;
  int32_T c15_i19;
  int32_T c15_i2;
  int32_T c15_i20;
  int32_T c15_i21;
  int32_T c15_i22;
  int32_T c15_i23;
  int32_T c15_i24;
  int32_T c15_i25;
  int32_T c15_i26;
  int32_T c15_i27;
  int32_T c15_i28;
  int32_T c15_i29;
  int32_T c15_i3;
  int32_T c15_i30;
  int32_T c15_i31;
  int32_T c15_i32;
  int32_T c15_i33;
  int32_T c15_i34;
  int32_T c15_i4;
  int32_T c15_i5;
  int32_T c15_i6;
  int32_T c15_i7;
  int32_T c15_i8;
  int32_T c15_i9;
  int32_T c15_i_c;
  int32_T c15_idx;
  int32_T c15_idx1;
  int32_T c15_idx2;
  int32_T c15_idx3;
  int32_T c15_idx4;
  int32_T c15_j_c;
  int32_T c15_k;
  int32_T c15_k_c;
  int32_T c15_l_a;
  int32_T c15_m_a;
  int32_T c15_n_a;
  int32_T c15_o_a;
  uint8_T c15_b_u[40000];
  boolean_T c15_b;
  boolean_T c15_b1;
  boolean_T c15_b2;
  boolean_T c15_b3;
  boolean_T c15_b4;
  boolean_T c15_b5;
  boolean_T c15_b_b;
  boolean_T c15_b_p;
  boolean_T c15_c_b;
  boolean_T c15_c_p;
  boolean_T c15_d_b;
  boolean_T c15_e_b;
  boolean_T c15_exitg1;
  boolean_T c15_f_b;
  boolean_T c15_isfinite_maxval;
  boolean_T c15_p;
  c15_st.tls = chartInstance->c15_fEmlrtCtx;
  c15_b_st.prev = &c15_st;
  c15_b_st.tls = c15_st.tls;
  c15_c_st.prev = &c15_b_st;
  c15_c_st.tls = c15_b_st.tls;
  c15_d_st.prev = &c15_c_st;
  c15_d_st.tls = c15_c_st.tls;
  c15_e_st.prev = &c15_d_st;
  c15_e_st.tls = c15_d_st.tls;
  c15_f_st.prev = &c15_e_st;
  c15_f_st.tls = c15_e_st.tls;
  for (c15_i = 0; c15_i < 40000; c15_i++) {
    covrtSigUpdateFcn(chartInstance->c15_covrtInstance, 0U,
                      (*chartInstance->c15_u)[c15_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c15_JITTransitionAnimation[0] = 0U;
  chartInstance->c15_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c15_covrtInstance, 4U, 0, 0);
  c15_b_st.site = &c15_emlrtRSI;
  c15_c_st.site = &c15_b_emlrtRSI;
  c15_d_st.site = &c15_c_emlrtRSI;
  c15_e_st.site = &c15_d_emlrtRSI;
  c15_f_st.site = &c15_e_emlrtRSI;
  grayto8_real64(&(*chartInstance->c15_u)[0], &c15_b_u[0], 40000.0);
  c15_d_st.site = &c15_c_emlrtRSI;
  c15_e_st.site = &c15_g_emlrtRSI;
  c15_f_st.site = &c15_h_emlrtRSI;
  c15_out = 1.0;
  getnumcores(&c15_out);
  c15_f_st.site = &c15_i_emlrtRSI;
  memset(&c15_b_y[0], 0, sizeof(real_T) << 8);
  memset(&c15_localBins1[0], 0, sizeof(real_T) << 8);
  memset(&c15_localBins2[0], 0, sizeof(real_T) << 8);
  memset(&c15_localBins3[0], 0, sizeof(real_T) << 8);
  for (c15_b_i = 1; c15_b_i + 3 <= 40000; c15_b_i += 4) {
    c15_d = (real_T)c15_b_i;
    if (c15_d != (real_T)(int32_T)muDoubleScalarFloor(c15_d)) {
      emlrtIntegerCheckR2012b(c15_d, &c15_emlrtDCI, &c15_f_st);
    }

    c15_i1 = (int32_T)muDoubleScalarFloor(c15_d);
    if ((c15_i1 < 1) || (c15_i1 > 40000)) {
      emlrtDynamicBoundsCheckR2012b(c15_i1, 1, 40000, &c15_emlrtBCI, &c15_f_st);
    }

    c15_idx1 = c15_b_u[c15_i1 - 1];
    c15_d2 = (real_T)(c15_b_i + 1);
    if (c15_d2 != (real_T)(int32_T)muDoubleScalarFloor(c15_d2)) {
      emlrtIntegerCheckR2012b(c15_d2, &c15_b_emlrtDCI, &c15_f_st);
    }

    c15_i4 = (int32_T)muDoubleScalarFloor(c15_d2);
    if ((c15_i4 < 1) || (c15_i4 > 40000)) {
      emlrtDynamicBoundsCheckR2012b(c15_i4, 1, 40000, &c15_b_emlrtBCI, &c15_f_st);
    }

    c15_idx2 = c15_b_u[c15_i4 - 1];
    c15_d4 = (real_T)(c15_b_i + 2);
    if (c15_d4 != (real_T)(int32_T)muDoubleScalarFloor(c15_d4)) {
      emlrtIntegerCheckR2012b(c15_d4, &c15_d_emlrtDCI, &c15_f_st);
    }

    c15_i8 = (int32_T)muDoubleScalarFloor(c15_d4);
    if ((c15_i8 < 1) || (c15_i8 > 40000)) {
      emlrtDynamicBoundsCheckR2012b(c15_i8, 1, 40000, &c15_d_emlrtBCI, &c15_f_st);
    }

    c15_idx3 = c15_b_u[c15_i8 - 1];
    c15_d6 = (real_T)(c15_b_i + 3);
    if (c15_d6 != (real_T)(int32_T)muDoubleScalarFloor(c15_d6)) {
      emlrtIntegerCheckR2012b(c15_d6, &c15_e_emlrtDCI, &c15_f_st);
    }

    c15_i11 = (int32_T)muDoubleScalarFloor(c15_d6);
    if ((c15_i11 < 1) || (c15_i11 > 40000)) {
      emlrtDynamicBoundsCheckR2012b(c15_i11, 1, 40000, &c15_e_emlrtBCI,
        &c15_f_st);
    }

    c15_idx4 = c15_b_u[c15_i11 - 1];
    c15_c_a = c15_idx1 + 1;
    c15_c_c = c15_c_a;
    c15_d_a = c15_idx1 + 1;
    c15_d_c = c15_d_a;
    c15_d7 = (real_T)c15_d_c;
    if (c15_d7 != (real_T)(int32_T)muDoubleScalarFloor(c15_d7)) {
      emlrtIntegerCheckR2012b(c15_d7, &c15_m_emlrtDCI, &c15_f_st);
    }

    c15_i14 = (int32_T)muDoubleScalarFloor(c15_d7);
    if ((c15_i14 < 1) || (c15_i14 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i14, 1, 256, &c15_m_emlrtBCI, &c15_f_st);
    }

    c15_d8 = (real_T)c15_c_c;
    if (c15_d8 != (real_T)(int32_T)muDoubleScalarFloor(c15_d8)) {
      emlrtIntegerCheckR2012b(c15_d8, &c15_n_emlrtDCI, &c15_f_st);
    }

    c15_i16 = (int32_T)muDoubleScalarFloor(c15_d8);
    if ((c15_i16 < 1) || (c15_i16 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i16, 1, 256, &c15_n_emlrtBCI, &c15_f_st);
    }

    c15_localBins1[c15_i16 - 1] = c15_localBins1[c15_i14 - 1] + 1.0;
    c15_e_a = c15_idx2 + 1;
    c15_e_c = c15_e_a;
    c15_f_a = c15_idx2 + 1;
    c15_f_c = c15_f_a;
    c15_d10 = (real_T)c15_f_c;
    if (c15_d10 != (real_T)(int32_T)muDoubleScalarFloor(c15_d10)) {
      emlrtIntegerCheckR2012b(c15_d10, &c15_o_emlrtDCI, &c15_f_st);
    }

    c15_i21 = (int32_T)muDoubleScalarFloor(c15_d10);
    if ((c15_i21 < 1) || (c15_i21 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i21, 1, 256, &c15_o_emlrtBCI, &c15_f_st);
    }

    c15_d12 = (real_T)c15_e_c;
    if (c15_d12 != (real_T)(int32_T)muDoubleScalarFloor(c15_d12)) {
      emlrtIntegerCheckR2012b(c15_d12, &c15_p_emlrtDCI, &c15_f_st);
    }

    c15_i27 = (int32_T)muDoubleScalarFloor(c15_d12);
    if ((c15_i27 < 1) || (c15_i27 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i27, 1, 256, &c15_p_emlrtBCI, &c15_f_st);
    }

    c15_localBins2[c15_i27 - 1] = c15_localBins2[c15_i21 - 1] + 1.0;
    c15_l_a = c15_idx3 + 1;
    c15_h_c = c15_l_a;
    c15_m_a = c15_idx3 + 1;
    c15_i_c = c15_m_a;
    c15_d13 = (real_T)c15_i_c;
    if (c15_d13 != (real_T)(int32_T)muDoubleScalarFloor(c15_d13)) {
      emlrtIntegerCheckR2012b(c15_d13, &c15_q_emlrtDCI, &c15_f_st);
    }

    c15_i31 = (int32_T)muDoubleScalarFloor(c15_d13);
    if ((c15_i31 < 1) || (c15_i31 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i31, 1, 256, &c15_q_emlrtBCI, &c15_f_st);
    }

    c15_d14 = (real_T)c15_h_c;
    if (c15_d14 != (real_T)(int32_T)muDoubleScalarFloor(c15_d14)) {
      emlrtIntegerCheckR2012b(c15_d14, &c15_r_emlrtDCI, &c15_f_st);
    }

    c15_i32 = (int32_T)muDoubleScalarFloor(c15_d14);
    if ((c15_i32 < 1) || (c15_i32 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i32, 1, 256, &c15_r_emlrtBCI, &c15_f_st);
    }

    c15_localBins3[c15_i32 - 1] = c15_localBins3[c15_i31 - 1] + 1.0;
    c15_n_a = c15_idx4 + 1;
    c15_j_c = c15_n_a;
    c15_o_a = c15_idx4 + 1;
    c15_k_c = c15_o_a;
    c15_d15 = (real_T)c15_k_c;
    if (c15_d15 != (real_T)(int32_T)muDoubleScalarFloor(c15_d15)) {
      emlrtIntegerCheckR2012b(c15_d15, &c15_s_emlrtDCI, &c15_f_st);
    }

    c15_i33 = (int32_T)muDoubleScalarFloor(c15_d15);
    if ((c15_i33 < 1) || (c15_i33 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i33, 1, 256, &c15_s_emlrtBCI, &c15_f_st);
    }

    c15_d16 = (real_T)c15_j_c;
    if (c15_d16 != (real_T)(int32_T)muDoubleScalarFloor(c15_d16)) {
      emlrtIntegerCheckR2012b(c15_d16, &c15_t_emlrtDCI, &c15_f_st);
    }

    c15_i34 = (int32_T)muDoubleScalarFloor(c15_d16);
    if ((c15_i34 < 1) || (c15_i34 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i34, 1, 256, &c15_t_emlrtBCI, &c15_f_st);
    }

    c15_b_y[c15_i34 - 1] = c15_b_y[c15_i33 - 1] + 1.0;
  }

  while (c15_b_i <= 40000) {
    c15_d1 = (real_T)c15_b_i;
    if (c15_d1 != (real_T)(int32_T)muDoubleScalarFloor(c15_d1)) {
      emlrtIntegerCheckR2012b(c15_d1, &c15_c_emlrtDCI, &c15_f_st);
    }

    c15_i2 = (int32_T)muDoubleScalarFloor(c15_d1);
    if ((c15_i2 < 1) || (c15_i2 > 40000)) {
      emlrtDynamicBoundsCheckR2012b(c15_i2, 1, 40000, &c15_c_emlrtBCI, &c15_f_st);
    }

    c15_idx = c15_b_u[c15_i2 - 1];
    c15_a = c15_idx + 1;
    c15_c = c15_a;
    c15_b_a = c15_idx + 1;
    c15_b_c = c15_b_a;
    c15_d3 = (real_T)c15_b_c;
    if (c15_d3 != (real_T)(int32_T)muDoubleScalarFloor(c15_d3)) {
      emlrtIntegerCheckR2012b(c15_d3, &c15_k_emlrtDCI, &c15_f_st);
    }

    c15_i6 = (int32_T)muDoubleScalarFloor(c15_d3);
    if ((c15_i6 < 1) || (c15_i6 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i6, 1, 256, &c15_k_emlrtBCI, &c15_f_st);
    }

    c15_d5 = (real_T)c15_c;
    if (c15_d5 != (real_T)(int32_T)muDoubleScalarFloor(c15_d5)) {
      emlrtIntegerCheckR2012b(c15_d5, &c15_l_emlrtDCI, &c15_f_st);
    }

    c15_i10 = (int32_T)muDoubleScalarFloor(c15_d5);
    if ((c15_i10 < 1) || (c15_i10 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i10, 1, 256, &c15_l_emlrtBCI, &c15_f_st);
    }

    c15_b_y[c15_i10 - 1] = c15_b_y[c15_i6 - 1] + 1.0;
    c15_b_i++;
  }

  for (c15_c_i = 0; c15_c_i < 256; c15_c_i++) {
    c15_d_i = 1.0 + (real_T)c15_c_i;
    if (c15_d_i != (real_T)(int32_T)muDoubleScalarFloor(c15_d_i)) {
      emlrtIntegerCheckR2012b(c15_d_i, &c15_f_emlrtDCI, &c15_f_st);
    }

    c15_i3 = (int32_T)c15_d_i;
    if ((c15_i3 < 1) || (c15_i3 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i3, 1, 256, &c15_f_emlrtBCI, &c15_f_st);
    }

    if (c15_d_i != (real_T)(int32_T)muDoubleScalarFloor(c15_d_i)) {
      emlrtIntegerCheckR2012b(c15_d_i, &c15_g_emlrtDCI, &c15_f_st);
    }

    c15_i5 = (int32_T)c15_d_i;
    if ((c15_i5 < 1) || (c15_i5 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i5, 1, 256, &c15_g_emlrtBCI, &c15_f_st);
    }

    if (c15_d_i != (real_T)(int32_T)muDoubleScalarFloor(c15_d_i)) {
      emlrtIntegerCheckR2012b(c15_d_i, &c15_h_emlrtDCI, &c15_f_st);
    }

    c15_i7 = (int32_T)c15_d_i;
    if ((c15_i7 < 1) || (c15_i7 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i7, 1, 256, &c15_h_emlrtBCI, &c15_f_st);
    }

    if (c15_d_i != (real_T)(int32_T)muDoubleScalarFloor(c15_d_i)) {
      emlrtIntegerCheckR2012b(c15_d_i, &c15_i_emlrtDCI, &c15_f_st);
    }

    c15_i9 = (int32_T)c15_d_i;
    if ((c15_i9 < 1) || (c15_i9 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i9, 1, 256, &c15_i_emlrtBCI, &c15_f_st);
    }

    if (c15_d_i != (real_T)(int32_T)muDoubleScalarFloor(c15_d_i)) {
      emlrtIntegerCheckR2012b(c15_d_i, &c15_j_emlrtDCI, &c15_f_st);
    }

    c15_i12 = (int32_T)c15_d_i;
    if ((c15_i12 < 1) || (c15_i12 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i12, 1, 256, &c15_j_emlrtBCI, &c15_f_st);
    }

    c15_b_y[c15_i12 - 1] = ((c15_b_y[c15_i3 - 1] + c15_localBins1[c15_i5 - 1]) +
      c15_localBins2[c15_i7 - 1]) + c15_localBins3[c15_i9 - 1];
  }

  c15_d_st.site = &c15_c_emlrtRSI;
  c15_e_st.site = &c15_l_emlrtRSI;
  c15_f_st.site = &c15_n_emlrtRSI;
  c15_p = true;
  c15_k = 0;
  c15_exitg1 = false;
  while ((!c15_exitg1) && (c15_k < 256)) {
    c15_b_k = 1.0 + (real_T)c15_k;
    c15_x = c15_b_y[(int32_T)c15_b_k - 1];
    c15_b_x = c15_x;
    c15_b_b = muDoubleScalarIsInf(c15_b_x);
    c15_b1 = !c15_b_b;
    c15_c_x = c15_x;
    c15_c_b = muDoubleScalarIsNaN(c15_c_x);
    c15_b2 = !c15_c_b;
    c15_d_b = (c15_b1 && c15_b2);
    if (c15_d_b) {
      c15_k++;
    } else {
      c15_p = false;
      c15_exitg1 = true;
    }
  }

  if (c15_p) {
    c15_b = true;
  } else {
    c15_b = false;
  }

  if (!c15_b) {
    c15_c_y = NULL;
    sf_mex_assign(&c15_c_y, sf_mex_create("y", c15_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c15_d_y = NULL;
    sf_mex_assign(&c15_d_y, sf_mex_create("y", c15_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c15_e_y = NULL;
    sf_mex_assign(&c15_e_y, sf_mex_create("y", c15_cv2, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c15_f_st, &c15_emlrtMCI, "error", 0U, 2U, 14, c15_c_y, 14,
                sf_mex_call(&c15_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c15_f_st, NULL, "message", 1U, 2U, 14, c15_d_y, 14, c15_e_y)));
  }

  c15_f_st.site = &c15_n_emlrtRSI;
  c15_b_p = true;
  c15_c_k = 0;
  c15_exitg1 = false;
  while ((!c15_exitg1) && (c15_c_k < 256)) {
    c15_d_k = 1.0 + (real_T)c15_c_k;
    c15_d_x = c15_b_y[(int32_T)c15_d_k - 1];
    c15_c_p = !(c15_d_x < 0.0);
    if (c15_c_p) {
      c15_c_k++;
    } else {
      c15_b_p = false;
      c15_exitg1 = true;
    }
  }

  if (c15_b_p) {
    c15_b3 = true;
  } else {
    c15_b3 = false;
  }

  if (!c15_b3) {
    c15_f_y = NULL;
    sf_mex_assign(&c15_f_y, sf_mex_create("y", c15_cv3, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c15_g_y = NULL;
    sf_mex_assign(&c15_g_y, sf_mex_create("y", c15_cv4, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c15_h_y = NULL;
    sf_mex_assign(&c15_h_y, sf_mex_create("y", c15_cv5, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c15_f_st, &c15_b_emlrtMCI, "error", 0U, 2U, 14, c15_f_y, 14,
                sf_mex_call(&c15_f_st, NULL, "getString", 1U, 1U, 14,
      sf_mex_call(&c15_f_st, NULL, "message", 1U, 2U, 14, c15_g_y, 14, c15_h_y)));
  }

  c15_num_elems = 0.0;
  for (c15_e_k = 0; c15_e_k < 256; c15_e_k++) {
    c15_f_k = 1.0 + (real_T)c15_e_k;
    if (c15_f_k != (real_T)(int32_T)muDoubleScalarFloor(c15_f_k)) {
      emlrtIntegerCheckR2012b(c15_f_k, &c15_u_emlrtDCI, &c15_d_st);
    }

    c15_i13 = (int32_T)c15_f_k;
    if ((c15_i13 < 1) || (c15_i13 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i13, 1, 256, &c15_u_emlrtBCI, &c15_d_st);
    }

    c15_num_elems += c15_b_y[c15_i13 - 1];
  }

  c15_localBins1[0] = c15_b_y[0] / c15_num_elems;
  c15_localBins2[0] = c15_localBins1[0];
  for (c15_g_k = 0; c15_g_k < 255; c15_g_k++) {
    c15_f_k = 2.0 + (real_T)c15_g_k;
    if (c15_f_k != (real_T)(int32_T)muDoubleScalarFloor(c15_f_k)) {
      emlrtIntegerCheckR2012b(c15_f_k, &c15_v_emlrtDCI, &c15_d_st);
    }

    c15_i15 = (int32_T)c15_f_k;
    if ((c15_i15 < 1) || (c15_i15 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i15, 1, 256, &c15_v_emlrtBCI, &c15_d_st);
    }

    c15_d_p = c15_b_y[c15_i15 - 1] / c15_num_elems;
    c15_d9 = c15_f_k - 1.0;
    if (c15_d9 != (real_T)(int32_T)muDoubleScalarFloor(c15_d9)) {
      emlrtIntegerCheckR2012b(c15_d9, &c15_w_emlrtDCI, &c15_d_st);
    }

    c15_i18 = (int32_T)c15_d9;
    if ((c15_i18 < 1) || (c15_i18 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i18, 1, 256, &c15_w_emlrtBCI, &c15_d_st);
    }

    if (c15_f_k != (real_T)(int32_T)muDoubleScalarFloor(c15_f_k)) {
      emlrtIntegerCheckR2012b(c15_f_k, &c15_x_emlrtDCI, &c15_d_st);
    }

    c15_i20 = (int32_T)c15_f_k;
    if ((c15_i20 < 1) || (c15_i20 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i20, 1, 256, &c15_x_emlrtBCI, &c15_d_st);
    }

    c15_localBins1[c15_i20 - 1] = c15_localBins1[c15_i18 - 1] + c15_d_p;
    c15_d11 = c15_f_k - 1.0;
    if (c15_d11 != (real_T)(int32_T)muDoubleScalarFloor(c15_d11)) {
      emlrtIntegerCheckR2012b(c15_d11, &c15_y_emlrtDCI, &c15_d_st);
    }

    c15_i25 = (int32_T)c15_d11;
    if ((c15_i25 < 1) || (c15_i25 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i25, 1, 256, &c15_y_emlrtBCI, &c15_d_st);
    }

    if (c15_f_k != (real_T)(int32_T)muDoubleScalarFloor(c15_f_k)) {
      emlrtIntegerCheckR2012b(c15_f_k, &c15_ab_emlrtDCI, &c15_d_st);
    }

    c15_i29 = (int32_T)c15_f_k;
    if ((c15_i29 < 1) || (c15_i29 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i29, 1, 256, &c15_ab_emlrtBCI, &c15_d_st);
    }

    c15_localBins2[c15_i29 - 1] = c15_localBins2[c15_i25 - 1] + c15_d_p *
      c15_f_k;
  }

  c15_mu_t = c15_localBins2[255];
  c15_maxval = rtMinusInf;
  c15_b_idx = 0.0;
  c15_num_maxval = 0.0;
  for (c15_h_k = 0; c15_h_k < 255; c15_h_k++) {
    c15_f_k = 1.0 + (real_T)c15_h_k;
    c15_e_st.site = &c15_m_emlrtRSI;
    if (c15_f_k != (real_T)(int32_T)muDoubleScalarFloor(c15_f_k)) {
      emlrtIntegerCheckR2012b(c15_f_k, &c15_bb_emlrtDCI, &c15_e_st);
    }

    c15_i17 = (int32_T)c15_f_k;
    if ((c15_i17 < 1) || (c15_i17 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i17, 1, 256, &c15_bb_emlrtBCI, &c15_e_st);
    }

    if (c15_f_k != (real_T)(int32_T)muDoubleScalarFloor(c15_f_k)) {
      emlrtIntegerCheckR2012b(c15_f_k, &c15_cb_emlrtDCI, &c15_e_st);
    }

    c15_i19 = (int32_T)c15_f_k;
    if ((c15_i19 < 1) || (c15_i19 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i19, 1, 256, &c15_cb_emlrtBCI, &c15_e_st);
    }

    c15_g_a = c15_mu_t * c15_localBins1[c15_i17 - 1] - c15_localBins2[c15_i19 -
      1];
    c15_f_st.site = &c15_o_emlrtRSI;
    c15_h_a = c15_g_a;
    c15_i_a = c15_h_a;
    c15_j_a = c15_i_a;
    c15_k_a = c15_j_a;
    c15_g_c = c15_k_a * c15_k_a;
    if (c15_f_k != (real_T)(int32_T)muDoubleScalarFloor(c15_f_k)) {
      emlrtIntegerCheckR2012b(c15_f_k, &c15_db_emlrtDCI, &c15_d_st);
    }

    c15_i28 = (int32_T)c15_f_k;
    if ((c15_i28 < 1) || (c15_i28 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i28, 1, 256, &c15_db_emlrtBCI, &c15_d_st);
    }

    if (c15_f_k != (real_T)(int32_T)muDoubleScalarFloor(c15_f_k)) {
      emlrtIntegerCheckR2012b(c15_f_k, &c15_eb_emlrtDCI, &c15_d_st);
    }

    c15_i30 = (int32_T)c15_f_k;
    if ((c15_i30 < 1) || (c15_i30 > 256)) {
      emlrtDynamicBoundsCheckR2012b(c15_i30, 1, 256, &c15_eb_emlrtBCI, &c15_d_st);
    }

    c15_sigma_b_squared = c15_g_c / (c15_localBins1[c15_i28 - 1] * (1.0 -
      c15_localBins1[c15_i30 - 1]));
    if (c15_sigma_b_squared > c15_maxval) {
      c15_maxval = c15_sigma_b_squared;
      c15_b_idx = c15_f_k;
      c15_num_maxval = 1.0;
    } else if (c15_sigma_b_squared == c15_maxval) {
      c15_b_idx += c15_f_k;
      c15_num_maxval++;
    }
  }

  c15_e_x = c15_maxval;
  c15_f_x = c15_e_x;
  c15_e_b = muDoubleScalarIsInf(c15_f_x);
  c15_b4 = !c15_e_b;
  c15_g_x = c15_e_x;
  c15_f_b = muDoubleScalarIsNaN(c15_g_x);
  c15_b5 = !c15_f_b;
  c15_isfinite_maxval = (c15_b4 && c15_b5);
  if (c15_isfinite_maxval) {
    c15_b_idx /= c15_num_maxval;
    c15_t = (c15_b_idx - 1.0) / 255.0;
  } else {
    c15_t = 0.0;
  }

  c15_T = c15_t;
  for (c15_i22 = 0; c15_i22 < 40000; c15_i22++) {
    (*chartInstance->c15_y)[c15_i22] = ((*chartInstance->c15_u)[c15_i22] > c15_T);
  }

  c15_i23 = 0;
  for (c15_i24 = 0; c15_i24 < 200; c15_i24++) {
    memset(&(*chartInstance->c15_y)[c15_i23 + 130], 0, 70U * sizeof(boolean_T));
    c15_i23 += 200;
  }

  for (c15_i26 = 0; c15_i26 < 40000; c15_i26++) {
    covrtSigUpdateFcn(chartInstance->c15_covrtInstance, 1U, (real_T)
                      (*chartInstance->c15_y)[c15_i26]);
  }
}

static void ext_mode_exec_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c15_update_jit_animation_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c15_do_animation_call_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c15_b_y = NULL;
  const mxArray *c15_c_y = NULL;
  const mxArray *c15_st = NULL;
  c15_st = NULL;
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_createcellmatrix(1, 1), false);
  c15_c_y = NULL;
  sf_mex_assign(&c15_c_y, sf_mex_create("y", *chartInstance->c15_y, 11, 0U, 1,
    0U, 2, 200, 200), false);
  sf_mex_setcell(c15_b_y, 0, c15_c_y);
  sf_mex_assign(&c15_st, c15_b_y, false);
  return c15_st;
}

static void set_sim_state_c15_flightControlSystem
  (SFc15_flightControlSystemInstanceStruct *chartInstance, const mxArray *c15_st)
{
  const mxArray *c15_b_u;
  int32_T c15_i;
  boolean_T c15_bv[40000];
  chartInstance->c15_doneDoubleBufferReInit = true;
  c15_b_u = sf_mex_dup(c15_st);
  c15_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c15_b_u, 0)),
                       "y", c15_bv);
  for (c15_i = 0; c15_i < 40000; c15_i++) {
    (*chartInstance->c15_y)[c15_i] = c15_bv[c15_i];
  }

  sf_mex_destroy(&c15_b_u);
  sf_mex_destroy(&c15_st);
}

const mxArray *sf_c15_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c15_nameCaptureInfo = NULL;
  c15_nameCaptureInfo = NULL;
  sf_mex_assign(&c15_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c15_nameCaptureInfo;
}

static void c15_emlrt_marshallIn(SFc15_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c15_nullptr, const char_T *c15_identifier,
  boolean_T c15_b_y[40000])
{
  emlrtMsgIdentifier c15_thisId;
  c15_thisId.fIdentifier = (const char_T *)c15_identifier;
  c15_thisId.fParent = NULL;
  c15_thisId.bParentIsCell = false;
  c15_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c15_nullptr), &c15_thisId,
    c15_b_y);
  sf_mex_destroy(&c15_nullptr);
}

static void c15_b_emlrt_marshallIn(SFc15_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c15_b_u, const emlrtMsgIdentifier *c15_parentId,
  boolean_T c15_b_y[40000])
{
  int32_T c15_i;
  boolean_T c15_bv[40000];
  (void)chartInstance;
  sf_mex_import(c15_parentId, sf_mex_dup(c15_b_u), c15_bv, 1, 11, 0U, 1, 0U, 2,
                200, 200);
  for (c15_i = 0; c15_i < 40000; c15_i++) {
    c15_b_y[c15_i] = c15_bv[c15_i];
  }

  sf_mex_destroy(&c15_b_u);
}

static void init_dsm_address_info(SFc15_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc15_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c15_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c15_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c15_u = (real_T (*)[40000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c15_y = (boolean_T (*)[40000])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c15_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3352082585U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2766783245U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2765414086U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3278287968U);
}

mxArray *sf_c15_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  return(mxcell3p);
}

mxArray *sf_c15_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c15_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c15_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCWYGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYeAD/aU6RdxAOk3QNLPQkC/AJBVCQ0XEAAALEwMtA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c15_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "spnzBkzehJzis9q7LhJUexF";
}

static void sf_opaque_initialize_c15_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c15_flightControlSystem
    ((SFc15_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c15_flightControlSystem((SFc15_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c15_flightControlSystem(void *chartInstanceVar)
{
  enable_c15_flightControlSystem((SFc15_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c15_flightControlSystem(void *chartInstanceVar)
{
  disable_c15_flightControlSystem((SFc15_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c15_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c15_flightControlSystem((SFc15_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c15_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c15_flightControlSystem
    ((SFc15_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c15_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c15_flightControlSystem((SFc15_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c15_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc15_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c15_flightControlSystem
      ((SFc15_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c15_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c15_flightControlSystem((SFc15_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc15_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c15_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c15_flightControlSystem((SFc15_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c15_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c15_flightControlSystem
      ((SFc15_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c15_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [20] = {
    "eNrdWE2P20QYnqyWFUWlWqSKckAC9cQFibaqAAlKd/NRUu2yEc62iAtM7Nf2KOMZ73zkY/8J/Iz",
    "eOfTGT+AvcOPIkXccJxtlQ9bjSN0FS44zdp5533nmeT8c0ugeEzzu4Nm7R8geXt/Gc4fMjrfKcW",
    "PpnN3fJV+V4947hIQpVaYrYkn8j1BGkIAIbByziSdW2KxHFc10DbuCZvA9aMmtYVL4Oc9EDApEi",
    "BPkUhkvu5plljMx7FgROsv6ZcrCNEil5dEhTkijE8Gn/2Y3t6aHFltMQWg6AJFJlbRJ2uE02cyC",
    "MuNmCuFQ28ybKw0msLlbqj623LCcQ3sCYVdoQ5EFfcV6A0MNNM3EWyFMB3O0zHLOqKjOdUp1ADm",
    "qw8BpHuHniTXIXkW7aG/ABDVSMcrbGW86hVfE9jj6eYyy5t48m8y0YGCThInEsatsBgLXjzqpwF",
    "XclCNQNIET4RmDbnXtSbHBC11Wj8Guk2WtGLTZbFd0LWxhtz1ChnRNu51QNCnn2g/bl/kRjIAX9",
    "lvU0BrYmX0PsNYs6ssXVLko8IwkK9iZhRLblCJi1Xd4tIIqEu53mDwrwFnmJAUR0rxwfTHRVZq0",
    "2sisiWHUOjqqaO8ytisMqJiGUDn3Kco0oMOFrjztRkzTAXdoZMkUq6w8A4jaUKJjK1pjqYbIsW+",
    "SveDKRYIfGqIEWmCgSBhtVPcLym1FnzONGc7J41RjxvKzi1gXP7XAIQ1TiFw9YRyOQbsJdOX8jH",
    "XkAFc7YmbaAh0qlleNJKshwkLiWOpPczgVQyHHoqNkFpQdwQZdAWDWoEpgWTjEsqSmHXS+mtcKz",
    "vpOWXXas4waTgdOG89AYGVxa3WVkIYYVW2BrRs6tA02YOdY2oVm2mA7NW0XMRAV/egHDb9+9L1y",
    "/GgRS13dV7hTFMuwwE7pYFA0e9BnGRQ3Aoo9xWxYHs7uZ+TC7q2dzXZ38FujJo5sift2Cbe7hp9",
    "7S7j9chw+ePxTzFmSuixslOTBFInPLvlxuwLf6/xfxZFLuAue59dPlvCNNXbJ0nWb/Xm6hHt3xc",
    "7uCm6v5OyHX17f//nVy6//7N190v3t/V+3sf+7p57vlOMP5/3ZooKNLiX5unrQuTg/HJ5D+vyc6",
    "S/PPj9Kn5/CpFMr/ub3P8bTYIIr8qUKu1H5ruXG1M7eAdz8Xyz5u3fF/LeW9ETIX99sh7/7dHUf",
    "d6/A7+O36Ypub3qeuK68dJ1+VslbjTeMI28Yt+36fPPxf/33m/IAWfn9/g1eB9mQn3zq8k1b1x/",
    "Erw59VI6fLN6Zmynj0ZquvXyMjXW87un/RN9/e/I37xPajr/yT78fHx0IyqfYps9eg8rbPeX+b1",
    "o8UkD1+neh66hDZE3ft67O316JbzceMxHJsf70wcPHD7epa/8AuwsAfQ==",
    ""
  };

  static char newstr [1409] = "";
  newstr[0] = '\0';
  for (i = 0; i < 20; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c15_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c15_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(583113048U));
  ssSetChecksum1(S,(1029157472U));
  ssSetChecksum2(S,(1041518825U));
  ssSetChecksum3(S,(2585181513U));
}

static void mdlRTW_c15_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c15_flightControlSystem(SimStruct *S)
{
  SFc15_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc15_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc15_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc15_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c15_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c15_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c15_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c15_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c15_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c15_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c15_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c15_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c15_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c15_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c15_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c15_flightControlSystem;
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

  mdl_setup_runtime_resources_c15_flightControlSystem(chartInstance);
}

void c15_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c15_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c15_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c15_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c15_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
