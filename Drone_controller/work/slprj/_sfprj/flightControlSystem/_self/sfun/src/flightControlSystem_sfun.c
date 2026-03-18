/* Include files */

#include "flightControlSystem_sfun.h"
#include "c8_flightControlSystem.h"
#include "c10_flightControlSystem.h"
#include "c11_flightControlSystem.h"
#include "c14_flightControlSystem.h"
#include "c15_flightControlSystem.h"
#include "c18_flightControlSystem.h"
#include "c21_flightControlSystem.h"

/* Forward Declarations */
/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void flightControlSystem_initializer(void)
{
}

void flightControlSystem_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_flightControlSystem_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==8) {
    c8_flightControlSystem_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_flightControlSystem_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_flightControlSystem_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_flightControlSystem_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_flightControlSystem_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_flightControlSystem_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==21) {
    c21_flightControlSystem_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_flightControlSystem_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2677362449U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(422545170U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2681310400U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(450033476U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 8:
        {
          extern void sf_c8_flightControlSystem_get_check_sum(mxArray *plhs[]);
          sf_c8_flightControlSystem_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_flightControlSystem_get_check_sum(mxArray *plhs[]);
          sf_c10_flightControlSystem_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_flightControlSystem_get_check_sum(mxArray *plhs[]);
          sf_c11_flightControlSystem_get_check_sum(plhs);
          break;
        }

       case 14:
        {
          extern void sf_c14_flightControlSystem_get_check_sum(mxArray *plhs[]);
          sf_c14_flightControlSystem_get_check_sum(plhs);
          break;
        }

       case 15:
        {
          extern void sf_c15_flightControlSystem_get_check_sum(mxArray *plhs[]);
          sf_c15_flightControlSystem_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void sf_c18_flightControlSystem_get_check_sum(mxArray *plhs[]);
          sf_c18_flightControlSystem_get_check_sum(plhs);
          break;
        }

       case 21:
        {
          extern void sf_c21_flightControlSystem_get_check_sum(mxArray *plhs[]);
          sf_c21_flightControlSystem_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3649449348U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(909420273U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(65668900U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(22019031U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3898285494U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2815155737U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1967118401U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2941440897U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_flightControlSystem_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  char instanceChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    mxGetString(prhs[2], instanceChksum,sizeof(instanceChksum)/sizeof(char));
    instanceChksum[(sizeof(instanceChksum)/sizeof(char)-1)] = '\0';
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 8:
      {
        if (strcmp(instanceChksum, "sUaCw3KtSlEVK0edJN9DvWD") == 0) {
          extern const mxArray
            *sf_c8_flightControlSystem_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c8_flightControlSystem_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 10:
      {
        if (strcmp(instanceChksum, "svkUiYFcT4aBOokOFX7cWaH") == 0) {
          extern const mxArray
            *sf_c10_flightControlSystem_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c10_flightControlSystem_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 11:
      {
        if (strcmp(instanceChksum, "sXCExy4fIoyezMIKjVkHf8C") == 0) {
          extern const mxArray
            *sf_c11_flightControlSystem_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c11_flightControlSystem_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 14:
      {
        if (strcmp(instanceChksum, "sYRIFa2nIC1qUhrhlf5lwIB") == 0) {
          extern const mxArray
            *sf_c14_flightControlSystem_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c14_flightControlSystem_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 15:
      {
        if (strcmp(instanceChksum, "spnzBkzehJzis9q7LhJUexF") == 0) {
          extern const mxArray
            *sf_c15_flightControlSystem_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c15_flightControlSystem_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 18:
      {
        if (strcmp(instanceChksum, "sB70lU30CzHeGz7mAPWrMUB") == 0) {
          extern const mxArray
            *sf_c18_flightControlSystem_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c18_flightControlSystem_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 21:
      {
        if (strcmp(instanceChksum, "sTqDyhHF2FxvLDy82SOQMtF") == 0) {
          extern const mxArray
            *sf_c21_flightControlSystem_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c21_flightControlSystem_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_flightControlSystem_third_party_uses_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 8:
      {
        if (strcmp(tpChksum, "sUaCw3KtSlEVK0edJN9DvWD") == 0) {
          extern mxArray *sf_c8_flightControlSystem_third_party_uses_info(void);
          plhs[0] = sf_c8_flightControlSystem_third_party_uses_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "svkUiYFcT4aBOokOFX7cWaH") == 0) {
          extern mxArray *sf_c10_flightControlSystem_third_party_uses_info(void);
          plhs[0] = sf_c10_flightControlSystem_third_party_uses_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sXCExy4fIoyezMIKjVkHf8C") == 0) {
          extern mxArray *sf_c11_flightControlSystem_third_party_uses_info(void);
          plhs[0] = sf_c11_flightControlSystem_third_party_uses_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "sYRIFa2nIC1qUhrhlf5lwIB") == 0) {
          extern mxArray *sf_c14_flightControlSystem_third_party_uses_info(void);
          plhs[0] = sf_c14_flightControlSystem_third_party_uses_info();
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "spnzBkzehJzis9q7LhJUexF") == 0) {
          extern mxArray *sf_c15_flightControlSystem_third_party_uses_info(void);
          plhs[0] = sf_c15_flightControlSystem_third_party_uses_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sB70lU30CzHeGz7mAPWrMUB") == 0) {
          extern mxArray *sf_c18_flightControlSystem_third_party_uses_info(void);
          plhs[0] = sf_c18_flightControlSystem_third_party_uses_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sTqDyhHF2FxvLDy82SOQMtF") == 0) {
          extern mxArray *sf_c21_flightControlSystem_third_party_uses_info(void);
          plhs[0] = sf_c21_flightControlSystem_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_flightControlSystem_jit_fallback_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 8:
      {
        if (strcmp(tpChksum, "sUaCw3KtSlEVK0edJN9DvWD") == 0) {
          extern mxArray *sf_c8_flightControlSystem_jit_fallback_info(void);
          plhs[0] = sf_c8_flightControlSystem_jit_fallback_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "svkUiYFcT4aBOokOFX7cWaH") == 0) {
          extern mxArray *sf_c10_flightControlSystem_jit_fallback_info(void);
          plhs[0] = sf_c10_flightControlSystem_jit_fallback_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sXCExy4fIoyezMIKjVkHf8C") == 0) {
          extern mxArray *sf_c11_flightControlSystem_jit_fallback_info(void);
          plhs[0] = sf_c11_flightControlSystem_jit_fallback_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "sYRIFa2nIC1qUhrhlf5lwIB") == 0) {
          extern mxArray *sf_c14_flightControlSystem_jit_fallback_info(void);
          plhs[0] = sf_c14_flightControlSystem_jit_fallback_info();
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "spnzBkzehJzis9q7LhJUexF") == 0) {
          extern mxArray *sf_c15_flightControlSystem_jit_fallback_info(void);
          plhs[0] = sf_c15_flightControlSystem_jit_fallback_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sB70lU30CzHeGz7mAPWrMUB") == 0) {
          extern mxArray *sf_c18_flightControlSystem_jit_fallback_info(void);
          plhs[0] = sf_c18_flightControlSystem_jit_fallback_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sTqDyhHF2FxvLDy82SOQMtF") == 0) {
          extern mxArray *sf_c21_flightControlSystem_jit_fallback_info(void);
          plhs[0] = sf_c21_flightControlSystem_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_flightControlSystem_get_post_codegen_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get_post_codegen_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_post_codegen_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 8:
      {
        if (strcmp(tpChksum, "sUaCw3KtSlEVK0edJN9DvWD") == 0) {
          const char *sf_c8_flightControlSystem_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c8_flightControlSystem_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "svkUiYFcT4aBOokOFX7cWaH") == 0) {
          const char *sf_c10_flightControlSystem_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c10_flightControlSystem_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sXCExy4fIoyezMIKjVkHf8C") == 0) {
          const char *sf_c11_flightControlSystem_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c11_flightControlSystem_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "sYRIFa2nIC1qUhrhlf5lwIB") == 0) {
          const char *sf_c14_flightControlSystem_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c14_flightControlSystem_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "spnzBkzehJzis9q7LhJUexF") == 0) {
          const char *sf_c15_flightControlSystem_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c15_flightControlSystem_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sB70lU30CzHeGz7mAPWrMUB") == 0) {
          const char *sf_c18_flightControlSystem_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c18_flightControlSystem_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sTqDyhHF2FxvLDy82SOQMtF") == 0) {
          const char *sf_c21_flightControlSystem_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c21_flightControlSystem_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_flightControlSystem_updateBuildInfo_args_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 8:
      {
        if (strcmp(tpChksum, "sUaCw3KtSlEVK0edJN9DvWD") == 0) {
          extern mxArray *sf_c8_flightControlSystem_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c8_flightControlSystem_updateBuildInfo_args_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "svkUiYFcT4aBOokOFX7cWaH") == 0) {
          extern mxArray *sf_c10_flightControlSystem_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c10_flightControlSystem_updateBuildInfo_args_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sXCExy4fIoyezMIKjVkHf8C") == 0) {
          extern mxArray *sf_c11_flightControlSystem_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c11_flightControlSystem_updateBuildInfo_args_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "sYRIFa2nIC1qUhrhlf5lwIB") == 0) {
          extern mxArray *sf_c14_flightControlSystem_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c14_flightControlSystem_updateBuildInfo_args_info();
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "spnzBkzehJzis9q7LhJUexF") == 0) {
          extern mxArray *sf_c15_flightControlSystem_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c15_flightControlSystem_updateBuildInfo_args_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sB70lU30CzHeGz7mAPWrMUB") == 0) {
          extern mxArray *sf_c18_flightControlSystem_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c18_flightControlSystem_updateBuildInfo_args_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sTqDyhHF2FxvLDy82SOQMtF") == 0) {
          extern mxArray *sf_c21_flightControlSystem_updateBuildInfo_args_info
            (void);
          plhs[0] = sf_c21_flightControlSystem_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_flightControlSystem_optimization_info(void);
mxArray* load_flightControlSystem_optimization_info(boolean_T isRtwGen,
  boolean_T isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_flightControlSystem_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "flightControlSystem", "flightControlSystem");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_flightControlSystem_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
