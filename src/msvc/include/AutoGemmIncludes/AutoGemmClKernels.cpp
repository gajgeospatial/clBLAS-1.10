/*******************************************************************************
 * This file was auto-generated using the AutoGemm.py python script.
 * DO NOT modify this file! Instead, make changes to scripts in
 *   clBLAS/src/library/blas/AutoGemm/ then re-generate files
 *   (otherwise local changes will be lost after re-generation).
 ******************************************************************************/

#if defined( __APPLE__ ) || defined( __MACOSX )
#include <OpenCL/cl.h>
#else
#include <CL/cl.h>
#endif

cl_kernel sgemm_Col_NN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_MX096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B0_ML096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_MX096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NN_B1_ML096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_MX096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B0_ML096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_MX096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_NT_B1_ML096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_MX096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B0_ML096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_MX096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TN_B1_ML096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_MX096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B0_ML096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML016_NX016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML016_NL016_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML032_NX032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML032_NL032_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML048_NX048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML048_NL048_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML064_NX064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML064_NL064_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML080_NX080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML080_NL080_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML096_NX096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_MX096_NL096_KX16_clKernel = NULL;
cl_kernel sgemm_Col_TT_B1_ML096_NL096_KX16_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NN_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_NT_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TN_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel dgemm_Col_TT_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NN_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NT_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_NC_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TN_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TT_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_TC_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CN_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CT_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B0_ML096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML080_NX080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML080_NL080_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML080_NX080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML080_NL080_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML096_NX096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML096_NL096_KX01_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML096_NX096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_MX096_NL096_KX08_clKernel = NULL;
cl_kernel cgemm_Col_CC_B1_ML096_NL096_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_NC_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_TC_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CN_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CT_B1_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B0_ML064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML016_NX016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML016_NL016_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML016_NX016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML016_NL016_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML032_NX032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML032_NL032_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML032_NX032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML032_NL032_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML048_NX048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML048_NL048_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML048_NX048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML048_NL048_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML064_NX064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML064_NL064_KX01_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML064_NX064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_MX064_NL064_KX08_clKernel = NULL;
cl_kernel zgemm_Col_CC_B1_ML064_NL064_KX08_clKernel = NULL;

extern "C" {
    void initAutoGemmClKernels(void);
}

void initAutoGemmClKernels(void) {
    if(sgemm_Col_NN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX016_NX016_KX01_clKernel);
        sgemm_Col_NN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML016_NX016_KX01_clKernel);
        sgemm_Col_NN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX016_NL016_KX01_clKernel);
        sgemm_Col_NN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML016_NL016_KX01_clKernel);
        sgemm_Col_NN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX016_NX016_KX08_clKernel);
        sgemm_Col_NN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML016_NX016_KX08_clKernel);
        sgemm_Col_NN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX016_NL016_KX08_clKernel);
        sgemm_Col_NN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML016_NL016_KX08_clKernel);
        sgemm_Col_NN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX016_NX016_KX16_clKernel);
        sgemm_Col_NN_B0_MX016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML016_NX016_KX16_clKernel);
        sgemm_Col_NN_B0_ML016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX016_NL016_KX16_clKernel);
        sgemm_Col_NN_B0_MX016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML016_NL016_KX16_clKernel);
        sgemm_Col_NN_B0_ML016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX032_NX032_KX01_clKernel);
        sgemm_Col_NN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML032_NX032_KX01_clKernel);
        sgemm_Col_NN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX032_NL032_KX01_clKernel);
        sgemm_Col_NN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML032_NL032_KX01_clKernel);
        sgemm_Col_NN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX032_NX032_KX08_clKernel);
        sgemm_Col_NN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML032_NX032_KX08_clKernel);
        sgemm_Col_NN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX032_NL032_KX08_clKernel);
        sgemm_Col_NN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML032_NL032_KX08_clKernel);
        sgemm_Col_NN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX032_NX032_KX16_clKernel);
        sgemm_Col_NN_B0_MX032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML032_NX032_KX16_clKernel);
        sgemm_Col_NN_B0_ML032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX032_NL032_KX16_clKernel);
        sgemm_Col_NN_B0_MX032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML032_NL032_KX16_clKernel);
        sgemm_Col_NN_B0_ML032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX048_NX048_KX01_clKernel);
        sgemm_Col_NN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML048_NX048_KX01_clKernel);
        sgemm_Col_NN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX048_NL048_KX01_clKernel);
        sgemm_Col_NN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML048_NL048_KX01_clKernel);
        sgemm_Col_NN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX048_NX048_KX08_clKernel);
        sgemm_Col_NN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML048_NX048_KX08_clKernel);
        sgemm_Col_NN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX048_NL048_KX08_clKernel);
        sgemm_Col_NN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML048_NL048_KX08_clKernel);
        sgemm_Col_NN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX048_NX048_KX16_clKernel);
        sgemm_Col_NN_B0_MX048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML048_NX048_KX16_clKernel);
        sgemm_Col_NN_B0_ML048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX048_NL048_KX16_clKernel);
        sgemm_Col_NN_B0_MX048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML048_NL048_KX16_clKernel);
        sgemm_Col_NN_B0_ML048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX064_NX064_KX01_clKernel);
        sgemm_Col_NN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML064_NX064_KX01_clKernel);
        sgemm_Col_NN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX064_NL064_KX01_clKernel);
        sgemm_Col_NN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML064_NL064_KX01_clKernel);
        sgemm_Col_NN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX064_NX064_KX08_clKernel);
        sgemm_Col_NN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML064_NX064_KX08_clKernel);
        sgemm_Col_NN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX064_NL064_KX08_clKernel);
        sgemm_Col_NN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML064_NL064_KX08_clKernel);
        sgemm_Col_NN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX064_NX064_KX16_clKernel);
        sgemm_Col_NN_B0_MX064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML064_NX064_KX16_clKernel);
        sgemm_Col_NN_B0_ML064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX064_NL064_KX16_clKernel);
        sgemm_Col_NN_B0_MX064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML064_NL064_KX16_clKernel);
        sgemm_Col_NN_B0_ML064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX080_NX080_KX01_clKernel);
        sgemm_Col_NN_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML080_NX080_KX01_clKernel);
        sgemm_Col_NN_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX080_NL080_KX01_clKernel);
        sgemm_Col_NN_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML080_NL080_KX01_clKernel);
        sgemm_Col_NN_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX080_NX080_KX08_clKernel);
        sgemm_Col_NN_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML080_NX080_KX08_clKernel);
        sgemm_Col_NN_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX080_NL080_KX08_clKernel);
        sgemm_Col_NN_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML080_NL080_KX08_clKernel);
        sgemm_Col_NN_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX080_NX080_KX16_clKernel);
        sgemm_Col_NN_B0_MX080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML080_NX080_KX16_clKernel);
        sgemm_Col_NN_B0_ML080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX080_NL080_KX16_clKernel);
        sgemm_Col_NN_B0_MX080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML080_NL080_KX16_clKernel);
        sgemm_Col_NN_B0_ML080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX096_NX096_KX01_clKernel);
        sgemm_Col_NN_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML096_NX096_KX01_clKernel);
        sgemm_Col_NN_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX096_NL096_KX01_clKernel);
        sgemm_Col_NN_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML096_NL096_KX01_clKernel);
        sgemm_Col_NN_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX096_NX096_KX08_clKernel);
        sgemm_Col_NN_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML096_NX096_KX08_clKernel);
        sgemm_Col_NN_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX096_NL096_KX08_clKernel);
        sgemm_Col_NN_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML096_NL096_KX08_clKernel);
        sgemm_Col_NN_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX096_NX096_KX16_clKernel);
        sgemm_Col_NN_B0_MX096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML096_NX096_KX16_clKernel);
        sgemm_Col_NN_B0_ML096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_MX096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_MX096_NL096_KX16_clKernel);
        sgemm_Col_NN_B0_MX096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B0_ML096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B0_ML096_NL096_KX16_clKernel);
        sgemm_Col_NN_B0_ML096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX016_NX016_KX01_clKernel);
        sgemm_Col_NN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML016_NX016_KX01_clKernel);
        sgemm_Col_NN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX016_NL016_KX01_clKernel);
        sgemm_Col_NN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML016_NL016_KX01_clKernel);
        sgemm_Col_NN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX016_NX016_KX08_clKernel);
        sgemm_Col_NN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML016_NX016_KX08_clKernel);
        sgemm_Col_NN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX016_NL016_KX08_clKernel);
        sgemm_Col_NN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML016_NL016_KX08_clKernel);
        sgemm_Col_NN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX016_NX016_KX16_clKernel);
        sgemm_Col_NN_B1_MX016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML016_NX016_KX16_clKernel);
        sgemm_Col_NN_B1_ML016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX016_NL016_KX16_clKernel);
        sgemm_Col_NN_B1_MX016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML016_NL016_KX16_clKernel);
        sgemm_Col_NN_B1_ML016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX032_NX032_KX01_clKernel);
        sgemm_Col_NN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML032_NX032_KX01_clKernel);
        sgemm_Col_NN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX032_NL032_KX01_clKernel);
        sgemm_Col_NN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML032_NL032_KX01_clKernel);
        sgemm_Col_NN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX032_NX032_KX08_clKernel);
        sgemm_Col_NN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML032_NX032_KX08_clKernel);
        sgemm_Col_NN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX032_NL032_KX08_clKernel);
        sgemm_Col_NN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML032_NL032_KX08_clKernel);
        sgemm_Col_NN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX032_NX032_KX16_clKernel);
        sgemm_Col_NN_B1_MX032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML032_NX032_KX16_clKernel);
        sgemm_Col_NN_B1_ML032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX032_NL032_KX16_clKernel);
        sgemm_Col_NN_B1_MX032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML032_NL032_KX16_clKernel);
        sgemm_Col_NN_B1_ML032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX048_NX048_KX01_clKernel);
        sgemm_Col_NN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML048_NX048_KX01_clKernel);
        sgemm_Col_NN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX048_NL048_KX01_clKernel);
        sgemm_Col_NN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML048_NL048_KX01_clKernel);
        sgemm_Col_NN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX048_NX048_KX08_clKernel);
        sgemm_Col_NN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML048_NX048_KX08_clKernel);
        sgemm_Col_NN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX048_NL048_KX08_clKernel);
        sgemm_Col_NN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML048_NL048_KX08_clKernel);
        sgemm_Col_NN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX048_NX048_KX16_clKernel);
        sgemm_Col_NN_B1_MX048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML048_NX048_KX16_clKernel);
        sgemm_Col_NN_B1_ML048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX048_NL048_KX16_clKernel);
        sgemm_Col_NN_B1_MX048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML048_NL048_KX16_clKernel);
        sgemm_Col_NN_B1_ML048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX064_NX064_KX01_clKernel);
        sgemm_Col_NN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML064_NX064_KX01_clKernel);
        sgemm_Col_NN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX064_NL064_KX01_clKernel);
        sgemm_Col_NN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML064_NL064_KX01_clKernel);
        sgemm_Col_NN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX064_NX064_KX08_clKernel);
        sgemm_Col_NN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML064_NX064_KX08_clKernel);
        sgemm_Col_NN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX064_NL064_KX08_clKernel);
        sgemm_Col_NN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML064_NL064_KX08_clKernel);
        sgemm_Col_NN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX064_NX064_KX16_clKernel);
        sgemm_Col_NN_B1_MX064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML064_NX064_KX16_clKernel);
        sgemm_Col_NN_B1_ML064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX064_NL064_KX16_clKernel);
        sgemm_Col_NN_B1_MX064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML064_NL064_KX16_clKernel);
        sgemm_Col_NN_B1_ML064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX080_NX080_KX01_clKernel);
        sgemm_Col_NN_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML080_NX080_KX01_clKernel);
        sgemm_Col_NN_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX080_NL080_KX01_clKernel);
        sgemm_Col_NN_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML080_NL080_KX01_clKernel);
        sgemm_Col_NN_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX080_NX080_KX08_clKernel);
        sgemm_Col_NN_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML080_NX080_KX08_clKernel);
        sgemm_Col_NN_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX080_NL080_KX08_clKernel);
        sgemm_Col_NN_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML080_NL080_KX08_clKernel);
        sgemm_Col_NN_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX080_NX080_KX16_clKernel);
        sgemm_Col_NN_B1_MX080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML080_NX080_KX16_clKernel);
        sgemm_Col_NN_B1_ML080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX080_NL080_KX16_clKernel);
        sgemm_Col_NN_B1_MX080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML080_NL080_KX16_clKernel);
        sgemm_Col_NN_B1_ML080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX096_NX096_KX01_clKernel);
        sgemm_Col_NN_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML096_NX096_KX01_clKernel);
        sgemm_Col_NN_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX096_NL096_KX01_clKernel);
        sgemm_Col_NN_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML096_NL096_KX01_clKernel);
        sgemm_Col_NN_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX096_NX096_KX08_clKernel);
        sgemm_Col_NN_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML096_NX096_KX08_clKernel);
        sgemm_Col_NN_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX096_NL096_KX08_clKernel);
        sgemm_Col_NN_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML096_NL096_KX08_clKernel);
        sgemm_Col_NN_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX096_NX096_KX16_clKernel);
        sgemm_Col_NN_B1_MX096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML096_NX096_KX16_clKernel);
        sgemm_Col_NN_B1_ML096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_MX096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_MX096_NL096_KX16_clKernel);
        sgemm_Col_NN_B1_MX096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NN_B1_ML096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NN_B1_ML096_NL096_KX16_clKernel);
        sgemm_Col_NN_B1_ML096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX016_NX016_KX01_clKernel);
        sgemm_Col_NT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML016_NX016_KX01_clKernel);
        sgemm_Col_NT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX016_NL016_KX01_clKernel);
        sgemm_Col_NT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML016_NL016_KX01_clKernel);
        sgemm_Col_NT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX016_NX016_KX08_clKernel);
        sgemm_Col_NT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML016_NX016_KX08_clKernel);
        sgemm_Col_NT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX016_NL016_KX08_clKernel);
        sgemm_Col_NT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML016_NL016_KX08_clKernel);
        sgemm_Col_NT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX016_NX016_KX16_clKernel);
        sgemm_Col_NT_B0_MX016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML016_NX016_KX16_clKernel);
        sgemm_Col_NT_B0_ML016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX016_NL016_KX16_clKernel);
        sgemm_Col_NT_B0_MX016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML016_NL016_KX16_clKernel);
        sgemm_Col_NT_B0_ML016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX032_NX032_KX01_clKernel);
        sgemm_Col_NT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML032_NX032_KX01_clKernel);
        sgemm_Col_NT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX032_NL032_KX01_clKernel);
        sgemm_Col_NT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML032_NL032_KX01_clKernel);
        sgemm_Col_NT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX032_NX032_KX08_clKernel);
        sgemm_Col_NT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML032_NX032_KX08_clKernel);
        sgemm_Col_NT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX032_NL032_KX08_clKernel);
        sgemm_Col_NT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML032_NL032_KX08_clKernel);
        sgemm_Col_NT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX032_NX032_KX16_clKernel);
        sgemm_Col_NT_B0_MX032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML032_NX032_KX16_clKernel);
        sgemm_Col_NT_B0_ML032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX032_NL032_KX16_clKernel);
        sgemm_Col_NT_B0_MX032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML032_NL032_KX16_clKernel);
        sgemm_Col_NT_B0_ML032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX048_NX048_KX01_clKernel);
        sgemm_Col_NT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML048_NX048_KX01_clKernel);
        sgemm_Col_NT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX048_NL048_KX01_clKernel);
        sgemm_Col_NT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML048_NL048_KX01_clKernel);
        sgemm_Col_NT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX048_NX048_KX08_clKernel);
        sgemm_Col_NT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML048_NX048_KX08_clKernel);
        sgemm_Col_NT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX048_NL048_KX08_clKernel);
        sgemm_Col_NT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML048_NL048_KX08_clKernel);
        sgemm_Col_NT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX048_NX048_KX16_clKernel);
        sgemm_Col_NT_B0_MX048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML048_NX048_KX16_clKernel);
        sgemm_Col_NT_B0_ML048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX048_NL048_KX16_clKernel);
        sgemm_Col_NT_B0_MX048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML048_NL048_KX16_clKernel);
        sgemm_Col_NT_B0_ML048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX064_NX064_KX01_clKernel);
        sgemm_Col_NT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML064_NX064_KX01_clKernel);
        sgemm_Col_NT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX064_NL064_KX01_clKernel);
        sgemm_Col_NT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML064_NL064_KX01_clKernel);
        sgemm_Col_NT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX064_NX064_KX08_clKernel);
        sgemm_Col_NT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML064_NX064_KX08_clKernel);
        sgemm_Col_NT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX064_NL064_KX08_clKernel);
        sgemm_Col_NT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML064_NL064_KX08_clKernel);
        sgemm_Col_NT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX064_NX064_KX16_clKernel);
        sgemm_Col_NT_B0_MX064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML064_NX064_KX16_clKernel);
        sgemm_Col_NT_B0_ML064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX064_NL064_KX16_clKernel);
        sgemm_Col_NT_B0_MX064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML064_NL064_KX16_clKernel);
        sgemm_Col_NT_B0_ML064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX080_NX080_KX01_clKernel);
        sgemm_Col_NT_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML080_NX080_KX01_clKernel);
        sgemm_Col_NT_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX080_NL080_KX01_clKernel);
        sgemm_Col_NT_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML080_NL080_KX01_clKernel);
        sgemm_Col_NT_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX080_NX080_KX08_clKernel);
        sgemm_Col_NT_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML080_NX080_KX08_clKernel);
        sgemm_Col_NT_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX080_NL080_KX08_clKernel);
        sgemm_Col_NT_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML080_NL080_KX08_clKernel);
        sgemm_Col_NT_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX080_NX080_KX16_clKernel);
        sgemm_Col_NT_B0_MX080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML080_NX080_KX16_clKernel);
        sgemm_Col_NT_B0_ML080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX080_NL080_KX16_clKernel);
        sgemm_Col_NT_B0_MX080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML080_NL080_KX16_clKernel);
        sgemm_Col_NT_B0_ML080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX096_NX096_KX01_clKernel);
        sgemm_Col_NT_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML096_NX096_KX01_clKernel);
        sgemm_Col_NT_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX096_NL096_KX01_clKernel);
        sgemm_Col_NT_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML096_NL096_KX01_clKernel);
        sgemm_Col_NT_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX096_NX096_KX08_clKernel);
        sgemm_Col_NT_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML096_NX096_KX08_clKernel);
        sgemm_Col_NT_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX096_NL096_KX08_clKernel);
        sgemm_Col_NT_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML096_NL096_KX08_clKernel);
        sgemm_Col_NT_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX096_NX096_KX16_clKernel);
        sgemm_Col_NT_B0_MX096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML096_NX096_KX16_clKernel);
        sgemm_Col_NT_B0_ML096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_MX096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_MX096_NL096_KX16_clKernel);
        sgemm_Col_NT_B0_MX096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B0_ML096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B0_ML096_NL096_KX16_clKernel);
        sgemm_Col_NT_B0_ML096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX016_NX016_KX01_clKernel);
        sgemm_Col_NT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML016_NX016_KX01_clKernel);
        sgemm_Col_NT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX016_NL016_KX01_clKernel);
        sgemm_Col_NT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML016_NL016_KX01_clKernel);
        sgemm_Col_NT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX016_NX016_KX08_clKernel);
        sgemm_Col_NT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML016_NX016_KX08_clKernel);
        sgemm_Col_NT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX016_NL016_KX08_clKernel);
        sgemm_Col_NT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML016_NL016_KX08_clKernel);
        sgemm_Col_NT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX016_NX016_KX16_clKernel);
        sgemm_Col_NT_B1_MX016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML016_NX016_KX16_clKernel);
        sgemm_Col_NT_B1_ML016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX016_NL016_KX16_clKernel);
        sgemm_Col_NT_B1_MX016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML016_NL016_KX16_clKernel);
        sgemm_Col_NT_B1_ML016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX032_NX032_KX01_clKernel);
        sgemm_Col_NT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML032_NX032_KX01_clKernel);
        sgemm_Col_NT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX032_NL032_KX01_clKernel);
        sgemm_Col_NT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML032_NL032_KX01_clKernel);
        sgemm_Col_NT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX032_NX032_KX08_clKernel);
        sgemm_Col_NT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML032_NX032_KX08_clKernel);
        sgemm_Col_NT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX032_NL032_KX08_clKernel);
        sgemm_Col_NT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML032_NL032_KX08_clKernel);
        sgemm_Col_NT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX032_NX032_KX16_clKernel);
        sgemm_Col_NT_B1_MX032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML032_NX032_KX16_clKernel);
        sgemm_Col_NT_B1_ML032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX032_NL032_KX16_clKernel);
        sgemm_Col_NT_B1_MX032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML032_NL032_KX16_clKernel);
        sgemm_Col_NT_B1_ML032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX048_NX048_KX01_clKernel);
        sgemm_Col_NT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML048_NX048_KX01_clKernel);
        sgemm_Col_NT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX048_NL048_KX01_clKernel);
        sgemm_Col_NT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML048_NL048_KX01_clKernel);
        sgemm_Col_NT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX048_NX048_KX08_clKernel);
        sgemm_Col_NT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML048_NX048_KX08_clKernel);
        sgemm_Col_NT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX048_NL048_KX08_clKernel);
        sgemm_Col_NT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML048_NL048_KX08_clKernel);
        sgemm_Col_NT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX048_NX048_KX16_clKernel);
        sgemm_Col_NT_B1_MX048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML048_NX048_KX16_clKernel);
        sgemm_Col_NT_B1_ML048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX048_NL048_KX16_clKernel);
        sgemm_Col_NT_B1_MX048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML048_NL048_KX16_clKernel);
        sgemm_Col_NT_B1_ML048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX064_NX064_KX01_clKernel);
        sgemm_Col_NT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML064_NX064_KX01_clKernel);
        sgemm_Col_NT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX064_NL064_KX01_clKernel);
        sgemm_Col_NT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML064_NL064_KX01_clKernel);
        sgemm_Col_NT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX064_NX064_KX08_clKernel);
        sgemm_Col_NT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML064_NX064_KX08_clKernel);
        sgemm_Col_NT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX064_NL064_KX08_clKernel);
        sgemm_Col_NT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML064_NL064_KX08_clKernel);
        sgemm_Col_NT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX064_NX064_KX16_clKernel);
        sgemm_Col_NT_B1_MX064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML064_NX064_KX16_clKernel);
        sgemm_Col_NT_B1_ML064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX064_NL064_KX16_clKernel);
        sgemm_Col_NT_B1_MX064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML064_NL064_KX16_clKernel);
        sgemm_Col_NT_B1_ML064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX080_NX080_KX01_clKernel);
        sgemm_Col_NT_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML080_NX080_KX01_clKernel);
        sgemm_Col_NT_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX080_NL080_KX01_clKernel);
        sgemm_Col_NT_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML080_NL080_KX01_clKernel);
        sgemm_Col_NT_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX080_NX080_KX08_clKernel);
        sgemm_Col_NT_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML080_NX080_KX08_clKernel);
        sgemm_Col_NT_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX080_NL080_KX08_clKernel);
        sgemm_Col_NT_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML080_NL080_KX08_clKernel);
        sgemm_Col_NT_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX080_NX080_KX16_clKernel);
        sgemm_Col_NT_B1_MX080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML080_NX080_KX16_clKernel);
        sgemm_Col_NT_B1_ML080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX080_NL080_KX16_clKernel);
        sgemm_Col_NT_B1_MX080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML080_NL080_KX16_clKernel);
        sgemm_Col_NT_B1_ML080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX096_NX096_KX01_clKernel);
        sgemm_Col_NT_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML096_NX096_KX01_clKernel);
        sgemm_Col_NT_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX096_NL096_KX01_clKernel);
        sgemm_Col_NT_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML096_NL096_KX01_clKernel);
        sgemm_Col_NT_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX096_NX096_KX08_clKernel);
        sgemm_Col_NT_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML096_NX096_KX08_clKernel);
        sgemm_Col_NT_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX096_NL096_KX08_clKernel);
        sgemm_Col_NT_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML096_NL096_KX08_clKernel);
        sgemm_Col_NT_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX096_NX096_KX16_clKernel);
        sgemm_Col_NT_B1_MX096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML096_NX096_KX16_clKernel);
        sgemm_Col_NT_B1_ML096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_MX096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_MX096_NL096_KX16_clKernel);
        sgemm_Col_NT_B1_MX096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_NT_B1_ML096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_NT_B1_ML096_NL096_KX16_clKernel);
        sgemm_Col_NT_B1_ML096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX016_NX016_KX01_clKernel);
        sgemm_Col_TN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML016_NX016_KX01_clKernel);
        sgemm_Col_TN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX016_NL016_KX01_clKernel);
        sgemm_Col_TN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML016_NL016_KX01_clKernel);
        sgemm_Col_TN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX016_NX016_KX08_clKernel);
        sgemm_Col_TN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML016_NX016_KX08_clKernel);
        sgemm_Col_TN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX016_NL016_KX08_clKernel);
        sgemm_Col_TN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML016_NL016_KX08_clKernel);
        sgemm_Col_TN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX016_NX016_KX16_clKernel);
        sgemm_Col_TN_B0_MX016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML016_NX016_KX16_clKernel);
        sgemm_Col_TN_B0_ML016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX016_NL016_KX16_clKernel);
        sgemm_Col_TN_B0_MX016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML016_NL016_KX16_clKernel);
        sgemm_Col_TN_B0_ML016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX032_NX032_KX01_clKernel);
        sgemm_Col_TN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML032_NX032_KX01_clKernel);
        sgemm_Col_TN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX032_NL032_KX01_clKernel);
        sgemm_Col_TN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML032_NL032_KX01_clKernel);
        sgemm_Col_TN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX032_NX032_KX08_clKernel);
        sgemm_Col_TN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML032_NX032_KX08_clKernel);
        sgemm_Col_TN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX032_NL032_KX08_clKernel);
        sgemm_Col_TN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML032_NL032_KX08_clKernel);
        sgemm_Col_TN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX032_NX032_KX16_clKernel);
        sgemm_Col_TN_B0_MX032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML032_NX032_KX16_clKernel);
        sgemm_Col_TN_B0_ML032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX032_NL032_KX16_clKernel);
        sgemm_Col_TN_B0_MX032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML032_NL032_KX16_clKernel);
        sgemm_Col_TN_B0_ML032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX048_NX048_KX01_clKernel);
        sgemm_Col_TN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML048_NX048_KX01_clKernel);
        sgemm_Col_TN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX048_NL048_KX01_clKernel);
        sgemm_Col_TN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML048_NL048_KX01_clKernel);
        sgemm_Col_TN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX048_NX048_KX08_clKernel);
        sgemm_Col_TN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML048_NX048_KX08_clKernel);
        sgemm_Col_TN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX048_NL048_KX08_clKernel);
        sgemm_Col_TN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML048_NL048_KX08_clKernel);
        sgemm_Col_TN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX048_NX048_KX16_clKernel);
        sgemm_Col_TN_B0_MX048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML048_NX048_KX16_clKernel);
        sgemm_Col_TN_B0_ML048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX048_NL048_KX16_clKernel);
        sgemm_Col_TN_B0_MX048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML048_NL048_KX16_clKernel);
        sgemm_Col_TN_B0_ML048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX064_NX064_KX01_clKernel);
        sgemm_Col_TN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML064_NX064_KX01_clKernel);
        sgemm_Col_TN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX064_NL064_KX01_clKernel);
        sgemm_Col_TN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML064_NL064_KX01_clKernel);
        sgemm_Col_TN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX064_NX064_KX08_clKernel);
        sgemm_Col_TN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML064_NX064_KX08_clKernel);
        sgemm_Col_TN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX064_NL064_KX08_clKernel);
        sgemm_Col_TN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML064_NL064_KX08_clKernel);
        sgemm_Col_TN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX064_NX064_KX16_clKernel);
        sgemm_Col_TN_B0_MX064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML064_NX064_KX16_clKernel);
        sgemm_Col_TN_B0_ML064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX064_NL064_KX16_clKernel);
        sgemm_Col_TN_B0_MX064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML064_NL064_KX16_clKernel);
        sgemm_Col_TN_B0_ML064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX080_NX080_KX01_clKernel);
        sgemm_Col_TN_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML080_NX080_KX01_clKernel);
        sgemm_Col_TN_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX080_NL080_KX01_clKernel);
        sgemm_Col_TN_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML080_NL080_KX01_clKernel);
        sgemm_Col_TN_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX080_NX080_KX08_clKernel);
        sgemm_Col_TN_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML080_NX080_KX08_clKernel);
        sgemm_Col_TN_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX080_NL080_KX08_clKernel);
        sgemm_Col_TN_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML080_NL080_KX08_clKernel);
        sgemm_Col_TN_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX080_NX080_KX16_clKernel);
        sgemm_Col_TN_B0_MX080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML080_NX080_KX16_clKernel);
        sgemm_Col_TN_B0_ML080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX080_NL080_KX16_clKernel);
        sgemm_Col_TN_B0_MX080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML080_NL080_KX16_clKernel);
        sgemm_Col_TN_B0_ML080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX096_NX096_KX01_clKernel);
        sgemm_Col_TN_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML096_NX096_KX01_clKernel);
        sgemm_Col_TN_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX096_NL096_KX01_clKernel);
        sgemm_Col_TN_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML096_NL096_KX01_clKernel);
        sgemm_Col_TN_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX096_NX096_KX08_clKernel);
        sgemm_Col_TN_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML096_NX096_KX08_clKernel);
        sgemm_Col_TN_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX096_NL096_KX08_clKernel);
        sgemm_Col_TN_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML096_NL096_KX08_clKernel);
        sgemm_Col_TN_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX096_NX096_KX16_clKernel);
        sgemm_Col_TN_B0_MX096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML096_NX096_KX16_clKernel);
        sgemm_Col_TN_B0_ML096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_MX096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_MX096_NL096_KX16_clKernel);
        sgemm_Col_TN_B0_MX096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B0_ML096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B0_ML096_NL096_KX16_clKernel);
        sgemm_Col_TN_B0_ML096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX016_NX016_KX01_clKernel);
        sgemm_Col_TN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML016_NX016_KX01_clKernel);
        sgemm_Col_TN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX016_NL016_KX01_clKernel);
        sgemm_Col_TN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML016_NL016_KX01_clKernel);
        sgemm_Col_TN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX016_NX016_KX08_clKernel);
        sgemm_Col_TN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML016_NX016_KX08_clKernel);
        sgemm_Col_TN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX016_NL016_KX08_clKernel);
        sgemm_Col_TN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML016_NL016_KX08_clKernel);
        sgemm_Col_TN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX016_NX016_KX16_clKernel);
        sgemm_Col_TN_B1_MX016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML016_NX016_KX16_clKernel);
        sgemm_Col_TN_B1_ML016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX016_NL016_KX16_clKernel);
        sgemm_Col_TN_B1_MX016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML016_NL016_KX16_clKernel);
        sgemm_Col_TN_B1_ML016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX032_NX032_KX01_clKernel);
        sgemm_Col_TN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML032_NX032_KX01_clKernel);
        sgemm_Col_TN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX032_NL032_KX01_clKernel);
        sgemm_Col_TN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML032_NL032_KX01_clKernel);
        sgemm_Col_TN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX032_NX032_KX08_clKernel);
        sgemm_Col_TN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML032_NX032_KX08_clKernel);
        sgemm_Col_TN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX032_NL032_KX08_clKernel);
        sgemm_Col_TN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML032_NL032_KX08_clKernel);
        sgemm_Col_TN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX032_NX032_KX16_clKernel);
        sgemm_Col_TN_B1_MX032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML032_NX032_KX16_clKernel);
        sgemm_Col_TN_B1_ML032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX032_NL032_KX16_clKernel);
        sgemm_Col_TN_B1_MX032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML032_NL032_KX16_clKernel);
        sgemm_Col_TN_B1_ML032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX048_NX048_KX01_clKernel);
        sgemm_Col_TN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML048_NX048_KX01_clKernel);
        sgemm_Col_TN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX048_NL048_KX01_clKernel);
        sgemm_Col_TN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML048_NL048_KX01_clKernel);
        sgemm_Col_TN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX048_NX048_KX08_clKernel);
        sgemm_Col_TN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML048_NX048_KX08_clKernel);
        sgemm_Col_TN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX048_NL048_KX08_clKernel);
        sgemm_Col_TN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML048_NL048_KX08_clKernel);
        sgemm_Col_TN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX048_NX048_KX16_clKernel);
        sgemm_Col_TN_B1_MX048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML048_NX048_KX16_clKernel);
        sgemm_Col_TN_B1_ML048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX048_NL048_KX16_clKernel);
        sgemm_Col_TN_B1_MX048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML048_NL048_KX16_clKernel);
        sgemm_Col_TN_B1_ML048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX064_NX064_KX01_clKernel);
        sgemm_Col_TN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML064_NX064_KX01_clKernel);
        sgemm_Col_TN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX064_NL064_KX01_clKernel);
        sgemm_Col_TN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML064_NL064_KX01_clKernel);
        sgemm_Col_TN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX064_NX064_KX08_clKernel);
        sgemm_Col_TN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML064_NX064_KX08_clKernel);
        sgemm_Col_TN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX064_NL064_KX08_clKernel);
        sgemm_Col_TN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML064_NL064_KX08_clKernel);
        sgemm_Col_TN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX064_NX064_KX16_clKernel);
        sgemm_Col_TN_B1_MX064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML064_NX064_KX16_clKernel);
        sgemm_Col_TN_B1_ML064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX064_NL064_KX16_clKernel);
        sgemm_Col_TN_B1_MX064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML064_NL064_KX16_clKernel);
        sgemm_Col_TN_B1_ML064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX080_NX080_KX01_clKernel);
        sgemm_Col_TN_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML080_NX080_KX01_clKernel);
        sgemm_Col_TN_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX080_NL080_KX01_clKernel);
        sgemm_Col_TN_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML080_NL080_KX01_clKernel);
        sgemm_Col_TN_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX080_NX080_KX08_clKernel);
        sgemm_Col_TN_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML080_NX080_KX08_clKernel);
        sgemm_Col_TN_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX080_NL080_KX08_clKernel);
        sgemm_Col_TN_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML080_NL080_KX08_clKernel);
        sgemm_Col_TN_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX080_NX080_KX16_clKernel);
        sgemm_Col_TN_B1_MX080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML080_NX080_KX16_clKernel);
        sgemm_Col_TN_B1_ML080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX080_NL080_KX16_clKernel);
        sgemm_Col_TN_B1_MX080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML080_NL080_KX16_clKernel);
        sgemm_Col_TN_B1_ML080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX096_NX096_KX01_clKernel);
        sgemm_Col_TN_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML096_NX096_KX01_clKernel);
        sgemm_Col_TN_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX096_NL096_KX01_clKernel);
        sgemm_Col_TN_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML096_NL096_KX01_clKernel);
        sgemm_Col_TN_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX096_NX096_KX08_clKernel);
        sgemm_Col_TN_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML096_NX096_KX08_clKernel);
        sgemm_Col_TN_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX096_NL096_KX08_clKernel);
        sgemm_Col_TN_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML096_NL096_KX08_clKernel);
        sgemm_Col_TN_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX096_NX096_KX16_clKernel);
        sgemm_Col_TN_B1_MX096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML096_NX096_KX16_clKernel);
        sgemm_Col_TN_B1_ML096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_MX096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_MX096_NL096_KX16_clKernel);
        sgemm_Col_TN_B1_MX096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TN_B1_ML096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TN_B1_ML096_NL096_KX16_clKernel);
        sgemm_Col_TN_B1_ML096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX016_NX016_KX01_clKernel);
        sgemm_Col_TT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML016_NX016_KX01_clKernel);
        sgemm_Col_TT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX016_NL016_KX01_clKernel);
        sgemm_Col_TT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML016_NL016_KX01_clKernel);
        sgemm_Col_TT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX016_NX016_KX08_clKernel);
        sgemm_Col_TT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML016_NX016_KX08_clKernel);
        sgemm_Col_TT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX016_NL016_KX08_clKernel);
        sgemm_Col_TT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML016_NL016_KX08_clKernel);
        sgemm_Col_TT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX016_NX016_KX16_clKernel);
        sgemm_Col_TT_B0_MX016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML016_NX016_KX16_clKernel);
        sgemm_Col_TT_B0_ML016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX016_NL016_KX16_clKernel);
        sgemm_Col_TT_B0_MX016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML016_NL016_KX16_clKernel);
        sgemm_Col_TT_B0_ML016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX032_NX032_KX01_clKernel);
        sgemm_Col_TT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML032_NX032_KX01_clKernel);
        sgemm_Col_TT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX032_NL032_KX01_clKernel);
        sgemm_Col_TT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML032_NL032_KX01_clKernel);
        sgemm_Col_TT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX032_NX032_KX08_clKernel);
        sgemm_Col_TT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML032_NX032_KX08_clKernel);
        sgemm_Col_TT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX032_NL032_KX08_clKernel);
        sgemm_Col_TT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML032_NL032_KX08_clKernel);
        sgemm_Col_TT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX032_NX032_KX16_clKernel);
        sgemm_Col_TT_B0_MX032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML032_NX032_KX16_clKernel);
        sgemm_Col_TT_B0_ML032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX032_NL032_KX16_clKernel);
        sgemm_Col_TT_B0_MX032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML032_NL032_KX16_clKernel);
        sgemm_Col_TT_B0_ML032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX048_NX048_KX01_clKernel);
        sgemm_Col_TT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML048_NX048_KX01_clKernel);
        sgemm_Col_TT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX048_NL048_KX01_clKernel);
        sgemm_Col_TT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML048_NL048_KX01_clKernel);
        sgemm_Col_TT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX048_NX048_KX08_clKernel);
        sgemm_Col_TT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML048_NX048_KX08_clKernel);
        sgemm_Col_TT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX048_NL048_KX08_clKernel);
        sgemm_Col_TT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML048_NL048_KX08_clKernel);
        sgemm_Col_TT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX048_NX048_KX16_clKernel);
        sgemm_Col_TT_B0_MX048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML048_NX048_KX16_clKernel);
        sgemm_Col_TT_B0_ML048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX048_NL048_KX16_clKernel);
        sgemm_Col_TT_B0_MX048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML048_NL048_KX16_clKernel);
        sgemm_Col_TT_B0_ML048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX064_NX064_KX01_clKernel);
        sgemm_Col_TT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML064_NX064_KX01_clKernel);
        sgemm_Col_TT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX064_NL064_KX01_clKernel);
        sgemm_Col_TT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML064_NL064_KX01_clKernel);
        sgemm_Col_TT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX064_NX064_KX08_clKernel);
        sgemm_Col_TT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML064_NX064_KX08_clKernel);
        sgemm_Col_TT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX064_NL064_KX08_clKernel);
        sgemm_Col_TT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML064_NL064_KX08_clKernel);
        sgemm_Col_TT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX064_NX064_KX16_clKernel);
        sgemm_Col_TT_B0_MX064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML064_NX064_KX16_clKernel);
        sgemm_Col_TT_B0_ML064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX064_NL064_KX16_clKernel);
        sgemm_Col_TT_B0_MX064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML064_NL064_KX16_clKernel);
        sgemm_Col_TT_B0_ML064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX080_NX080_KX01_clKernel);
        sgemm_Col_TT_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML080_NX080_KX01_clKernel);
        sgemm_Col_TT_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX080_NL080_KX01_clKernel);
        sgemm_Col_TT_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML080_NL080_KX01_clKernel);
        sgemm_Col_TT_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX080_NX080_KX08_clKernel);
        sgemm_Col_TT_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML080_NX080_KX08_clKernel);
        sgemm_Col_TT_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX080_NL080_KX08_clKernel);
        sgemm_Col_TT_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML080_NL080_KX08_clKernel);
        sgemm_Col_TT_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX080_NX080_KX16_clKernel);
        sgemm_Col_TT_B0_MX080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML080_NX080_KX16_clKernel);
        sgemm_Col_TT_B0_ML080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX080_NL080_KX16_clKernel);
        sgemm_Col_TT_B0_MX080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML080_NL080_KX16_clKernel);
        sgemm_Col_TT_B0_ML080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX096_NX096_KX01_clKernel);
        sgemm_Col_TT_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML096_NX096_KX01_clKernel);
        sgemm_Col_TT_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX096_NL096_KX01_clKernel);
        sgemm_Col_TT_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML096_NL096_KX01_clKernel);
        sgemm_Col_TT_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX096_NX096_KX08_clKernel);
        sgemm_Col_TT_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML096_NX096_KX08_clKernel);
        sgemm_Col_TT_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX096_NL096_KX08_clKernel);
        sgemm_Col_TT_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML096_NL096_KX08_clKernel);
        sgemm_Col_TT_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX096_NX096_KX16_clKernel);
        sgemm_Col_TT_B0_MX096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML096_NX096_KX16_clKernel);
        sgemm_Col_TT_B0_ML096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_MX096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_MX096_NL096_KX16_clKernel);
        sgemm_Col_TT_B0_MX096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B0_ML096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B0_ML096_NL096_KX16_clKernel);
        sgemm_Col_TT_B0_ML096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX016_NX016_KX01_clKernel);
        sgemm_Col_TT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML016_NX016_KX01_clKernel);
        sgemm_Col_TT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX016_NL016_KX01_clKernel);
        sgemm_Col_TT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML016_NL016_KX01_clKernel);
        sgemm_Col_TT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX016_NX016_KX08_clKernel);
        sgemm_Col_TT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML016_NX016_KX08_clKernel);
        sgemm_Col_TT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX016_NL016_KX08_clKernel);
        sgemm_Col_TT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML016_NL016_KX08_clKernel);
        sgemm_Col_TT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX016_NX016_KX16_clKernel);
        sgemm_Col_TT_B1_MX016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML016_NX016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML016_NX016_KX16_clKernel);
        sgemm_Col_TT_B1_ML016_NX016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX016_NL016_KX16_clKernel);
        sgemm_Col_TT_B1_MX016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML016_NL016_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML016_NL016_KX16_clKernel);
        sgemm_Col_TT_B1_ML016_NL016_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX032_NX032_KX01_clKernel);
        sgemm_Col_TT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML032_NX032_KX01_clKernel);
        sgemm_Col_TT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX032_NL032_KX01_clKernel);
        sgemm_Col_TT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML032_NL032_KX01_clKernel);
        sgemm_Col_TT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX032_NX032_KX08_clKernel);
        sgemm_Col_TT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML032_NX032_KX08_clKernel);
        sgemm_Col_TT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX032_NL032_KX08_clKernel);
        sgemm_Col_TT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML032_NL032_KX08_clKernel);
        sgemm_Col_TT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX032_NX032_KX16_clKernel);
        sgemm_Col_TT_B1_MX032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML032_NX032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML032_NX032_KX16_clKernel);
        sgemm_Col_TT_B1_ML032_NX032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX032_NL032_KX16_clKernel);
        sgemm_Col_TT_B1_MX032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML032_NL032_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML032_NL032_KX16_clKernel);
        sgemm_Col_TT_B1_ML032_NL032_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX048_NX048_KX01_clKernel);
        sgemm_Col_TT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML048_NX048_KX01_clKernel);
        sgemm_Col_TT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX048_NL048_KX01_clKernel);
        sgemm_Col_TT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML048_NL048_KX01_clKernel);
        sgemm_Col_TT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX048_NX048_KX08_clKernel);
        sgemm_Col_TT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML048_NX048_KX08_clKernel);
        sgemm_Col_TT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX048_NL048_KX08_clKernel);
        sgemm_Col_TT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML048_NL048_KX08_clKernel);
        sgemm_Col_TT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX048_NX048_KX16_clKernel);
        sgemm_Col_TT_B1_MX048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML048_NX048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML048_NX048_KX16_clKernel);
        sgemm_Col_TT_B1_ML048_NX048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX048_NL048_KX16_clKernel);
        sgemm_Col_TT_B1_MX048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML048_NL048_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML048_NL048_KX16_clKernel);
        sgemm_Col_TT_B1_ML048_NL048_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX064_NX064_KX01_clKernel);
        sgemm_Col_TT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML064_NX064_KX01_clKernel);
        sgemm_Col_TT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX064_NL064_KX01_clKernel);
        sgemm_Col_TT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML064_NL064_KX01_clKernel);
        sgemm_Col_TT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX064_NX064_KX08_clKernel);
        sgemm_Col_TT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML064_NX064_KX08_clKernel);
        sgemm_Col_TT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX064_NL064_KX08_clKernel);
        sgemm_Col_TT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML064_NL064_KX08_clKernel);
        sgemm_Col_TT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX064_NX064_KX16_clKernel);
        sgemm_Col_TT_B1_MX064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML064_NX064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML064_NX064_KX16_clKernel);
        sgemm_Col_TT_B1_ML064_NX064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX064_NL064_KX16_clKernel);
        sgemm_Col_TT_B1_MX064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML064_NL064_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML064_NL064_KX16_clKernel);
        sgemm_Col_TT_B1_ML064_NL064_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX080_NX080_KX01_clKernel);
        sgemm_Col_TT_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML080_NX080_KX01_clKernel);
        sgemm_Col_TT_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX080_NL080_KX01_clKernel);
        sgemm_Col_TT_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML080_NL080_KX01_clKernel);
        sgemm_Col_TT_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX080_NX080_KX08_clKernel);
        sgemm_Col_TT_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML080_NX080_KX08_clKernel);
        sgemm_Col_TT_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX080_NL080_KX08_clKernel);
        sgemm_Col_TT_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML080_NL080_KX08_clKernel);
        sgemm_Col_TT_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX080_NX080_KX16_clKernel);
        sgemm_Col_TT_B1_MX080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML080_NX080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML080_NX080_KX16_clKernel);
        sgemm_Col_TT_B1_ML080_NX080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX080_NL080_KX16_clKernel);
        sgemm_Col_TT_B1_MX080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML080_NL080_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML080_NL080_KX16_clKernel);
        sgemm_Col_TT_B1_ML080_NL080_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX096_NX096_KX01_clKernel);
        sgemm_Col_TT_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML096_NX096_KX01_clKernel);
        sgemm_Col_TT_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX096_NL096_KX01_clKernel);
        sgemm_Col_TT_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML096_NL096_KX01_clKernel);
        sgemm_Col_TT_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX096_NX096_KX08_clKernel);
        sgemm_Col_TT_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML096_NX096_KX08_clKernel);
        sgemm_Col_TT_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX096_NL096_KX08_clKernel);
        sgemm_Col_TT_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML096_NL096_KX08_clKernel);
        sgemm_Col_TT_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX096_NX096_KX16_clKernel);
        sgemm_Col_TT_B1_MX096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML096_NX096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML096_NX096_KX16_clKernel);
        sgemm_Col_TT_B1_ML096_NX096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_MX096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_MX096_NL096_KX16_clKernel);
        sgemm_Col_TT_B1_MX096_NL096_KX16_clKernel = NULL;
    }
    if(sgemm_Col_TT_B1_ML096_NL096_KX16_clKernel != NULL) {
        clReleaseKernel(sgemm_Col_TT_B1_ML096_NL096_KX16_clKernel);
        sgemm_Col_TT_B1_ML096_NL096_KX16_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX016_NX016_KX01_clKernel);
        dgemm_Col_NN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML016_NX016_KX01_clKernel);
        dgemm_Col_NN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX016_NL016_KX01_clKernel);
        dgemm_Col_NN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML016_NL016_KX01_clKernel);
        dgemm_Col_NN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX016_NX016_KX08_clKernel);
        dgemm_Col_NN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML016_NX016_KX08_clKernel);
        dgemm_Col_NN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX016_NL016_KX08_clKernel);
        dgemm_Col_NN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML016_NL016_KX08_clKernel);
        dgemm_Col_NN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX032_NX032_KX01_clKernel);
        dgemm_Col_NN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML032_NX032_KX01_clKernel);
        dgemm_Col_NN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX032_NL032_KX01_clKernel);
        dgemm_Col_NN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML032_NL032_KX01_clKernel);
        dgemm_Col_NN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX032_NX032_KX08_clKernel);
        dgemm_Col_NN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML032_NX032_KX08_clKernel);
        dgemm_Col_NN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX032_NL032_KX08_clKernel);
        dgemm_Col_NN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML032_NL032_KX08_clKernel);
        dgemm_Col_NN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX048_NX048_KX01_clKernel);
        dgemm_Col_NN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML048_NX048_KX01_clKernel);
        dgemm_Col_NN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX048_NL048_KX01_clKernel);
        dgemm_Col_NN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML048_NL048_KX01_clKernel);
        dgemm_Col_NN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX048_NX048_KX08_clKernel);
        dgemm_Col_NN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML048_NX048_KX08_clKernel);
        dgemm_Col_NN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX048_NL048_KX08_clKernel);
        dgemm_Col_NN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML048_NL048_KX08_clKernel);
        dgemm_Col_NN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX064_NX064_KX01_clKernel);
        dgemm_Col_NN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML064_NX064_KX01_clKernel);
        dgemm_Col_NN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX064_NL064_KX01_clKernel);
        dgemm_Col_NN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML064_NL064_KX01_clKernel);
        dgemm_Col_NN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX064_NX064_KX08_clKernel);
        dgemm_Col_NN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML064_NX064_KX08_clKernel);
        dgemm_Col_NN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX064_NL064_KX08_clKernel);
        dgemm_Col_NN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML064_NL064_KX08_clKernel);
        dgemm_Col_NN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX080_NX080_KX01_clKernel);
        dgemm_Col_NN_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML080_NX080_KX01_clKernel);
        dgemm_Col_NN_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX080_NL080_KX01_clKernel);
        dgemm_Col_NN_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML080_NL080_KX01_clKernel);
        dgemm_Col_NN_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX080_NX080_KX08_clKernel);
        dgemm_Col_NN_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML080_NX080_KX08_clKernel);
        dgemm_Col_NN_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_MX080_NL080_KX08_clKernel);
        dgemm_Col_NN_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B0_ML080_NL080_KX08_clKernel);
        dgemm_Col_NN_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX016_NX016_KX01_clKernel);
        dgemm_Col_NN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML016_NX016_KX01_clKernel);
        dgemm_Col_NN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX016_NL016_KX01_clKernel);
        dgemm_Col_NN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML016_NL016_KX01_clKernel);
        dgemm_Col_NN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX016_NX016_KX08_clKernel);
        dgemm_Col_NN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML016_NX016_KX08_clKernel);
        dgemm_Col_NN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX016_NL016_KX08_clKernel);
        dgemm_Col_NN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML016_NL016_KX08_clKernel);
        dgemm_Col_NN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX032_NX032_KX01_clKernel);
        dgemm_Col_NN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML032_NX032_KX01_clKernel);
        dgemm_Col_NN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX032_NL032_KX01_clKernel);
        dgemm_Col_NN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML032_NL032_KX01_clKernel);
        dgemm_Col_NN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX032_NX032_KX08_clKernel);
        dgemm_Col_NN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML032_NX032_KX08_clKernel);
        dgemm_Col_NN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX032_NL032_KX08_clKernel);
        dgemm_Col_NN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML032_NL032_KX08_clKernel);
        dgemm_Col_NN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX048_NX048_KX01_clKernel);
        dgemm_Col_NN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML048_NX048_KX01_clKernel);
        dgemm_Col_NN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX048_NL048_KX01_clKernel);
        dgemm_Col_NN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML048_NL048_KX01_clKernel);
        dgemm_Col_NN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX048_NX048_KX08_clKernel);
        dgemm_Col_NN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML048_NX048_KX08_clKernel);
        dgemm_Col_NN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX048_NL048_KX08_clKernel);
        dgemm_Col_NN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML048_NL048_KX08_clKernel);
        dgemm_Col_NN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX064_NX064_KX01_clKernel);
        dgemm_Col_NN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML064_NX064_KX01_clKernel);
        dgemm_Col_NN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX064_NL064_KX01_clKernel);
        dgemm_Col_NN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML064_NL064_KX01_clKernel);
        dgemm_Col_NN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX064_NX064_KX08_clKernel);
        dgemm_Col_NN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML064_NX064_KX08_clKernel);
        dgemm_Col_NN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX064_NL064_KX08_clKernel);
        dgemm_Col_NN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML064_NL064_KX08_clKernel);
        dgemm_Col_NN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX080_NX080_KX01_clKernel);
        dgemm_Col_NN_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML080_NX080_KX01_clKernel);
        dgemm_Col_NN_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX080_NL080_KX01_clKernel);
        dgemm_Col_NN_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML080_NL080_KX01_clKernel);
        dgemm_Col_NN_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX080_NX080_KX08_clKernel);
        dgemm_Col_NN_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML080_NX080_KX08_clKernel);
        dgemm_Col_NN_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_MX080_NL080_KX08_clKernel);
        dgemm_Col_NN_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NN_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NN_B1_ML080_NL080_KX08_clKernel);
        dgemm_Col_NN_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX016_NX016_KX01_clKernel);
        dgemm_Col_NT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML016_NX016_KX01_clKernel);
        dgemm_Col_NT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX016_NL016_KX01_clKernel);
        dgemm_Col_NT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML016_NL016_KX01_clKernel);
        dgemm_Col_NT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX016_NX016_KX08_clKernel);
        dgemm_Col_NT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML016_NX016_KX08_clKernel);
        dgemm_Col_NT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX016_NL016_KX08_clKernel);
        dgemm_Col_NT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML016_NL016_KX08_clKernel);
        dgemm_Col_NT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX032_NX032_KX01_clKernel);
        dgemm_Col_NT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML032_NX032_KX01_clKernel);
        dgemm_Col_NT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX032_NL032_KX01_clKernel);
        dgemm_Col_NT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML032_NL032_KX01_clKernel);
        dgemm_Col_NT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX032_NX032_KX08_clKernel);
        dgemm_Col_NT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML032_NX032_KX08_clKernel);
        dgemm_Col_NT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX032_NL032_KX08_clKernel);
        dgemm_Col_NT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML032_NL032_KX08_clKernel);
        dgemm_Col_NT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX048_NX048_KX01_clKernel);
        dgemm_Col_NT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML048_NX048_KX01_clKernel);
        dgemm_Col_NT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX048_NL048_KX01_clKernel);
        dgemm_Col_NT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML048_NL048_KX01_clKernel);
        dgemm_Col_NT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX048_NX048_KX08_clKernel);
        dgemm_Col_NT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML048_NX048_KX08_clKernel);
        dgemm_Col_NT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX048_NL048_KX08_clKernel);
        dgemm_Col_NT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML048_NL048_KX08_clKernel);
        dgemm_Col_NT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX064_NX064_KX01_clKernel);
        dgemm_Col_NT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML064_NX064_KX01_clKernel);
        dgemm_Col_NT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX064_NL064_KX01_clKernel);
        dgemm_Col_NT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML064_NL064_KX01_clKernel);
        dgemm_Col_NT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX064_NX064_KX08_clKernel);
        dgemm_Col_NT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML064_NX064_KX08_clKernel);
        dgemm_Col_NT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX064_NL064_KX08_clKernel);
        dgemm_Col_NT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML064_NL064_KX08_clKernel);
        dgemm_Col_NT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX080_NX080_KX01_clKernel);
        dgemm_Col_NT_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML080_NX080_KX01_clKernel);
        dgemm_Col_NT_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX080_NL080_KX01_clKernel);
        dgemm_Col_NT_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML080_NL080_KX01_clKernel);
        dgemm_Col_NT_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX080_NX080_KX08_clKernel);
        dgemm_Col_NT_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML080_NX080_KX08_clKernel);
        dgemm_Col_NT_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_MX080_NL080_KX08_clKernel);
        dgemm_Col_NT_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B0_ML080_NL080_KX08_clKernel);
        dgemm_Col_NT_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX016_NX016_KX01_clKernel);
        dgemm_Col_NT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML016_NX016_KX01_clKernel);
        dgemm_Col_NT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX016_NL016_KX01_clKernel);
        dgemm_Col_NT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML016_NL016_KX01_clKernel);
        dgemm_Col_NT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX016_NX016_KX08_clKernel);
        dgemm_Col_NT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML016_NX016_KX08_clKernel);
        dgemm_Col_NT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX016_NL016_KX08_clKernel);
        dgemm_Col_NT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML016_NL016_KX08_clKernel);
        dgemm_Col_NT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX032_NX032_KX01_clKernel);
        dgemm_Col_NT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML032_NX032_KX01_clKernel);
        dgemm_Col_NT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX032_NL032_KX01_clKernel);
        dgemm_Col_NT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML032_NL032_KX01_clKernel);
        dgemm_Col_NT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX032_NX032_KX08_clKernel);
        dgemm_Col_NT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML032_NX032_KX08_clKernel);
        dgemm_Col_NT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX032_NL032_KX08_clKernel);
        dgemm_Col_NT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML032_NL032_KX08_clKernel);
        dgemm_Col_NT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX048_NX048_KX01_clKernel);
        dgemm_Col_NT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML048_NX048_KX01_clKernel);
        dgemm_Col_NT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX048_NL048_KX01_clKernel);
        dgemm_Col_NT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML048_NL048_KX01_clKernel);
        dgemm_Col_NT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX048_NX048_KX08_clKernel);
        dgemm_Col_NT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML048_NX048_KX08_clKernel);
        dgemm_Col_NT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX048_NL048_KX08_clKernel);
        dgemm_Col_NT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML048_NL048_KX08_clKernel);
        dgemm_Col_NT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX064_NX064_KX01_clKernel);
        dgemm_Col_NT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML064_NX064_KX01_clKernel);
        dgemm_Col_NT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX064_NL064_KX01_clKernel);
        dgemm_Col_NT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML064_NL064_KX01_clKernel);
        dgemm_Col_NT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX064_NX064_KX08_clKernel);
        dgemm_Col_NT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML064_NX064_KX08_clKernel);
        dgemm_Col_NT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX064_NL064_KX08_clKernel);
        dgemm_Col_NT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML064_NL064_KX08_clKernel);
        dgemm_Col_NT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX080_NX080_KX01_clKernel);
        dgemm_Col_NT_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML080_NX080_KX01_clKernel);
        dgemm_Col_NT_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX080_NL080_KX01_clKernel);
        dgemm_Col_NT_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML080_NL080_KX01_clKernel);
        dgemm_Col_NT_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX080_NX080_KX08_clKernel);
        dgemm_Col_NT_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML080_NX080_KX08_clKernel);
        dgemm_Col_NT_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_MX080_NL080_KX08_clKernel);
        dgemm_Col_NT_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_NT_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_NT_B1_ML080_NL080_KX08_clKernel);
        dgemm_Col_NT_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX016_NX016_KX01_clKernel);
        dgemm_Col_TN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML016_NX016_KX01_clKernel);
        dgemm_Col_TN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX016_NL016_KX01_clKernel);
        dgemm_Col_TN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML016_NL016_KX01_clKernel);
        dgemm_Col_TN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX016_NX016_KX08_clKernel);
        dgemm_Col_TN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML016_NX016_KX08_clKernel);
        dgemm_Col_TN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX016_NL016_KX08_clKernel);
        dgemm_Col_TN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML016_NL016_KX08_clKernel);
        dgemm_Col_TN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX032_NX032_KX01_clKernel);
        dgemm_Col_TN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML032_NX032_KX01_clKernel);
        dgemm_Col_TN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX032_NL032_KX01_clKernel);
        dgemm_Col_TN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML032_NL032_KX01_clKernel);
        dgemm_Col_TN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX032_NX032_KX08_clKernel);
        dgemm_Col_TN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML032_NX032_KX08_clKernel);
        dgemm_Col_TN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX032_NL032_KX08_clKernel);
        dgemm_Col_TN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML032_NL032_KX08_clKernel);
        dgemm_Col_TN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX048_NX048_KX01_clKernel);
        dgemm_Col_TN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML048_NX048_KX01_clKernel);
        dgemm_Col_TN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX048_NL048_KX01_clKernel);
        dgemm_Col_TN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML048_NL048_KX01_clKernel);
        dgemm_Col_TN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX048_NX048_KX08_clKernel);
        dgemm_Col_TN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML048_NX048_KX08_clKernel);
        dgemm_Col_TN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX048_NL048_KX08_clKernel);
        dgemm_Col_TN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML048_NL048_KX08_clKernel);
        dgemm_Col_TN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX064_NX064_KX01_clKernel);
        dgemm_Col_TN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML064_NX064_KX01_clKernel);
        dgemm_Col_TN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX064_NL064_KX01_clKernel);
        dgemm_Col_TN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML064_NL064_KX01_clKernel);
        dgemm_Col_TN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX064_NX064_KX08_clKernel);
        dgemm_Col_TN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML064_NX064_KX08_clKernel);
        dgemm_Col_TN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX064_NL064_KX08_clKernel);
        dgemm_Col_TN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML064_NL064_KX08_clKernel);
        dgemm_Col_TN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX080_NX080_KX01_clKernel);
        dgemm_Col_TN_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML080_NX080_KX01_clKernel);
        dgemm_Col_TN_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX080_NL080_KX01_clKernel);
        dgemm_Col_TN_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML080_NL080_KX01_clKernel);
        dgemm_Col_TN_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX080_NX080_KX08_clKernel);
        dgemm_Col_TN_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML080_NX080_KX08_clKernel);
        dgemm_Col_TN_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_MX080_NL080_KX08_clKernel);
        dgemm_Col_TN_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B0_ML080_NL080_KX08_clKernel);
        dgemm_Col_TN_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX016_NX016_KX01_clKernel);
        dgemm_Col_TN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML016_NX016_KX01_clKernel);
        dgemm_Col_TN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX016_NL016_KX01_clKernel);
        dgemm_Col_TN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML016_NL016_KX01_clKernel);
        dgemm_Col_TN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX016_NX016_KX08_clKernel);
        dgemm_Col_TN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML016_NX016_KX08_clKernel);
        dgemm_Col_TN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX016_NL016_KX08_clKernel);
        dgemm_Col_TN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML016_NL016_KX08_clKernel);
        dgemm_Col_TN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX032_NX032_KX01_clKernel);
        dgemm_Col_TN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML032_NX032_KX01_clKernel);
        dgemm_Col_TN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX032_NL032_KX01_clKernel);
        dgemm_Col_TN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML032_NL032_KX01_clKernel);
        dgemm_Col_TN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX032_NX032_KX08_clKernel);
        dgemm_Col_TN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML032_NX032_KX08_clKernel);
        dgemm_Col_TN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX032_NL032_KX08_clKernel);
        dgemm_Col_TN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML032_NL032_KX08_clKernel);
        dgemm_Col_TN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX048_NX048_KX01_clKernel);
        dgemm_Col_TN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML048_NX048_KX01_clKernel);
        dgemm_Col_TN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX048_NL048_KX01_clKernel);
        dgemm_Col_TN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML048_NL048_KX01_clKernel);
        dgemm_Col_TN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX048_NX048_KX08_clKernel);
        dgemm_Col_TN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML048_NX048_KX08_clKernel);
        dgemm_Col_TN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX048_NL048_KX08_clKernel);
        dgemm_Col_TN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML048_NL048_KX08_clKernel);
        dgemm_Col_TN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX064_NX064_KX01_clKernel);
        dgemm_Col_TN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML064_NX064_KX01_clKernel);
        dgemm_Col_TN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX064_NL064_KX01_clKernel);
        dgemm_Col_TN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML064_NL064_KX01_clKernel);
        dgemm_Col_TN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX064_NX064_KX08_clKernel);
        dgemm_Col_TN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML064_NX064_KX08_clKernel);
        dgemm_Col_TN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX064_NL064_KX08_clKernel);
        dgemm_Col_TN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML064_NL064_KX08_clKernel);
        dgemm_Col_TN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX080_NX080_KX01_clKernel);
        dgemm_Col_TN_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML080_NX080_KX01_clKernel);
        dgemm_Col_TN_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX080_NL080_KX01_clKernel);
        dgemm_Col_TN_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML080_NL080_KX01_clKernel);
        dgemm_Col_TN_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX080_NX080_KX08_clKernel);
        dgemm_Col_TN_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML080_NX080_KX08_clKernel);
        dgemm_Col_TN_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_MX080_NL080_KX08_clKernel);
        dgemm_Col_TN_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TN_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TN_B1_ML080_NL080_KX08_clKernel);
        dgemm_Col_TN_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX016_NX016_KX01_clKernel);
        dgemm_Col_TT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML016_NX016_KX01_clKernel);
        dgemm_Col_TT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX016_NL016_KX01_clKernel);
        dgemm_Col_TT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML016_NL016_KX01_clKernel);
        dgemm_Col_TT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX016_NX016_KX08_clKernel);
        dgemm_Col_TT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML016_NX016_KX08_clKernel);
        dgemm_Col_TT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX016_NL016_KX08_clKernel);
        dgemm_Col_TT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML016_NL016_KX08_clKernel);
        dgemm_Col_TT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX032_NX032_KX01_clKernel);
        dgemm_Col_TT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML032_NX032_KX01_clKernel);
        dgemm_Col_TT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX032_NL032_KX01_clKernel);
        dgemm_Col_TT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML032_NL032_KX01_clKernel);
        dgemm_Col_TT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX032_NX032_KX08_clKernel);
        dgemm_Col_TT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML032_NX032_KX08_clKernel);
        dgemm_Col_TT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX032_NL032_KX08_clKernel);
        dgemm_Col_TT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML032_NL032_KX08_clKernel);
        dgemm_Col_TT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX048_NX048_KX01_clKernel);
        dgemm_Col_TT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML048_NX048_KX01_clKernel);
        dgemm_Col_TT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX048_NL048_KX01_clKernel);
        dgemm_Col_TT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML048_NL048_KX01_clKernel);
        dgemm_Col_TT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX048_NX048_KX08_clKernel);
        dgemm_Col_TT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML048_NX048_KX08_clKernel);
        dgemm_Col_TT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX048_NL048_KX08_clKernel);
        dgemm_Col_TT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML048_NL048_KX08_clKernel);
        dgemm_Col_TT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX064_NX064_KX01_clKernel);
        dgemm_Col_TT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML064_NX064_KX01_clKernel);
        dgemm_Col_TT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX064_NL064_KX01_clKernel);
        dgemm_Col_TT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML064_NL064_KX01_clKernel);
        dgemm_Col_TT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX064_NX064_KX08_clKernel);
        dgemm_Col_TT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML064_NX064_KX08_clKernel);
        dgemm_Col_TT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX064_NL064_KX08_clKernel);
        dgemm_Col_TT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML064_NL064_KX08_clKernel);
        dgemm_Col_TT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX080_NX080_KX01_clKernel);
        dgemm_Col_TT_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML080_NX080_KX01_clKernel);
        dgemm_Col_TT_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX080_NL080_KX01_clKernel);
        dgemm_Col_TT_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML080_NL080_KX01_clKernel);
        dgemm_Col_TT_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX080_NX080_KX08_clKernel);
        dgemm_Col_TT_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML080_NX080_KX08_clKernel);
        dgemm_Col_TT_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_MX080_NL080_KX08_clKernel);
        dgemm_Col_TT_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B0_ML080_NL080_KX08_clKernel);
        dgemm_Col_TT_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX016_NX016_KX01_clKernel);
        dgemm_Col_TT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML016_NX016_KX01_clKernel);
        dgemm_Col_TT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX016_NL016_KX01_clKernel);
        dgemm_Col_TT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML016_NL016_KX01_clKernel);
        dgemm_Col_TT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX016_NX016_KX08_clKernel);
        dgemm_Col_TT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML016_NX016_KX08_clKernel);
        dgemm_Col_TT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX016_NL016_KX08_clKernel);
        dgemm_Col_TT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML016_NL016_KX08_clKernel);
        dgemm_Col_TT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX032_NX032_KX01_clKernel);
        dgemm_Col_TT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML032_NX032_KX01_clKernel);
        dgemm_Col_TT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX032_NL032_KX01_clKernel);
        dgemm_Col_TT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML032_NL032_KX01_clKernel);
        dgemm_Col_TT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX032_NX032_KX08_clKernel);
        dgemm_Col_TT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML032_NX032_KX08_clKernel);
        dgemm_Col_TT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX032_NL032_KX08_clKernel);
        dgemm_Col_TT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML032_NL032_KX08_clKernel);
        dgemm_Col_TT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX048_NX048_KX01_clKernel);
        dgemm_Col_TT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML048_NX048_KX01_clKernel);
        dgemm_Col_TT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX048_NL048_KX01_clKernel);
        dgemm_Col_TT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML048_NL048_KX01_clKernel);
        dgemm_Col_TT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX048_NX048_KX08_clKernel);
        dgemm_Col_TT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML048_NX048_KX08_clKernel);
        dgemm_Col_TT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX048_NL048_KX08_clKernel);
        dgemm_Col_TT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML048_NL048_KX08_clKernel);
        dgemm_Col_TT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX064_NX064_KX01_clKernel);
        dgemm_Col_TT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML064_NX064_KX01_clKernel);
        dgemm_Col_TT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX064_NL064_KX01_clKernel);
        dgemm_Col_TT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML064_NL064_KX01_clKernel);
        dgemm_Col_TT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX064_NX064_KX08_clKernel);
        dgemm_Col_TT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML064_NX064_KX08_clKernel);
        dgemm_Col_TT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX064_NL064_KX08_clKernel);
        dgemm_Col_TT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML064_NL064_KX08_clKernel);
        dgemm_Col_TT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX080_NX080_KX01_clKernel);
        dgemm_Col_TT_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML080_NX080_KX01_clKernel);
        dgemm_Col_TT_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX080_NL080_KX01_clKernel);
        dgemm_Col_TT_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML080_NL080_KX01_clKernel);
        dgemm_Col_TT_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX080_NX080_KX08_clKernel);
        dgemm_Col_TT_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML080_NX080_KX08_clKernel);
        dgemm_Col_TT_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_MX080_NL080_KX08_clKernel);
        dgemm_Col_TT_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(dgemm_Col_TT_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(dgemm_Col_TT_B1_ML080_NL080_KX08_clKernel);
        dgemm_Col_TT_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX016_NX016_KX01_clKernel);
        cgemm_Col_NN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML016_NX016_KX01_clKernel);
        cgemm_Col_NN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX016_NL016_KX01_clKernel);
        cgemm_Col_NN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML016_NL016_KX01_clKernel);
        cgemm_Col_NN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX016_NX016_KX08_clKernel);
        cgemm_Col_NN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML016_NX016_KX08_clKernel);
        cgemm_Col_NN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX016_NL016_KX08_clKernel);
        cgemm_Col_NN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML016_NL016_KX08_clKernel);
        cgemm_Col_NN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX032_NX032_KX01_clKernel);
        cgemm_Col_NN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML032_NX032_KX01_clKernel);
        cgemm_Col_NN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX032_NL032_KX01_clKernel);
        cgemm_Col_NN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML032_NL032_KX01_clKernel);
        cgemm_Col_NN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX032_NX032_KX08_clKernel);
        cgemm_Col_NN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML032_NX032_KX08_clKernel);
        cgemm_Col_NN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX032_NL032_KX08_clKernel);
        cgemm_Col_NN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML032_NL032_KX08_clKernel);
        cgemm_Col_NN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX048_NX048_KX01_clKernel);
        cgemm_Col_NN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML048_NX048_KX01_clKernel);
        cgemm_Col_NN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX048_NL048_KX01_clKernel);
        cgemm_Col_NN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML048_NL048_KX01_clKernel);
        cgemm_Col_NN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX048_NX048_KX08_clKernel);
        cgemm_Col_NN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML048_NX048_KX08_clKernel);
        cgemm_Col_NN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX048_NL048_KX08_clKernel);
        cgemm_Col_NN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML048_NL048_KX08_clKernel);
        cgemm_Col_NN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX064_NX064_KX01_clKernel);
        cgemm_Col_NN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML064_NX064_KX01_clKernel);
        cgemm_Col_NN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX064_NL064_KX01_clKernel);
        cgemm_Col_NN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML064_NL064_KX01_clKernel);
        cgemm_Col_NN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX064_NX064_KX08_clKernel);
        cgemm_Col_NN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML064_NX064_KX08_clKernel);
        cgemm_Col_NN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX064_NL064_KX08_clKernel);
        cgemm_Col_NN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML064_NL064_KX08_clKernel);
        cgemm_Col_NN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX080_NX080_KX01_clKernel);
        cgemm_Col_NN_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML080_NX080_KX01_clKernel);
        cgemm_Col_NN_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX080_NL080_KX01_clKernel);
        cgemm_Col_NN_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML080_NL080_KX01_clKernel);
        cgemm_Col_NN_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX080_NX080_KX08_clKernel);
        cgemm_Col_NN_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML080_NX080_KX08_clKernel);
        cgemm_Col_NN_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX080_NL080_KX08_clKernel);
        cgemm_Col_NN_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML080_NL080_KX08_clKernel);
        cgemm_Col_NN_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX096_NX096_KX01_clKernel);
        cgemm_Col_NN_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML096_NX096_KX01_clKernel);
        cgemm_Col_NN_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX096_NL096_KX01_clKernel);
        cgemm_Col_NN_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML096_NL096_KX01_clKernel);
        cgemm_Col_NN_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX096_NX096_KX08_clKernel);
        cgemm_Col_NN_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML096_NX096_KX08_clKernel);
        cgemm_Col_NN_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_MX096_NL096_KX08_clKernel);
        cgemm_Col_NN_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B0_ML096_NL096_KX08_clKernel);
        cgemm_Col_NN_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX016_NX016_KX01_clKernel);
        cgemm_Col_NN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML016_NX016_KX01_clKernel);
        cgemm_Col_NN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX016_NL016_KX01_clKernel);
        cgemm_Col_NN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML016_NL016_KX01_clKernel);
        cgemm_Col_NN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX016_NX016_KX08_clKernel);
        cgemm_Col_NN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML016_NX016_KX08_clKernel);
        cgemm_Col_NN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX016_NL016_KX08_clKernel);
        cgemm_Col_NN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML016_NL016_KX08_clKernel);
        cgemm_Col_NN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX032_NX032_KX01_clKernel);
        cgemm_Col_NN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML032_NX032_KX01_clKernel);
        cgemm_Col_NN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX032_NL032_KX01_clKernel);
        cgemm_Col_NN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML032_NL032_KX01_clKernel);
        cgemm_Col_NN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX032_NX032_KX08_clKernel);
        cgemm_Col_NN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML032_NX032_KX08_clKernel);
        cgemm_Col_NN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX032_NL032_KX08_clKernel);
        cgemm_Col_NN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML032_NL032_KX08_clKernel);
        cgemm_Col_NN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX048_NX048_KX01_clKernel);
        cgemm_Col_NN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML048_NX048_KX01_clKernel);
        cgemm_Col_NN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX048_NL048_KX01_clKernel);
        cgemm_Col_NN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML048_NL048_KX01_clKernel);
        cgemm_Col_NN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX048_NX048_KX08_clKernel);
        cgemm_Col_NN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML048_NX048_KX08_clKernel);
        cgemm_Col_NN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX048_NL048_KX08_clKernel);
        cgemm_Col_NN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML048_NL048_KX08_clKernel);
        cgemm_Col_NN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX064_NX064_KX01_clKernel);
        cgemm_Col_NN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML064_NX064_KX01_clKernel);
        cgemm_Col_NN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX064_NL064_KX01_clKernel);
        cgemm_Col_NN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML064_NL064_KX01_clKernel);
        cgemm_Col_NN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX064_NX064_KX08_clKernel);
        cgemm_Col_NN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML064_NX064_KX08_clKernel);
        cgemm_Col_NN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX064_NL064_KX08_clKernel);
        cgemm_Col_NN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML064_NL064_KX08_clKernel);
        cgemm_Col_NN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX080_NX080_KX01_clKernel);
        cgemm_Col_NN_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML080_NX080_KX01_clKernel);
        cgemm_Col_NN_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX080_NL080_KX01_clKernel);
        cgemm_Col_NN_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML080_NL080_KX01_clKernel);
        cgemm_Col_NN_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX080_NX080_KX08_clKernel);
        cgemm_Col_NN_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML080_NX080_KX08_clKernel);
        cgemm_Col_NN_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX080_NL080_KX08_clKernel);
        cgemm_Col_NN_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML080_NL080_KX08_clKernel);
        cgemm_Col_NN_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX096_NX096_KX01_clKernel);
        cgemm_Col_NN_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML096_NX096_KX01_clKernel);
        cgemm_Col_NN_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX096_NL096_KX01_clKernel);
        cgemm_Col_NN_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML096_NL096_KX01_clKernel);
        cgemm_Col_NN_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX096_NX096_KX08_clKernel);
        cgemm_Col_NN_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML096_NX096_KX08_clKernel);
        cgemm_Col_NN_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_MX096_NL096_KX08_clKernel);
        cgemm_Col_NN_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NN_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NN_B1_ML096_NL096_KX08_clKernel);
        cgemm_Col_NN_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX016_NX016_KX01_clKernel);
        cgemm_Col_NT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML016_NX016_KX01_clKernel);
        cgemm_Col_NT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX016_NL016_KX01_clKernel);
        cgemm_Col_NT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML016_NL016_KX01_clKernel);
        cgemm_Col_NT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX016_NX016_KX08_clKernel);
        cgemm_Col_NT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML016_NX016_KX08_clKernel);
        cgemm_Col_NT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX016_NL016_KX08_clKernel);
        cgemm_Col_NT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML016_NL016_KX08_clKernel);
        cgemm_Col_NT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX032_NX032_KX01_clKernel);
        cgemm_Col_NT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML032_NX032_KX01_clKernel);
        cgemm_Col_NT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX032_NL032_KX01_clKernel);
        cgemm_Col_NT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML032_NL032_KX01_clKernel);
        cgemm_Col_NT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX032_NX032_KX08_clKernel);
        cgemm_Col_NT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML032_NX032_KX08_clKernel);
        cgemm_Col_NT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX032_NL032_KX08_clKernel);
        cgemm_Col_NT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML032_NL032_KX08_clKernel);
        cgemm_Col_NT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX048_NX048_KX01_clKernel);
        cgemm_Col_NT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML048_NX048_KX01_clKernel);
        cgemm_Col_NT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX048_NL048_KX01_clKernel);
        cgemm_Col_NT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML048_NL048_KX01_clKernel);
        cgemm_Col_NT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX048_NX048_KX08_clKernel);
        cgemm_Col_NT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML048_NX048_KX08_clKernel);
        cgemm_Col_NT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX048_NL048_KX08_clKernel);
        cgemm_Col_NT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML048_NL048_KX08_clKernel);
        cgemm_Col_NT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX064_NX064_KX01_clKernel);
        cgemm_Col_NT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML064_NX064_KX01_clKernel);
        cgemm_Col_NT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX064_NL064_KX01_clKernel);
        cgemm_Col_NT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML064_NL064_KX01_clKernel);
        cgemm_Col_NT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX064_NX064_KX08_clKernel);
        cgemm_Col_NT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML064_NX064_KX08_clKernel);
        cgemm_Col_NT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX064_NL064_KX08_clKernel);
        cgemm_Col_NT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML064_NL064_KX08_clKernel);
        cgemm_Col_NT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX080_NX080_KX01_clKernel);
        cgemm_Col_NT_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML080_NX080_KX01_clKernel);
        cgemm_Col_NT_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX080_NL080_KX01_clKernel);
        cgemm_Col_NT_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML080_NL080_KX01_clKernel);
        cgemm_Col_NT_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX080_NX080_KX08_clKernel);
        cgemm_Col_NT_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML080_NX080_KX08_clKernel);
        cgemm_Col_NT_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX080_NL080_KX08_clKernel);
        cgemm_Col_NT_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML080_NL080_KX08_clKernel);
        cgemm_Col_NT_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX096_NX096_KX01_clKernel);
        cgemm_Col_NT_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML096_NX096_KX01_clKernel);
        cgemm_Col_NT_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX096_NL096_KX01_clKernel);
        cgemm_Col_NT_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML096_NL096_KX01_clKernel);
        cgemm_Col_NT_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX096_NX096_KX08_clKernel);
        cgemm_Col_NT_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML096_NX096_KX08_clKernel);
        cgemm_Col_NT_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_MX096_NL096_KX08_clKernel);
        cgemm_Col_NT_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B0_ML096_NL096_KX08_clKernel);
        cgemm_Col_NT_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX016_NX016_KX01_clKernel);
        cgemm_Col_NT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML016_NX016_KX01_clKernel);
        cgemm_Col_NT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX016_NL016_KX01_clKernel);
        cgemm_Col_NT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML016_NL016_KX01_clKernel);
        cgemm_Col_NT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX016_NX016_KX08_clKernel);
        cgemm_Col_NT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML016_NX016_KX08_clKernel);
        cgemm_Col_NT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX016_NL016_KX08_clKernel);
        cgemm_Col_NT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML016_NL016_KX08_clKernel);
        cgemm_Col_NT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX032_NX032_KX01_clKernel);
        cgemm_Col_NT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML032_NX032_KX01_clKernel);
        cgemm_Col_NT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX032_NL032_KX01_clKernel);
        cgemm_Col_NT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML032_NL032_KX01_clKernel);
        cgemm_Col_NT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX032_NX032_KX08_clKernel);
        cgemm_Col_NT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML032_NX032_KX08_clKernel);
        cgemm_Col_NT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX032_NL032_KX08_clKernel);
        cgemm_Col_NT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML032_NL032_KX08_clKernel);
        cgemm_Col_NT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX048_NX048_KX01_clKernel);
        cgemm_Col_NT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML048_NX048_KX01_clKernel);
        cgemm_Col_NT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX048_NL048_KX01_clKernel);
        cgemm_Col_NT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML048_NL048_KX01_clKernel);
        cgemm_Col_NT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX048_NX048_KX08_clKernel);
        cgemm_Col_NT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML048_NX048_KX08_clKernel);
        cgemm_Col_NT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX048_NL048_KX08_clKernel);
        cgemm_Col_NT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML048_NL048_KX08_clKernel);
        cgemm_Col_NT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX064_NX064_KX01_clKernel);
        cgemm_Col_NT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML064_NX064_KX01_clKernel);
        cgemm_Col_NT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX064_NL064_KX01_clKernel);
        cgemm_Col_NT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML064_NL064_KX01_clKernel);
        cgemm_Col_NT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX064_NX064_KX08_clKernel);
        cgemm_Col_NT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML064_NX064_KX08_clKernel);
        cgemm_Col_NT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX064_NL064_KX08_clKernel);
        cgemm_Col_NT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML064_NL064_KX08_clKernel);
        cgemm_Col_NT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX080_NX080_KX01_clKernel);
        cgemm_Col_NT_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML080_NX080_KX01_clKernel);
        cgemm_Col_NT_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX080_NL080_KX01_clKernel);
        cgemm_Col_NT_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML080_NL080_KX01_clKernel);
        cgemm_Col_NT_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX080_NX080_KX08_clKernel);
        cgemm_Col_NT_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML080_NX080_KX08_clKernel);
        cgemm_Col_NT_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX080_NL080_KX08_clKernel);
        cgemm_Col_NT_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML080_NL080_KX08_clKernel);
        cgemm_Col_NT_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX096_NX096_KX01_clKernel);
        cgemm_Col_NT_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML096_NX096_KX01_clKernel);
        cgemm_Col_NT_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX096_NL096_KX01_clKernel);
        cgemm_Col_NT_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML096_NL096_KX01_clKernel);
        cgemm_Col_NT_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX096_NX096_KX08_clKernel);
        cgemm_Col_NT_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML096_NX096_KX08_clKernel);
        cgemm_Col_NT_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_MX096_NL096_KX08_clKernel);
        cgemm_Col_NT_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NT_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NT_B1_ML096_NL096_KX08_clKernel);
        cgemm_Col_NT_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX016_NX016_KX01_clKernel);
        cgemm_Col_NC_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML016_NX016_KX01_clKernel);
        cgemm_Col_NC_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX016_NL016_KX01_clKernel);
        cgemm_Col_NC_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML016_NL016_KX01_clKernel);
        cgemm_Col_NC_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX016_NX016_KX08_clKernel);
        cgemm_Col_NC_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML016_NX016_KX08_clKernel);
        cgemm_Col_NC_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX016_NL016_KX08_clKernel);
        cgemm_Col_NC_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML016_NL016_KX08_clKernel);
        cgemm_Col_NC_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX032_NX032_KX01_clKernel);
        cgemm_Col_NC_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML032_NX032_KX01_clKernel);
        cgemm_Col_NC_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX032_NL032_KX01_clKernel);
        cgemm_Col_NC_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML032_NL032_KX01_clKernel);
        cgemm_Col_NC_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX032_NX032_KX08_clKernel);
        cgemm_Col_NC_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML032_NX032_KX08_clKernel);
        cgemm_Col_NC_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX032_NL032_KX08_clKernel);
        cgemm_Col_NC_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML032_NL032_KX08_clKernel);
        cgemm_Col_NC_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX048_NX048_KX01_clKernel);
        cgemm_Col_NC_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML048_NX048_KX01_clKernel);
        cgemm_Col_NC_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX048_NL048_KX01_clKernel);
        cgemm_Col_NC_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML048_NL048_KX01_clKernel);
        cgemm_Col_NC_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX048_NX048_KX08_clKernel);
        cgemm_Col_NC_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML048_NX048_KX08_clKernel);
        cgemm_Col_NC_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX048_NL048_KX08_clKernel);
        cgemm_Col_NC_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML048_NL048_KX08_clKernel);
        cgemm_Col_NC_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX064_NX064_KX01_clKernel);
        cgemm_Col_NC_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML064_NX064_KX01_clKernel);
        cgemm_Col_NC_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX064_NL064_KX01_clKernel);
        cgemm_Col_NC_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML064_NL064_KX01_clKernel);
        cgemm_Col_NC_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX064_NX064_KX08_clKernel);
        cgemm_Col_NC_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML064_NX064_KX08_clKernel);
        cgemm_Col_NC_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX064_NL064_KX08_clKernel);
        cgemm_Col_NC_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML064_NL064_KX08_clKernel);
        cgemm_Col_NC_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX080_NX080_KX01_clKernel);
        cgemm_Col_NC_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML080_NX080_KX01_clKernel);
        cgemm_Col_NC_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX080_NL080_KX01_clKernel);
        cgemm_Col_NC_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML080_NL080_KX01_clKernel);
        cgemm_Col_NC_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX080_NX080_KX08_clKernel);
        cgemm_Col_NC_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML080_NX080_KX08_clKernel);
        cgemm_Col_NC_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX080_NL080_KX08_clKernel);
        cgemm_Col_NC_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML080_NL080_KX08_clKernel);
        cgemm_Col_NC_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX096_NX096_KX01_clKernel);
        cgemm_Col_NC_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML096_NX096_KX01_clKernel);
        cgemm_Col_NC_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX096_NL096_KX01_clKernel);
        cgemm_Col_NC_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML096_NL096_KX01_clKernel);
        cgemm_Col_NC_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX096_NX096_KX08_clKernel);
        cgemm_Col_NC_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML096_NX096_KX08_clKernel);
        cgemm_Col_NC_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_MX096_NL096_KX08_clKernel);
        cgemm_Col_NC_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B0_ML096_NL096_KX08_clKernel);
        cgemm_Col_NC_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX016_NX016_KX01_clKernel);
        cgemm_Col_NC_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML016_NX016_KX01_clKernel);
        cgemm_Col_NC_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX016_NL016_KX01_clKernel);
        cgemm_Col_NC_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML016_NL016_KX01_clKernel);
        cgemm_Col_NC_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX016_NX016_KX08_clKernel);
        cgemm_Col_NC_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML016_NX016_KX08_clKernel);
        cgemm_Col_NC_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX016_NL016_KX08_clKernel);
        cgemm_Col_NC_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML016_NL016_KX08_clKernel);
        cgemm_Col_NC_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX032_NX032_KX01_clKernel);
        cgemm_Col_NC_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML032_NX032_KX01_clKernel);
        cgemm_Col_NC_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX032_NL032_KX01_clKernel);
        cgemm_Col_NC_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML032_NL032_KX01_clKernel);
        cgemm_Col_NC_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX032_NX032_KX08_clKernel);
        cgemm_Col_NC_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML032_NX032_KX08_clKernel);
        cgemm_Col_NC_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX032_NL032_KX08_clKernel);
        cgemm_Col_NC_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML032_NL032_KX08_clKernel);
        cgemm_Col_NC_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX048_NX048_KX01_clKernel);
        cgemm_Col_NC_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML048_NX048_KX01_clKernel);
        cgemm_Col_NC_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX048_NL048_KX01_clKernel);
        cgemm_Col_NC_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML048_NL048_KX01_clKernel);
        cgemm_Col_NC_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX048_NX048_KX08_clKernel);
        cgemm_Col_NC_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML048_NX048_KX08_clKernel);
        cgemm_Col_NC_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX048_NL048_KX08_clKernel);
        cgemm_Col_NC_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML048_NL048_KX08_clKernel);
        cgemm_Col_NC_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX064_NX064_KX01_clKernel);
        cgemm_Col_NC_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML064_NX064_KX01_clKernel);
        cgemm_Col_NC_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX064_NL064_KX01_clKernel);
        cgemm_Col_NC_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML064_NL064_KX01_clKernel);
        cgemm_Col_NC_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX064_NX064_KX08_clKernel);
        cgemm_Col_NC_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML064_NX064_KX08_clKernel);
        cgemm_Col_NC_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX064_NL064_KX08_clKernel);
        cgemm_Col_NC_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML064_NL064_KX08_clKernel);
        cgemm_Col_NC_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX080_NX080_KX01_clKernel);
        cgemm_Col_NC_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML080_NX080_KX01_clKernel);
        cgemm_Col_NC_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX080_NL080_KX01_clKernel);
        cgemm_Col_NC_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML080_NL080_KX01_clKernel);
        cgemm_Col_NC_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX080_NX080_KX08_clKernel);
        cgemm_Col_NC_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML080_NX080_KX08_clKernel);
        cgemm_Col_NC_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX080_NL080_KX08_clKernel);
        cgemm_Col_NC_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML080_NL080_KX08_clKernel);
        cgemm_Col_NC_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX096_NX096_KX01_clKernel);
        cgemm_Col_NC_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML096_NX096_KX01_clKernel);
        cgemm_Col_NC_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX096_NL096_KX01_clKernel);
        cgemm_Col_NC_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML096_NL096_KX01_clKernel);
        cgemm_Col_NC_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX096_NX096_KX08_clKernel);
        cgemm_Col_NC_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML096_NX096_KX08_clKernel);
        cgemm_Col_NC_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_MX096_NL096_KX08_clKernel);
        cgemm_Col_NC_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_NC_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_NC_B1_ML096_NL096_KX08_clKernel);
        cgemm_Col_NC_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX016_NX016_KX01_clKernel);
        cgemm_Col_TN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML016_NX016_KX01_clKernel);
        cgemm_Col_TN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX016_NL016_KX01_clKernel);
        cgemm_Col_TN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML016_NL016_KX01_clKernel);
        cgemm_Col_TN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX016_NX016_KX08_clKernel);
        cgemm_Col_TN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML016_NX016_KX08_clKernel);
        cgemm_Col_TN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX016_NL016_KX08_clKernel);
        cgemm_Col_TN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML016_NL016_KX08_clKernel);
        cgemm_Col_TN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX032_NX032_KX01_clKernel);
        cgemm_Col_TN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML032_NX032_KX01_clKernel);
        cgemm_Col_TN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX032_NL032_KX01_clKernel);
        cgemm_Col_TN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML032_NL032_KX01_clKernel);
        cgemm_Col_TN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX032_NX032_KX08_clKernel);
        cgemm_Col_TN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML032_NX032_KX08_clKernel);
        cgemm_Col_TN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX032_NL032_KX08_clKernel);
        cgemm_Col_TN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML032_NL032_KX08_clKernel);
        cgemm_Col_TN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX048_NX048_KX01_clKernel);
        cgemm_Col_TN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML048_NX048_KX01_clKernel);
        cgemm_Col_TN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX048_NL048_KX01_clKernel);
        cgemm_Col_TN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML048_NL048_KX01_clKernel);
        cgemm_Col_TN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX048_NX048_KX08_clKernel);
        cgemm_Col_TN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML048_NX048_KX08_clKernel);
        cgemm_Col_TN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX048_NL048_KX08_clKernel);
        cgemm_Col_TN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML048_NL048_KX08_clKernel);
        cgemm_Col_TN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX064_NX064_KX01_clKernel);
        cgemm_Col_TN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML064_NX064_KX01_clKernel);
        cgemm_Col_TN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX064_NL064_KX01_clKernel);
        cgemm_Col_TN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML064_NL064_KX01_clKernel);
        cgemm_Col_TN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX064_NX064_KX08_clKernel);
        cgemm_Col_TN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML064_NX064_KX08_clKernel);
        cgemm_Col_TN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX064_NL064_KX08_clKernel);
        cgemm_Col_TN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML064_NL064_KX08_clKernel);
        cgemm_Col_TN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX080_NX080_KX01_clKernel);
        cgemm_Col_TN_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML080_NX080_KX01_clKernel);
        cgemm_Col_TN_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX080_NL080_KX01_clKernel);
        cgemm_Col_TN_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML080_NL080_KX01_clKernel);
        cgemm_Col_TN_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX080_NX080_KX08_clKernel);
        cgemm_Col_TN_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML080_NX080_KX08_clKernel);
        cgemm_Col_TN_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX080_NL080_KX08_clKernel);
        cgemm_Col_TN_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML080_NL080_KX08_clKernel);
        cgemm_Col_TN_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX096_NX096_KX01_clKernel);
        cgemm_Col_TN_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML096_NX096_KX01_clKernel);
        cgemm_Col_TN_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX096_NL096_KX01_clKernel);
        cgemm_Col_TN_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML096_NL096_KX01_clKernel);
        cgemm_Col_TN_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX096_NX096_KX08_clKernel);
        cgemm_Col_TN_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML096_NX096_KX08_clKernel);
        cgemm_Col_TN_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_MX096_NL096_KX08_clKernel);
        cgemm_Col_TN_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B0_ML096_NL096_KX08_clKernel);
        cgemm_Col_TN_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX016_NX016_KX01_clKernel);
        cgemm_Col_TN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML016_NX016_KX01_clKernel);
        cgemm_Col_TN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX016_NL016_KX01_clKernel);
        cgemm_Col_TN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML016_NL016_KX01_clKernel);
        cgemm_Col_TN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX016_NX016_KX08_clKernel);
        cgemm_Col_TN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML016_NX016_KX08_clKernel);
        cgemm_Col_TN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX016_NL016_KX08_clKernel);
        cgemm_Col_TN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML016_NL016_KX08_clKernel);
        cgemm_Col_TN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX032_NX032_KX01_clKernel);
        cgemm_Col_TN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML032_NX032_KX01_clKernel);
        cgemm_Col_TN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX032_NL032_KX01_clKernel);
        cgemm_Col_TN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML032_NL032_KX01_clKernel);
        cgemm_Col_TN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX032_NX032_KX08_clKernel);
        cgemm_Col_TN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML032_NX032_KX08_clKernel);
        cgemm_Col_TN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX032_NL032_KX08_clKernel);
        cgemm_Col_TN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML032_NL032_KX08_clKernel);
        cgemm_Col_TN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX048_NX048_KX01_clKernel);
        cgemm_Col_TN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML048_NX048_KX01_clKernel);
        cgemm_Col_TN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX048_NL048_KX01_clKernel);
        cgemm_Col_TN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML048_NL048_KX01_clKernel);
        cgemm_Col_TN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX048_NX048_KX08_clKernel);
        cgemm_Col_TN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML048_NX048_KX08_clKernel);
        cgemm_Col_TN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX048_NL048_KX08_clKernel);
        cgemm_Col_TN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML048_NL048_KX08_clKernel);
        cgemm_Col_TN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX064_NX064_KX01_clKernel);
        cgemm_Col_TN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML064_NX064_KX01_clKernel);
        cgemm_Col_TN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX064_NL064_KX01_clKernel);
        cgemm_Col_TN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML064_NL064_KX01_clKernel);
        cgemm_Col_TN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX064_NX064_KX08_clKernel);
        cgemm_Col_TN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML064_NX064_KX08_clKernel);
        cgemm_Col_TN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX064_NL064_KX08_clKernel);
        cgemm_Col_TN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML064_NL064_KX08_clKernel);
        cgemm_Col_TN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX080_NX080_KX01_clKernel);
        cgemm_Col_TN_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML080_NX080_KX01_clKernel);
        cgemm_Col_TN_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX080_NL080_KX01_clKernel);
        cgemm_Col_TN_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML080_NL080_KX01_clKernel);
        cgemm_Col_TN_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX080_NX080_KX08_clKernel);
        cgemm_Col_TN_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML080_NX080_KX08_clKernel);
        cgemm_Col_TN_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX080_NL080_KX08_clKernel);
        cgemm_Col_TN_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML080_NL080_KX08_clKernel);
        cgemm_Col_TN_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX096_NX096_KX01_clKernel);
        cgemm_Col_TN_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML096_NX096_KX01_clKernel);
        cgemm_Col_TN_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX096_NL096_KX01_clKernel);
        cgemm_Col_TN_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML096_NL096_KX01_clKernel);
        cgemm_Col_TN_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX096_NX096_KX08_clKernel);
        cgemm_Col_TN_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML096_NX096_KX08_clKernel);
        cgemm_Col_TN_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_MX096_NL096_KX08_clKernel);
        cgemm_Col_TN_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TN_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TN_B1_ML096_NL096_KX08_clKernel);
        cgemm_Col_TN_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX016_NX016_KX01_clKernel);
        cgemm_Col_TT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML016_NX016_KX01_clKernel);
        cgemm_Col_TT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX016_NL016_KX01_clKernel);
        cgemm_Col_TT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML016_NL016_KX01_clKernel);
        cgemm_Col_TT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX016_NX016_KX08_clKernel);
        cgemm_Col_TT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML016_NX016_KX08_clKernel);
        cgemm_Col_TT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX016_NL016_KX08_clKernel);
        cgemm_Col_TT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML016_NL016_KX08_clKernel);
        cgemm_Col_TT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX032_NX032_KX01_clKernel);
        cgemm_Col_TT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML032_NX032_KX01_clKernel);
        cgemm_Col_TT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX032_NL032_KX01_clKernel);
        cgemm_Col_TT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML032_NL032_KX01_clKernel);
        cgemm_Col_TT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX032_NX032_KX08_clKernel);
        cgemm_Col_TT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML032_NX032_KX08_clKernel);
        cgemm_Col_TT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX032_NL032_KX08_clKernel);
        cgemm_Col_TT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML032_NL032_KX08_clKernel);
        cgemm_Col_TT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX048_NX048_KX01_clKernel);
        cgemm_Col_TT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML048_NX048_KX01_clKernel);
        cgemm_Col_TT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX048_NL048_KX01_clKernel);
        cgemm_Col_TT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML048_NL048_KX01_clKernel);
        cgemm_Col_TT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX048_NX048_KX08_clKernel);
        cgemm_Col_TT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML048_NX048_KX08_clKernel);
        cgemm_Col_TT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX048_NL048_KX08_clKernel);
        cgemm_Col_TT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML048_NL048_KX08_clKernel);
        cgemm_Col_TT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX064_NX064_KX01_clKernel);
        cgemm_Col_TT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML064_NX064_KX01_clKernel);
        cgemm_Col_TT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX064_NL064_KX01_clKernel);
        cgemm_Col_TT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML064_NL064_KX01_clKernel);
        cgemm_Col_TT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX064_NX064_KX08_clKernel);
        cgemm_Col_TT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML064_NX064_KX08_clKernel);
        cgemm_Col_TT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX064_NL064_KX08_clKernel);
        cgemm_Col_TT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML064_NL064_KX08_clKernel);
        cgemm_Col_TT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX080_NX080_KX01_clKernel);
        cgemm_Col_TT_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML080_NX080_KX01_clKernel);
        cgemm_Col_TT_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX080_NL080_KX01_clKernel);
        cgemm_Col_TT_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML080_NL080_KX01_clKernel);
        cgemm_Col_TT_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX080_NX080_KX08_clKernel);
        cgemm_Col_TT_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML080_NX080_KX08_clKernel);
        cgemm_Col_TT_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX080_NL080_KX08_clKernel);
        cgemm_Col_TT_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML080_NL080_KX08_clKernel);
        cgemm_Col_TT_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX096_NX096_KX01_clKernel);
        cgemm_Col_TT_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML096_NX096_KX01_clKernel);
        cgemm_Col_TT_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX096_NL096_KX01_clKernel);
        cgemm_Col_TT_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML096_NL096_KX01_clKernel);
        cgemm_Col_TT_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX096_NX096_KX08_clKernel);
        cgemm_Col_TT_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML096_NX096_KX08_clKernel);
        cgemm_Col_TT_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_MX096_NL096_KX08_clKernel);
        cgemm_Col_TT_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B0_ML096_NL096_KX08_clKernel);
        cgemm_Col_TT_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX016_NX016_KX01_clKernel);
        cgemm_Col_TT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML016_NX016_KX01_clKernel);
        cgemm_Col_TT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX016_NL016_KX01_clKernel);
        cgemm_Col_TT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML016_NL016_KX01_clKernel);
        cgemm_Col_TT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX016_NX016_KX08_clKernel);
        cgemm_Col_TT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML016_NX016_KX08_clKernel);
        cgemm_Col_TT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX016_NL016_KX08_clKernel);
        cgemm_Col_TT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML016_NL016_KX08_clKernel);
        cgemm_Col_TT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX032_NX032_KX01_clKernel);
        cgemm_Col_TT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML032_NX032_KX01_clKernel);
        cgemm_Col_TT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX032_NL032_KX01_clKernel);
        cgemm_Col_TT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML032_NL032_KX01_clKernel);
        cgemm_Col_TT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX032_NX032_KX08_clKernel);
        cgemm_Col_TT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML032_NX032_KX08_clKernel);
        cgemm_Col_TT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX032_NL032_KX08_clKernel);
        cgemm_Col_TT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML032_NL032_KX08_clKernel);
        cgemm_Col_TT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX048_NX048_KX01_clKernel);
        cgemm_Col_TT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML048_NX048_KX01_clKernel);
        cgemm_Col_TT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX048_NL048_KX01_clKernel);
        cgemm_Col_TT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML048_NL048_KX01_clKernel);
        cgemm_Col_TT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX048_NX048_KX08_clKernel);
        cgemm_Col_TT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML048_NX048_KX08_clKernel);
        cgemm_Col_TT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX048_NL048_KX08_clKernel);
        cgemm_Col_TT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML048_NL048_KX08_clKernel);
        cgemm_Col_TT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX064_NX064_KX01_clKernel);
        cgemm_Col_TT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML064_NX064_KX01_clKernel);
        cgemm_Col_TT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX064_NL064_KX01_clKernel);
        cgemm_Col_TT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML064_NL064_KX01_clKernel);
        cgemm_Col_TT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX064_NX064_KX08_clKernel);
        cgemm_Col_TT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML064_NX064_KX08_clKernel);
        cgemm_Col_TT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX064_NL064_KX08_clKernel);
        cgemm_Col_TT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML064_NL064_KX08_clKernel);
        cgemm_Col_TT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX080_NX080_KX01_clKernel);
        cgemm_Col_TT_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML080_NX080_KX01_clKernel);
        cgemm_Col_TT_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX080_NL080_KX01_clKernel);
        cgemm_Col_TT_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML080_NL080_KX01_clKernel);
        cgemm_Col_TT_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX080_NX080_KX08_clKernel);
        cgemm_Col_TT_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML080_NX080_KX08_clKernel);
        cgemm_Col_TT_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX080_NL080_KX08_clKernel);
        cgemm_Col_TT_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML080_NL080_KX08_clKernel);
        cgemm_Col_TT_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX096_NX096_KX01_clKernel);
        cgemm_Col_TT_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML096_NX096_KX01_clKernel);
        cgemm_Col_TT_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX096_NL096_KX01_clKernel);
        cgemm_Col_TT_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML096_NL096_KX01_clKernel);
        cgemm_Col_TT_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX096_NX096_KX08_clKernel);
        cgemm_Col_TT_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML096_NX096_KX08_clKernel);
        cgemm_Col_TT_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_MX096_NL096_KX08_clKernel);
        cgemm_Col_TT_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TT_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TT_B1_ML096_NL096_KX08_clKernel);
        cgemm_Col_TT_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX016_NX016_KX01_clKernel);
        cgemm_Col_TC_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML016_NX016_KX01_clKernel);
        cgemm_Col_TC_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX016_NL016_KX01_clKernel);
        cgemm_Col_TC_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML016_NL016_KX01_clKernel);
        cgemm_Col_TC_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX016_NX016_KX08_clKernel);
        cgemm_Col_TC_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML016_NX016_KX08_clKernel);
        cgemm_Col_TC_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX016_NL016_KX08_clKernel);
        cgemm_Col_TC_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML016_NL016_KX08_clKernel);
        cgemm_Col_TC_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX032_NX032_KX01_clKernel);
        cgemm_Col_TC_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML032_NX032_KX01_clKernel);
        cgemm_Col_TC_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX032_NL032_KX01_clKernel);
        cgemm_Col_TC_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML032_NL032_KX01_clKernel);
        cgemm_Col_TC_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX032_NX032_KX08_clKernel);
        cgemm_Col_TC_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML032_NX032_KX08_clKernel);
        cgemm_Col_TC_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX032_NL032_KX08_clKernel);
        cgemm_Col_TC_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML032_NL032_KX08_clKernel);
        cgemm_Col_TC_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX048_NX048_KX01_clKernel);
        cgemm_Col_TC_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML048_NX048_KX01_clKernel);
        cgemm_Col_TC_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX048_NL048_KX01_clKernel);
        cgemm_Col_TC_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML048_NL048_KX01_clKernel);
        cgemm_Col_TC_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX048_NX048_KX08_clKernel);
        cgemm_Col_TC_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML048_NX048_KX08_clKernel);
        cgemm_Col_TC_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX048_NL048_KX08_clKernel);
        cgemm_Col_TC_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML048_NL048_KX08_clKernel);
        cgemm_Col_TC_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX064_NX064_KX01_clKernel);
        cgemm_Col_TC_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML064_NX064_KX01_clKernel);
        cgemm_Col_TC_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX064_NL064_KX01_clKernel);
        cgemm_Col_TC_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML064_NL064_KX01_clKernel);
        cgemm_Col_TC_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX064_NX064_KX08_clKernel);
        cgemm_Col_TC_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML064_NX064_KX08_clKernel);
        cgemm_Col_TC_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX064_NL064_KX08_clKernel);
        cgemm_Col_TC_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML064_NL064_KX08_clKernel);
        cgemm_Col_TC_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX080_NX080_KX01_clKernel);
        cgemm_Col_TC_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML080_NX080_KX01_clKernel);
        cgemm_Col_TC_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX080_NL080_KX01_clKernel);
        cgemm_Col_TC_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML080_NL080_KX01_clKernel);
        cgemm_Col_TC_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX080_NX080_KX08_clKernel);
        cgemm_Col_TC_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML080_NX080_KX08_clKernel);
        cgemm_Col_TC_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX080_NL080_KX08_clKernel);
        cgemm_Col_TC_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML080_NL080_KX08_clKernel);
        cgemm_Col_TC_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX096_NX096_KX01_clKernel);
        cgemm_Col_TC_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML096_NX096_KX01_clKernel);
        cgemm_Col_TC_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX096_NL096_KX01_clKernel);
        cgemm_Col_TC_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML096_NL096_KX01_clKernel);
        cgemm_Col_TC_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX096_NX096_KX08_clKernel);
        cgemm_Col_TC_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML096_NX096_KX08_clKernel);
        cgemm_Col_TC_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_MX096_NL096_KX08_clKernel);
        cgemm_Col_TC_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B0_ML096_NL096_KX08_clKernel);
        cgemm_Col_TC_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX016_NX016_KX01_clKernel);
        cgemm_Col_TC_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML016_NX016_KX01_clKernel);
        cgemm_Col_TC_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX016_NL016_KX01_clKernel);
        cgemm_Col_TC_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML016_NL016_KX01_clKernel);
        cgemm_Col_TC_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX016_NX016_KX08_clKernel);
        cgemm_Col_TC_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML016_NX016_KX08_clKernel);
        cgemm_Col_TC_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX016_NL016_KX08_clKernel);
        cgemm_Col_TC_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML016_NL016_KX08_clKernel);
        cgemm_Col_TC_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX032_NX032_KX01_clKernel);
        cgemm_Col_TC_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML032_NX032_KX01_clKernel);
        cgemm_Col_TC_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX032_NL032_KX01_clKernel);
        cgemm_Col_TC_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML032_NL032_KX01_clKernel);
        cgemm_Col_TC_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX032_NX032_KX08_clKernel);
        cgemm_Col_TC_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML032_NX032_KX08_clKernel);
        cgemm_Col_TC_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX032_NL032_KX08_clKernel);
        cgemm_Col_TC_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML032_NL032_KX08_clKernel);
        cgemm_Col_TC_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX048_NX048_KX01_clKernel);
        cgemm_Col_TC_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML048_NX048_KX01_clKernel);
        cgemm_Col_TC_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX048_NL048_KX01_clKernel);
        cgemm_Col_TC_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML048_NL048_KX01_clKernel);
        cgemm_Col_TC_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX048_NX048_KX08_clKernel);
        cgemm_Col_TC_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML048_NX048_KX08_clKernel);
        cgemm_Col_TC_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX048_NL048_KX08_clKernel);
        cgemm_Col_TC_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML048_NL048_KX08_clKernel);
        cgemm_Col_TC_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX064_NX064_KX01_clKernel);
        cgemm_Col_TC_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML064_NX064_KX01_clKernel);
        cgemm_Col_TC_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX064_NL064_KX01_clKernel);
        cgemm_Col_TC_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML064_NL064_KX01_clKernel);
        cgemm_Col_TC_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX064_NX064_KX08_clKernel);
        cgemm_Col_TC_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML064_NX064_KX08_clKernel);
        cgemm_Col_TC_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX064_NL064_KX08_clKernel);
        cgemm_Col_TC_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML064_NL064_KX08_clKernel);
        cgemm_Col_TC_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX080_NX080_KX01_clKernel);
        cgemm_Col_TC_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML080_NX080_KX01_clKernel);
        cgemm_Col_TC_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX080_NL080_KX01_clKernel);
        cgemm_Col_TC_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML080_NL080_KX01_clKernel);
        cgemm_Col_TC_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX080_NX080_KX08_clKernel);
        cgemm_Col_TC_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML080_NX080_KX08_clKernel);
        cgemm_Col_TC_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX080_NL080_KX08_clKernel);
        cgemm_Col_TC_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML080_NL080_KX08_clKernel);
        cgemm_Col_TC_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX096_NX096_KX01_clKernel);
        cgemm_Col_TC_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML096_NX096_KX01_clKernel);
        cgemm_Col_TC_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX096_NL096_KX01_clKernel);
        cgemm_Col_TC_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML096_NL096_KX01_clKernel);
        cgemm_Col_TC_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX096_NX096_KX08_clKernel);
        cgemm_Col_TC_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML096_NX096_KX08_clKernel);
        cgemm_Col_TC_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_MX096_NL096_KX08_clKernel);
        cgemm_Col_TC_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_TC_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_TC_B1_ML096_NL096_KX08_clKernel);
        cgemm_Col_TC_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX016_NX016_KX01_clKernel);
        cgemm_Col_CN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML016_NX016_KX01_clKernel);
        cgemm_Col_CN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX016_NL016_KX01_clKernel);
        cgemm_Col_CN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML016_NL016_KX01_clKernel);
        cgemm_Col_CN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX016_NX016_KX08_clKernel);
        cgemm_Col_CN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML016_NX016_KX08_clKernel);
        cgemm_Col_CN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX016_NL016_KX08_clKernel);
        cgemm_Col_CN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML016_NL016_KX08_clKernel);
        cgemm_Col_CN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX032_NX032_KX01_clKernel);
        cgemm_Col_CN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML032_NX032_KX01_clKernel);
        cgemm_Col_CN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX032_NL032_KX01_clKernel);
        cgemm_Col_CN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML032_NL032_KX01_clKernel);
        cgemm_Col_CN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX032_NX032_KX08_clKernel);
        cgemm_Col_CN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML032_NX032_KX08_clKernel);
        cgemm_Col_CN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX032_NL032_KX08_clKernel);
        cgemm_Col_CN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML032_NL032_KX08_clKernel);
        cgemm_Col_CN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX048_NX048_KX01_clKernel);
        cgemm_Col_CN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML048_NX048_KX01_clKernel);
        cgemm_Col_CN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX048_NL048_KX01_clKernel);
        cgemm_Col_CN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML048_NL048_KX01_clKernel);
        cgemm_Col_CN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX048_NX048_KX08_clKernel);
        cgemm_Col_CN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML048_NX048_KX08_clKernel);
        cgemm_Col_CN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX048_NL048_KX08_clKernel);
        cgemm_Col_CN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML048_NL048_KX08_clKernel);
        cgemm_Col_CN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX064_NX064_KX01_clKernel);
        cgemm_Col_CN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML064_NX064_KX01_clKernel);
        cgemm_Col_CN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX064_NL064_KX01_clKernel);
        cgemm_Col_CN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML064_NL064_KX01_clKernel);
        cgemm_Col_CN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX064_NX064_KX08_clKernel);
        cgemm_Col_CN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML064_NX064_KX08_clKernel);
        cgemm_Col_CN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX064_NL064_KX08_clKernel);
        cgemm_Col_CN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML064_NL064_KX08_clKernel);
        cgemm_Col_CN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX080_NX080_KX01_clKernel);
        cgemm_Col_CN_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML080_NX080_KX01_clKernel);
        cgemm_Col_CN_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX080_NL080_KX01_clKernel);
        cgemm_Col_CN_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML080_NL080_KX01_clKernel);
        cgemm_Col_CN_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX080_NX080_KX08_clKernel);
        cgemm_Col_CN_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML080_NX080_KX08_clKernel);
        cgemm_Col_CN_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX080_NL080_KX08_clKernel);
        cgemm_Col_CN_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML080_NL080_KX08_clKernel);
        cgemm_Col_CN_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX096_NX096_KX01_clKernel);
        cgemm_Col_CN_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML096_NX096_KX01_clKernel);
        cgemm_Col_CN_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX096_NL096_KX01_clKernel);
        cgemm_Col_CN_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML096_NL096_KX01_clKernel);
        cgemm_Col_CN_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX096_NX096_KX08_clKernel);
        cgemm_Col_CN_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML096_NX096_KX08_clKernel);
        cgemm_Col_CN_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_MX096_NL096_KX08_clKernel);
        cgemm_Col_CN_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B0_ML096_NL096_KX08_clKernel);
        cgemm_Col_CN_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX016_NX016_KX01_clKernel);
        cgemm_Col_CN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML016_NX016_KX01_clKernel);
        cgemm_Col_CN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX016_NL016_KX01_clKernel);
        cgemm_Col_CN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML016_NL016_KX01_clKernel);
        cgemm_Col_CN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX016_NX016_KX08_clKernel);
        cgemm_Col_CN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML016_NX016_KX08_clKernel);
        cgemm_Col_CN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX016_NL016_KX08_clKernel);
        cgemm_Col_CN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML016_NL016_KX08_clKernel);
        cgemm_Col_CN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX032_NX032_KX01_clKernel);
        cgemm_Col_CN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML032_NX032_KX01_clKernel);
        cgemm_Col_CN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX032_NL032_KX01_clKernel);
        cgemm_Col_CN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML032_NL032_KX01_clKernel);
        cgemm_Col_CN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX032_NX032_KX08_clKernel);
        cgemm_Col_CN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML032_NX032_KX08_clKernel);
        cgemm_Col_CN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX032_NL032_KX08_clKernel);
        cgemm_Col_CN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML032_NL032_KX08_clKernel);
        cgemm_Col_CN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX048_NX048_KX01_clKernel);
        cgemm_Col_CN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML048_NX048_KX01_clKernel);
        cgemm_Col_CN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX048_NL048_KX01_clKernel);
        cgemm_Col_CN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML048_NL048_KX01_clKernel);
        cgemm_Col_CN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX048_NX048_KX08_clKernel);
        cgemm_Col_CN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML048_NX048_KX08_clKernel);
        cgemm_Col_CN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX048_NL048_KX08_clKernel);
        cgemm_Col_CN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML048_NL048_KX08_clKernel);
        cgemm_Col_CN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX064_NX064_KX01_clKernel);
        cgemm_Col_CN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML064_NX064_KX01_clKernel);
        cgemm_Col_CN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX064_NL064_KX01_clKernel);
        cgemm_Col_CN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML064_NL064_KX01_clKernel);
        cgemm_Col_CN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX064_NX064_KX08_clKernel);
        cgemm_Col_CN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML064_NX064_KX08_clKernel);
        cgemm_Col_CN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX064_NL064_KX08_clKernel);
        cgemm_Col_CN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML064_NL064_KX08_clKernel);
        cgemm_Col_CN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX080_NX080_KX01_clKernel);
        cgemm_Col_CN_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML080_NX080_KX01_clKernel);
        cgemm_Col_CN_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX080_NL080_KX01_clKernel);
        cgemm_Col_CN_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML080_NL080_KX01_clKernel);
        cgemm_Col_CN_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX080_NX080_KX08_clKernel);
        cgemm_Col_CN_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML080_NX080_KX08_clKernel);
        cgemm_Col_CN_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX080_NL080_KX08_clKernel);
        cgemm_Col_CN_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML080_NL080_KX08_clKernel);
        cgemm_Col_CN_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX096_NX096_KX01_clKernel);
        cgemm_Col_CN_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML096_NX096_KX01_clKernel);
        cgemm_Col_CN_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX096_NL096_KX01_clKernel);
        cgemm_Col_CN_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML096_NL096_KX01_clKernel);
        cgemm_Col_CN_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX096_NX096_KX08_clKernel);
        cgemm_Col_CN_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML096_NX096_KX08_clKernel);
        cgemm_Col_CN_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_MX096_NL096_KX08_clKernel);
        cgemm_Col_CN_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CN_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CN_B1_ML096_NL096_KX08_clKernel);
        cgemm_Col_CN_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX016_NX016_KX01_clKernel);
        cgemm_Col_CT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML016_NX016_KX01_clKernel);
        cgemm_Col_CT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX016_NL016_KX01_clKernel);
        cgemm_Col_CT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML016_NL016_KX01_clKernel);
        cgemm_Col_CT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX016_NX016_KX08_clKernel);
        cgemm_Col_CT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML016_NX016_KX08_clKernel);
        cgemm_Col_CT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX016_NL016_KX08_clKernel);
        cgemm_Col_CT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML016_NL016_KX08_clKernel);
        cgemm_Col_CT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX032_NX032_KX01_clKernel);
        cgemm_Col_CT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML032_NX032_KX01_clKernel);
        cgemm_Col_CT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX032_NL032_KX01_clKernel);
        cgemm_Col_CT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML032_NL032_KX01_clKernel);
        cgemm_Col_CT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX032_NX032_KX08_clKernel);
        cgemm_Col_CT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML032_NX032_KX08_clKernel);
        cgemm_Col_CT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX032_NL032_KX08_clKernel);
        cgemm_Col_CT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML032_NL032_KX08_clKernel);
        cgemm_Col_CT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX048_NX048_KX01_clKernel);
        cgemm_Col_CT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML048_NX048_KX01_clKernel);
        cgemm_Col_CT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX048_NL048_KX01_clKernel);
        cgemm_Col_CT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML048_NL048_KX01_clKernel);
        cgemm_Col_CT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX048_NX048_KX08_clKernel);
        cgemm_Col_CT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML048_NX048_KX08_clKernel);
        cgemm_Col_CT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX048_NL048_KX08_clKernel);
        cgemm_Col_CT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML048_NL048_KX08_clKernel);
        cgemm_Col_CT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX064_NX064_KX01_clKernel);
        cgemm_Col_CT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML064_NX064_KX01_clKernel);
        cgemm_Col_CT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX064_NL064_KX01_clKernel);
        cgemm_Col_CT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML064_NL064_KX01_clKernel);
        cgemm_Col_CT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX064_NX064_KX08_clKernel);
        cgemm_Col_CT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML064_NX064_KX08_clKernel);
        cgemm_Col_CT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX064_NL064_KX08_clKernel);
        cgemm_Col_CT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML064_NL064_KX08_clKernel);
        cgemm_Col_CT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX080_NX080_KX01_clKernel);
        cgemm_Col_CT_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML080_NX080_KX01_clKernel);
        cgemm_Col_CT_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX080_NL080_KX01_clKernel);
        cgemm_Col_CT_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML080_NL080_KX01_clKernel);
        cgemm_Col_CT_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX080_NX080_KX08_clKernel);
        cgemm_Col_CT_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML080_NX080_KX08_clKernel);
        cgemm_Col_CT_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX080_NL080_KX08_clKernel);
        cgemm_Col_CT_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML080_NL080_KX08_clKernel);
        cgemm_Col_CT_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX096_NX096_KX01_clKernel);
        cgemm_Col_CT_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML096_NX096_KX01_clKernel);
        cgemm_Col_CT_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX096_NL096_KX01_clKernel);
        cgemm_Col_CT_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML096_NL096_KX01_clKernel);
        cgemm_Col_CT_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX096_NX096_KX08_clKernel);
        cgemm_Col_CT_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML096_NX096_KX08_clKernel);
        cgemm_Col_CT_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_MX096_NL096_KX08_clKernel);
        cgemm_Col_CT_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B0_ML096_NL096_KX08_clKernel);
        cgemm_Col_CT_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX016_NX016_KX01_clKernel);
        cgemm_Col_CT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML016_NX016_KX01_clKernel);
        cgemm_Col_CT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX016_NL016_KX01_clKernel);
        cgemm_Col_CT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML016_NL016_KX01_clKernel);
        cgemm_Col_CT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX016_NX016_KX08_clKernel);
        cgemm_Col_CT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML016_NX016_KX08_clKernel);
        cgemm_Col_CT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX016_NL016_KX08_clKernel);
        cgemm_Col_CT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML016_NL016_KX08_clKernel);
        cgemm_Col_CT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX032_NX032_KX01_clKernel);
        cgemm_Col_CT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML032_NX032_KX01_clKernel);
        cgemm_Col_CT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX032_NL032_KX01_clKernel);
        cgemm_Col_CT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML032_NL032_KX01_clKernel);
        cgemm_Col_CT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX032_NX032_KX08_clKernel);
        cgemm_Col_CT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML032_NX032_KX08_clKernel);
        cgemm_Col_CT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX032_NL032_KX08_clKernel);
        cgemm_Col_CT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML032_NL032_KX08_clKernel);
        cgemm_Col_CT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX048_NX048_KX01_clKernel);
        cgemm_Col_CT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML048_NX048_KX01_clKernel);
        cgemm_Col_CT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX048_NL048_KX01_clKernel);
        cgemm_Col_CT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML048_NL048_KX01_clKernel);
        cgemm_Col_CT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX048_NX048_KX08_clKernel);
        cgemm_Col_CT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML048_NX048_KX08_clKernel);
        cgemm_Col_CT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX048_NL048_KX08_clKernel);
        cgemm_Col_CT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML048_NL048_KX08_clKernel);
        cgemm_Col_CT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX064_NX064_KX01_clKernel);
        cgemm_Col_CT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML064_NX064_KX01_clKernel);
        cgemm_Col_CT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX064_NL064_KX01_clKernel);
        cgemm_Col_CT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML064_NL064_KX01_clKernel);
        cgemm_Col_CT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX064_NX064_KX08_clKernel);
        cgemm_Col_CT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML064_NX064_KX08_clKernel);
        cgemm_Col_CT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX064_NL064_KX08_clKernel);
        cgemm_Col_CT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML064_NL064_KX08_clKernel);
        cgemm_Col_CT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX080_NX080_KX01_clKernel);
        cgemm_Col_CT_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML080_NX080_KX01_clKernel);
        cgemm_Col_CT_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX080_NL080_KX01_clKernel);
        cgemm_Col_CT_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML080_NL080_KX01_clKernel);
        cgemm_Col_CT_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX080_NX080_KX08_clKernel);
        cgemm_Col_CT_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML080_NX080_KX08_clKernel);
        cgemm_Col_CT_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX080_NL080_KX08_clKernel);
        cgemm_Col_CT_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML080_NL080_KX08_clKernel);
        cgemm_Col_CT_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX096_NX096_KX01_clKernel);
        cgemm_Col_CT_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML096_NX096_KX01_clKernel);
        cgemm_Col_CT_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX096_NL096_KX01_clKernel);
        cgemm_Col_CT_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML096_NL096_KX01_clKernel);
        cgemm_Col_CT_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX096_NX096_KX08_clKernel);
        cgemm_Col_CT_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML096_NX096_KX08_clKernel);
        cgemm_Col_CT_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_MX096_NL096_KX08_clKernel);
        cgemm_Col_CT_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CT_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CT_B1_ML096_NL096_KX08_clKernel);
        cgemm_Col_CT_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX016_NX016_KX01_clKernel);
        cgemm_Col_CC_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML016_NX016_KX01_clKernel);
        cgemm_Col_CC_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX016_NL016_KX01_clKernel);
        cgemm_Col_CC_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML016_NL016_KX01_clKernel);
        cgemm_Col_CC_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX016_NX016_KX08_clKernel);
        cgemm_Col_CC_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML016_NX016_KX08_clKernel);
        cgemm_Col_CC_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX016_NL016_KX08_clKernel);
        cgemm_Col_CC_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML016_NL016_KX08_clKernel);
        cgemm_Col_CC_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX032_NX032_KX01_clKernel);
        cgemm_Col_CC_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML032_NX032_KX01_clKernel);
        cgemm_Col_CC_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX032_NL032_KX01_clKernel);
        cgemm_Col_CC_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML032_NL032_KX01_clKernel);
        cgemm_Col_CC_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX032_NX032_KX08_clKernel);
        cgemm_Col_CC_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML032_NX032_KX08_clKernel);
        cgemm_Col_CC_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX032_NL032_KX08_clKernel);
        cgemm_Col_CC_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML032_NL032_KX08_clKernel);
        cgemm_Col_CC_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX048_NX048_KX01_clKernel);
        cgemm_Col_CC_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML048_NX048_KX01_clKernel);
        cgemm_Col_CC_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX048_NL048_KX01_clKernel);
        cgemm_Col_CC_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML048_NL048_KX01_clKernel);
        cgemm_Col_CC_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX048_NX048_KX08_clKernel);
        cgemm_Col_CC_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML048_NX048_KX08_clKernel);
        cgemm_Col_CC_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX048_NL048_KX08_clKernel);
        cgemm_Col_CC_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML048_NL048_KX08_clKernel);
        cgemm_Col_CC_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX064_NX064_KX01_clKernel);
        cgemm_Col_CC_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML064_NX064_KX01_clKernel);
        cgemm_Col_CC_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX064_NL064_KX01_clKernel);
        cgemm_Col_CC_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML064_NL064_KX01_clKernel);
        cgemm_Col_CC_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX064_NX064_KX08_clKernel);
        cgemm_Col_CC_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML064_NX064_KX08_clKernel);
        cgemm_Col_CC_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX064_NL064_KX08_clKernel);
        cgemm_Col_CC_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML064_NL064_KX08_clKernel);
        cgemm_Col_CC_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX080_NX080_KX01_clKernel);
        cgemm_Col_CC_B0_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML080_NX080_KX01_clKernel);
        cgemm_Col_CC_B0_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX080_NL080_KX01_clKernel);
        cgemm_Col_CC_B0_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML080_NL080_KX01_clKernel);
        cgemm_Col_CC_B0_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX080_NX080_KX08_clKernel);
        cgemm_Col_CC_B0_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML080_NX080_KX08_clKernel);
        cgemm_Col_CC_B0_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX080_NL080_KX08_clKernel);
        cgemm_Col_CC_B0_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML080_NL080_KX08_clKernel);
        cgemm_Col_CC_B0_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX096_NX096_KX01_clKernel);
        cgemm_Col_CC_B0_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML096_NX096_KX01_clKernel);
        cgemm_Col_CC_B0_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX096_NL096_KX01_clKernel);
        cgemm_Col_CC_B0_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML096_NL096_KX01_clKernel);
        cgemm_Col_CC_B0_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX096_NX096_KX08_clKernel);
        cgemm_Col_CC_B0_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML096_NX096_KX08_clKernel);
        cgemm_Col_CC_B0_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_MX096_NL096_KX08_clKernel);
        cgemm_Col_CC_B0_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B0_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B0_ML096_NL096_KX08_clKernel);
        cgemm_Col_CC_B0_ML096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX016_NX016_KX01_clKernel);
        cgemm_Col_CC_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML016_NX016_KX01_clKernel);
        cgemm_Col_CC_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX016_NL016_KX01_clKernel);
        cgemm_Col_CC_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML016_NL016_KX01_clKernel);
        cgemm_Col_CC_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX016_NX016_KX08_clKernel);
        cgemm_Col_CC_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML016_NX016_KX08_clKernel);
        cgemm_Col_CC_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX016_NL016_KX08_clKernel);
        cgemm_Col_CC_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML016_NL016_KX08_clKernel);
        cgemm_Col_CC_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX032_NX032_KX01_clKernel);
        cgemm_Col_CC_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML032_NX032_KX01_clKernel);
        cgemm_Col_CC_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX032_NL032_KX01_clKernel);
        cgemm_Col_CC_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML032_NL032_KX01_clKernel);
        cgemm_Col_CC_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX032_NX032_KX08_clKernel);
        cgemm_Col_CC_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML032_NX032_KX08_clKernel);
        cgemm_Col_CC_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX032_NL032_KX08_clKernel);
        cgemm_Col_CC_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML032_NL032_KX08_clKernel);
        cgemm_Col_CC_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX048_NX048_KX01_clKernel);
        cgemm_Col_CC_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML048_NX048_KX01_clKernel);
        cgemm_Col_CC_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX048_NL048_KX01_clKernel);
        cgemm_Col_CC_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML048_NL048_KX01_clKernel);
        cgemm_Col_CC_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX048_NX048_KX08_clKernel);
        cgemm_Col_CC_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML048_NX048_KX08_clKernel);
        cgemm_Col_CC_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX048_NL048_KX08_clKernel);
        cgemm_Col_CC_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML048_NL048_KX08_clKernel);
        cgemm_Col_CC_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX064_NX064_KX01_clKernel);
        cgemm_Col_CC_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML064_NX064_KX01_clKernel);
        cgemm_Col_CC_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX064_NL064_KX01_clKernel);
        cgemm_Col_CC_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML064_NL064_KX01_clKernel);
        cgemm_Col_CC_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX064_NX064_KX08_clKernel);
        cgemm_Col_CC_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML064_NX064_KX08_clKernel);
        cgemm_Col_CC_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX064_NL064_KX08_clKernel);
        cgemm_Col_CC_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML064_NL064_KX08_clKernel);
        cgemm_Col_CC_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX080_NX080_KX01_clKernel);
        cgemm_Col_CC_B1_MX080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML080_NX080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML080_NX080_KX01_clKernel);
        cgemm_Col_CC_B1_ML080_NX080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX080_NL080_KX01_clKernel);
        cgemm_Col_CC_B1_MX080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML080_NL080_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML080_NL080_KX01_clKernel);
        cgemm_Col_CC_B1_ML080_NL080_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX080_NX080_KX08_clKernel);
        cgemm_Col_CC_B1_MX080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML080_NX080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML080_NX080_KX08_clKernel);
        cgemm_Col_CC_B1_ML080_NX080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX080_NL080_KX08_clKernel);
        cgemm_Col_CC_B1_MX080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML080_NL080_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML080_NL080_KX08_clKernel);
        cgemm_Col_CC_B1_ML080_NL080_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX096_NX096_KX01_clKernel);
        cgemm_Col_CC_B1_MX096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML096_NX096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML096_NX096_KX01_clKernel);
        cgemm_Col_CC_B1_ML096_NX096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX096_NL096_KX01_clKernel);
        cgemm_Col_CC_B1_MX096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML096_NL096_KX01_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML096_NL096_KX01_clKernel);
        cgemm_Col_CC_B1_ML096_NL096_KX01_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX096_NX096_KX08_clKernel);
        cgemm_Col_CC_B1_MX096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML096_NX096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML096_NX096_KX08_clKernel);
        cgemm_Col_CC_B1_ML096_NX096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_MX096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_MX096_NL096_KX08_clKernel);
        cgemm_Col_CC_B1_MX096_NL096_KX08_clKernel = NULL;
    }
    if(cgemm_Col_CC_B1_ML096_NL096_KX08_clKernel != NULL) {
        clReleaseKernel(cgemm_Col_CC_B1_ML096_NL096_KX08_clKernel);
        cgemm_Col_CC_B1_ML096_NL096_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX016_NX016_KX01_clKernel);
        zgemm_Col_NN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML016_NX016_KX01_clKernel);
        zgemm_Col_NN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX016_NL016_KX01_clKernel);
        zgemm_Col_NN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML016_NL016_KX01_clKernel);
        zgemm_Col_NN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX016_NX016_KX08_clKernel);
        zgemm_Col_NN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML016_NX016_KX08_clKernel);
        zgemm_Col_NN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX016_NL016_KX08_clKernel);
        zgemm_Col_NN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML016_NL016_KX08_clKernel);
        zgemm_Col_NN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX032_NX032_KX01_clKernel);
        zgemm_Col_NN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML032_NX032_KX01_clKernel);
        zgemm_Col_NN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX032_NL032_KX01_clKernel);
        zgemm_Col_NN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML032_NL032_KX01_clKernel);
        zgemm_Col_NN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX032_NX032_KX08_clKernel);
        zgemm_Col_NN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML032_NX032_KX08_clKernel);
        zgemm_Col_NN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX032_NL032_KX08_clKernel);
        zgemm_Col_NN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML032_NL032_KX08_clKernel);
        zgemm_Col_NN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX048_NX048_KX01_clKernel);
        zgemm_Col_NN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML048_NX048_KX01_clKernel);
        zgemm_Col_NN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX048_NL048_KX01_clKernel);
        zgemm_Col_NN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML048_NL048_KX01_clKernel);
        zgemm_Col_NN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX048_NX048_KX08_clKernel);
        zgemm_Col_NN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML048_NX048_KX08_clKernel);
        zgemm_Col_NN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX048_NL048_KX08_clKernel);
        zgemm_Col_NN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML048_NL048_KX08_clKernel);
        zgemm_Col_NN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX064_NX064_KX01_clKernel);
        zgemm_Col_NN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML064_NX064_KX01_clKernel);
        zgemm_Col_NN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX064_NL064_KX01_clKernel);
        zgemm_Col_NN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML064_NL064_KX01_clKernel);
        zgemm_Col_NN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX064_NX064_KX08_clKernel);
        zgemm_Col_NN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML064_NX064_KX08_clKernel);
        zgemm_Col_NN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_MX064_NL064_KX08_clKernel);
        zgemm_Col_NN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B0_ML064_NL064_KX08_clKernel);
        zgemm_Col_NN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX016_NX016_KX01_clKernel);
        zgemm_Col_NN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML016_NX016_KX01_clKernel);
        zgemm_Col_NN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX016_NL016_KX01_clKernel);
        zgemm_Col_NN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML016_NL016_KX01_clKernel);
        zgemm_Col_NN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX016_NX016_KX08_clKernel);
        zgemm_Col_NN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML016_NX016_KX08_clKernel);
        zgemm_Col_NN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX016_NL016_KX08_clKernel);
        zgemm_Col_NN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML016_NL016_KX08_clKernel);
        zgemm_Col_NN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX032_NX032_KX01_clKernel);
        zgemm_Col_NN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML032_NX032_KX01_clKernel);
        zgemm_Col_NN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX032_NL032_KX01_clKernel);
        zgemm_Col_NN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML032_NL032_KX01_clKernel);
        zgemm_Col_NN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX032_NX032_KX08_clKernel);
        zgemm_Col_NN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML032_NX032_KX08_clKernel);
        zgemm_Col_NN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX032_NL032_KX08_clKernel);
        zgemm_Col_NN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML032_NL032_KX08_clKernel);
        zgemm_Col_NN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX048_NX048_KX01_clKernel);
        zgemm_Col_NN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML048_NX048_KX01_clKernel);
        zgemm_Col_NN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX048_NL048_KX01_clKernel);
        zgemm_Col_NN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML048_NL048_KX01_clKernel);
        zgemm_Col_NN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX048_NX048_KX08_clKernel);
        zgemm_Col_NN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML048_NX048_KX08_clKernel);
        zgemm_Col_NN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX048_NL048_KX08_clKernel);
        zgemm_Col_NN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML048_NL048_KX08_clKernel);
        zgemm_Col_NN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX064_NX064_KX01_clKernel);
        zgemm_Col_NN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML064_NX064_KX01_clKernel);
        zgemm_Col_NN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX064_NL064_KX01_clKernel);
        zgemm_Col_NN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML064_NL064_KX01_clKernel);
        zgemm_Col_NN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX064_NX064_KX08_clKernel);
        zgemm_Col_NN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML064_NX064_KX08_clKernel);
        zgemm_Col_NN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_MX064_NL064_KX08_clKernel);
        zgemm_Col_NN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NN_B1_ML064_NL064_KX08_clKernel);
        zgemm_Col_NN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX016_NX016_KX01_clKernel);
        zgemm_Col_NT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML016_NX016_KX01_clKernel);
        zgemm_Col_NT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX016_NL016_KX01_clKernel);
        zgemm_Col_NT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML016_NL016_KX01_clKernel);
        zgemm_Col_NT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX016_NX016_KX08_clKernel);
        zgemm_Col_NT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML016_NX016_KX08_clKernel);
        zgemm_Col_NT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX016_NL016_KX08_clKernel);
        zgemm_Col_NT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML016_NL016_KX08_clKernel);
        zgemm_Col_NT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX032_NX032_KX01_clKernel);
        zgemm_Col_NT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML032_NX032_KX01_clKernel);
        zgemm_Col_NT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX032_NL032_KX01_clKernel);
        zgemm_Col_NT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML032_NL032_KX01_clKernel);
        zgemm_Col_NT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX032_NX032_KX08_clKernel);
        zgemm_Col_NT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML032_NX032_KX08_clKernel);
        zgemm_Col_NT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX032_NL032_KX08_clKernel);
        zgemm_Col_NT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML032_NL032_KX08_clKernel);
        zgemm_Col_NT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX048_NX048_KX01_clKernel);
        zgemm_Col_NT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML048_NX048_KX01_clKernel);
        zgemm_Col_NT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX048_NL048_KX01_clKernel);
        zgemm_Col_NT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML048_NL048_KX01_clKernel);
        zgemm_Col_NT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX048_NX048_KX08_clKernel);
        zgemm_Col_NT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML048_NX048_KX08_clKernel);
        zgemm_Col_NT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX048_NL048_KX08_clKernel);
        zgemm_Col_NT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML048_NL048_KX08_clKernel);
        zgemm_Col_NT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX064_NX064_KX01_clKernel);
        zgemm_Col_NT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML064_NX064_KX01_clKernel);
        zgemm_Col_NT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX064_NL064_KX01_clKernel);
        zgemm_Col_NT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML064_NL064_KX01_clKernel);
        zgemm_Col_NT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX064_NX064_KX08_clKernel);
        zgemm_Col_NT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML064_NX064_KX08_clKernel);
        zgemm_Col_NT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_MX064_NL064_KX08_clKernel);
        zgemm_Col_NT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B0_ML064_NL064_KX08_clKernel);
        zgemm_Col_NT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX016_NX016_KX01_clKernel);
        zgemm_Col_NT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML016_NX016_KX01_clKernel);
        zgemm_Col_NT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX016_NL016_KX01_clKernel);
        zgemm_Col_NT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML016_NL016_KX01_clKernel);
        zgemm_Col_NT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX016_NX016_KX08_clKernel);
        zgemm_Col_NT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML016_NX016_KX08_clKernel);
        zgemm_Col_NT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX016_NL016_KX08_clKernel);
        zgemm_Col_NT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML016_NL016_KX08_clKernel);
        zgemm_Col_NT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX032_NX032_KX01_clKernel);
        zgemm_Col_NT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML032_NX032_KX01_clKernel);
        zgemm_Col_NT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX032_NL032_KX01_clKernel);
        zgemm_Col_NT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML032_NL032_KX01_clKernel);
        zgemm_Col_NT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX032_NX032_KX08_clKernel);
        zgemm_Col_NT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML032_NX032_KX08_clKernel);
        zgemm_Col_NT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX032_NL032_KX08_clKernel);
        zgemm_Col_NT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML032_NL032_KX08_clKernel);
        zgemm_Col_NT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX048_NX048_KX01_clKernel);
        zgemm_Col_NT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML048_NX048_KX01_clKernel);
        zgemm_Col_NT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX048_NL048_KX01_clKernel);
        zgemm_Col_NT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML048_NL048_KX01_clKernel);
        zgemm_Col_NT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX048_NX048_KX08_clKernel);
        zgemm_Col_NT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML048_NX048_KX08_clKernel);
        zgemm_Col_NT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX048_NL048_KX08_clKernel);
        zgemm_Col_NT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML048_NL048_KX08_clKernel);
        zgemm_Col_NT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX064_NX064_KX01_clKernel);
        zgemm_Col_NT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML064_NX064_KX01_clKernel);
        zgemm_Col_NT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX064_NL064_KX01_clKernel);
        zgemm_Col_NT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML064_NL064_KX01_clKernel);
        zgemm_Col_NT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX064_NX064_KX08_clKernel);
        zgemm_Col_NT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML064_NX064_KX08_clKernel);
        zgemm_Col_NT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_MX064_NL064_KX08_clKernel);
        zgemm_Col_NT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NT_B1_ML064_NL064_KX08_clKernel);
        zgemm_Col_NT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX016_NX016_KX01_clKernel);
        zgemm_Col_NC_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML016_NX016_KX01_clKernel);
        zgemm_Col_NC_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX016_NL016_KX01_clKernel);
        zgemm_Col_NC_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML016_NL016_KX01_clKernel);
        zgemm_Col_NC_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX016_NX016_KX08_clKernel);
        zgemm_Col_NC_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML016_NX016_KX08_clKernel);
        zgemm_Col_NC_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX016_NL016_KX08_clKernel);
        zgemm_Col_NC_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML016_NL016_KX08_clKernel);
        zgemm_Col_NC_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX032_NX032_KX01_clKernel);
        zgemm_Col_NC_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML032_NX032_KX01_clKernel);
        zgemm_Col_NC_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX032_NL032_KX01_clKernel);
        zgemm_Col_NC_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML032_NL032_KX01_clKernel);
        zgemm_Col_NC_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX032_NX032_KX08_clKernel);
        zgemm_Col_NC_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML032_NX032_KX08_clKernel);
        zgemm_Col_NC_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX032_NL032_KX08_clKernel);
        zgemm_Col_NC_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML032_NL032_KX08_clKernel);
        zgemm_Col_NC_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX048_NX048_KX01_clKernel);
        zgemm_Col_NC_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML048_NX048_KX01_clKernel);
        zgemm_Col_NC_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX048_NL048_KX01_clKernel);
        zgemm_Col_NC_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML048_NL048_KX01_clKernel);
        zgemm_Col_NC_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX048_NX048_KX08_clKernel);
        zgemm_Col_NC_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML048_NX048_KX08_clKernel);
        zgemm_Col_NC_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX048_NL048_KX08_clKernel);
        zgemm_Col_NC_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML048_NL048_KX08_clKernel);
        zgemm_Col_NC_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX064_NX064_KX01_clKernel);
        zgemm_Col_NC_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML064_NX064_KX01_clKernel);
        zgemm_Col_NC_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX064_NL064_KX01_clKernel);
        zgemm_Col_NC_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML064_NL064_KX01_clKernel);
        zgemm_Col_NC_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX064_NX064_KX08_clKernel);
        zgemm_Col_NC_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML064_NX064_KX08_clKernel);
        zgemm_Col_NC_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_MX064_NL064_KX08_clKernel);
        zgemm_Col_NC_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B0_ML064_NL064_KX08_clKernel);
        zgemm_Col_NC_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX016_NX016_KX01_clKernel);
        zgemm_Col_NC_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML016_NX016_KX01_clKernel);
        zgemm_Col_NC_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX016_NL016_KX01_clKernel);
        zgemm_Col_NC_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML016_NL016_KX01_clKernel);
        zgemm_Col_NC_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX016_NX016_KX08_clKernel);
        zgemm_Col_NC_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML016_NX016_KX08_clKernel);
        zgemm_Col_NC_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX016_NL016_KX08_clKernel);
        zgemm_Col_NC_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML016_NL016_KX08_clKernel);
        zgemm_Col_NC_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX032_NX032_KX01_clKernel);
        zgemm_Col_NC_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML032_NX032_KX01_clKernel);
        zgemm_Col_NC_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX032_NL032_KX01_clKernel);
        zgemm_Col_NC_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML032_NL032_KX01_clKernel);
        zgemm_Col_NC_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX032_NX032_KX08_clKernel);
        zgemm_Col_NC_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML032_NX032_KX08_clKernel);
        zgemm_Col_NC_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX032_NL032_KX08_clKernel);
        zgemm_Col_NC_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML032_NL032_KX08_clKernel);
        zgemm_Col_NC_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX048_NX048_KX01_clKernel);
        zgemm_Col_NC_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML048_NX048_KX01_clKernel);
        zgemm_Col_NC_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX048_NL048_KX01_clKernel);
        zgemm_Col_NC_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML048_NL048_KX01_clKernel);
        zgemm_Col_NC_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX048_NX048_KX08_clKernel);
        zgemm_Col_NC_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML048_NX048_KX08_clKernel);
        zgemm_Col_NC_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX048_NL048_KX08_clKernel);
        zgemm_Col_NC_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML048_NL048_KX08_clKernel);
        zgemm_Col_NC_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX064_NX064_KX01_clKernel);
        zgemm_Col_NC_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML064_NX064_KX01_clKernel);
        zgemm_Col_NC_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX064_NL064_KX01_clKernel);
        zgemm_Col_NC_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML064_NL064_KX01_clKernel);
        zgemm_Col_NC_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX064_NX064_KX08_clKernel);
        zgemm_Col_NC_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML064_NX064_KX08_clKernel);
        zgemm_Col_NC_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_MX064_NL064_KX08_clKernel);
        zgemm_Col_NC_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_NC_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_NC_B1_ML064_NL064_KX08_clKernel);
        zgemm_Col_NC_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX016_NX016_KX01_clKernel);
        zgemm_Col_TN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML016_NX016_KX01_clKernel);
        zgemm_Col_TN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX016_NL016_KX01_clKernel);
        zgemm_Col_TN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML016_NL016_KX01_clKernel);
        zgemm_Col_TN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX016_NX016_KX08_clKernel);
        zgemm_Col_TN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML016_NX016_KX08_clKernel);
        zgemm_Col_TN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX016_NL016_KX08_clKernel);
        zgemm_Col_TN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML016_NL016_KX08_clKernel);
        zgemm_Col_TN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX032_NX032_KX01_clKernel);
        zgemm_Col_TN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML032_NX032_KX01_clKernel);
        zgemm_Col_TN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX032_NL032_KX01_clKernel);
        zgemm_Col_TN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML032_NL032_KX01_clKernel);
        zgemm_Col_TN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX032_NX032_KX08_clKernel);
        zgemm_Col_TN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML032_NX032_KX08_clKernel);
        zgemm_Col_TN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX032_NL032_KX08_clKernel);
        zgemm_Col_TN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML032_NL032_KX08_clKernel);
        zgemm_Col_TN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX048_NX048_KX01_clKernel);
        zgemm_Col_TN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML048_NX048_KX01_clKernel);
        zgemm_Col_TN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX048_NL048_KX01_clKernel);
        zgemm_Col_TN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML048_NL048_KX01_clKernel);
        zgemm_Col_TN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX048_NX048_KX08_clKernel);
        zgemm_Col_TN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML048_NX048_KX08_clKernel);
        zgemm_Col_TN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX048_NL048_KX08_clKernel);
        zgemm_Col_TN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML048_NL048_KX08_clKernel);
        zgemm_Col_TN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX064_NX064_KX01_clKernel);
        zgemm_Col_TN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML064_NX064_KX01_clKernel);
        zgemm_Col_TN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX064_NL064_KX01_clKernel);
        zgemm_Col_TN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML064_NL064_KX01_clKernel);
        zgemm_Col_TN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX064_NX064_KX08_clKernel);
        zgemm_Col_TN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML064_NX064_KX08_clKernel);
        zgemm_Col_TN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_MX064_NL064_KX08_clKernel);
        zgemm_Col_TN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B0_ML064_NL064_KX08_clKernel);
        zgemm_Col_TN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX016_NX016_KX01_clKernel);
        zgemm_Col_TN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML016_NX016_KX01_clKernel);
        zgemm_Col_TN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX016_NL016_KX01_clKernel);
        zgemm_Col_TN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML016_NL016_KX01_clKernel);
        zgemm_Col_TN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX016_NX016_KX08_clKernel);
        zgemm_Col_TN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML016_NX016_KX08_clKernel);
        zgemm_Col_TN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX016_NL016_KX08_clKernel);
        zgemm_Col_TN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML016_NL016_KX08_clKernel);
        zgemm_Col_TN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX032_NX032_KX01_clKernel);
        zgemm_Col_TN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML032_NX032_KX01_clKernel);
        zgemm_Col_TN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX032_NL032_KX01_clKernel);
        zgemm_Col_TN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML032_NL032_KX01_clKernel);
        zgemm_Col_TN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX032_NX032_KX08_clKernel);
        zgemm_Col_TN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML032_NX032_KX08_clKernel);
        zgemm_Col_TN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX032_NL032_KX08_clKernel);
        zgemm_Col_TN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML032_NL032_KX08_clKernel);
        zgemm_Col_TN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX048_NX048_KX01_clKernel);
        zgemm_Col_TN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML048_NX048_KX01_clKernel);
        zgemm_Col_TN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX048_NL048_KX01_clKernel);
        zgemm_Col_TN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML048_NL048_KX01_clKernel);
        zgemm_Col_TN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX048_NX048_KX08_clKernel);
        zgemm_Col_TN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML048_NX048_KX08_clKernel);
        zgemm_Col_TN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX048_NL048_KX08_clKernel);
        zgemm_Col_TN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML048_NL048_KX08_clKernel);
        zgemm_Col_TN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX064_NX064_KX01_clKernel);
        zgemm_Col_TN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML064_NX064_KX01_clKernel);
        zgemm_Col_TN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX064_NL064_KX01_clKernel);
        zgemm_Col_TN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML064_NL064_KX01_clKernel);
        zgemm_Col_TN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX064_NX064_KX08_clKernel);
        zgemm_Col_TN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML064_NX064_KX08_clKernel);
        zgemm_Col_TN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_MX064_NL064_KX08_clKernel);
        zgemm_Col_TN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TN_B1_ML064_NL064_KX08_clKernel);
        zgemm_Col_TN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX016_NX016_KX01_clKernel);
        zgemm_Col_TT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML016_NX016_KX01_clKernel);
        zgemm_Col_TT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX016_NL016_KX01_clKernel);
        zgemm_Col_TT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML016_NL016_KX01_clKernel);
        zgemm_Col_TT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX016_NX016_KX08_clKernel);
        zgemm_Col_TT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML016_NX016_KX08_clKernel);
        zgemm_Col_TT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX016_NL016_KX08_clKernel);
        zgemm_Col_TT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML016_NL016_KX08_clKernel);
        zgemm_Col_TT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX032_NX032_KX01_clKernel);
        zgemm_Col_TT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML032_NX032_KX01_clKernel);
        zgemm_Col_TT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX032_NL032_KX01_clKernel);
        zgemm_Col_TT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML032_NL032_KX01_clKernel);
        zgemm_Col_TT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX032_NX032_KX08_clKernel);
        zgemm_Col_TT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML032_NX032_KX08_clKernel);
        zgemm_Col_TT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX032_NL032_KX08_clKernel);
        zgemm_Col_TT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML032_NL032_KX08_clKernel);
        zgemm_Col_TT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX048_NX048_KX01_clKernel);
        zgemm_Col_TT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML048_NX048_KX01_clKernel);
        zgemm_Col_TT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX048_NL048_KX01_clKernel);
        zgemm_Col_TT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML048_NL048_KX01_clKernel);
        zgemm_Col_TT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX048_NX048_KX08_clKernel);
        zgemm_Col_TT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML048_NX048_KX08_clKernel);
        zgemm_Col_TT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX048_NL048_KX08_clKernel);
        zgemm_Col_TT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML048_NL048_KX08_clKernel);
        zgemm_Col_TT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX064_NX064_KX01_clKernel);
        zgemm_Col_TT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML064_NX064_KX01_clKernel);
        zgemm_Col_TT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX064_NL064_KX01_clKernel);
        zgemm_Col_TT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML064_NL064_KX01_clKernel);
        zgemm_Col_TT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX064_NX064_KX08_clKernel);
        zgemm_Col_TT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML064_NX064_KX08_clKernel);
        zgemm_Col_TT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_MX064_NL064_KX08_clKernel);
        zgemm_Col_TT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B0_ML064_NL064_KX08_clKernel);
        zgemm_Col_TT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX016_NX016_KX01_clKernel);
        zgemm_Col_TT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML016_NX016_KX01_clKernel);
        zgemm_Col_TT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX016_NL016_KX01_clKernel);
        zgemm_Col_TT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML016_NL016_KX01_clKernel);
        zgemm_Col_TT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX016_NX016_KX08_clKernel);
        zgemm_Col_TT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML016_NX016_KX08_clKernel);
        zgemm_Col_TT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX016_NL016_KX08_clKernel);
        zgemm_Col_TT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML016_NL016_KX08_clKernel);
        zgemm_Col_TT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX032_NX032_KX01_clKernel);
        zgemm_Col_TT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML032_NX032_KX01_clKernel);
        zgemm_Col_TT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX032_NL032_KX01_clKernel);
        zgemm_Col_TT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML032_NL032_KX01_clKernel);
        zgemm_Col_TT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX032_NX032_KX08_clKernel);
        zgemm_Col_TT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML032_NX032_KX08_clKernel);
        zgemm_Col_TT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX032_NL032_KX08_clKernel);
        zgemm_Col_TT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML032_NL032_KX08_clKernel);
        zgemm_Col_TT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX048_NX048_KX01_clKernel);
        zgemm_Col_TT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML048_NX048_KX01_clKernel);
        zgemm_Col_TT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX048_NL048_KX01_clKernel);
        zgemm_Col_TT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML048_NL048_KX01_clKernel);
        zgemm_Col_TT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX048_NX048_KX08_clKernel);
        zgemm_Col_TT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML048_NX048_KX08_clKernel);
        zgemm_Col_TT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX048_NL048_KX08_clKernel);
        zgemm_Col_TT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML048_NL048_KX08_clKernel);
        zgemm_Col_TT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX064_NX064_KX01_clKernel);
        zgemm_Col_TT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML064_NX064_KX01_clKernel);
        zgemm_Col_TT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX064_NL064_KX01_clKernel);
        zgemm_Col_TT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML064_NL064_KX01_clKernel);
        zgemm_Col_TT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX064_NX064_KX08_clKernel);
        zgemm_Col_TT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML064_NX064_KX08_clKernel);
        zgemm_Col_TT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_MX064_NL064_KX08_clKernel);
        zgemm_Col_TT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TT_B1_ML064_NL064_KX08_clKernel);
        zgemm_Col_TT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX016_NX016_KX01_clKernel);
        zgemm_Col_TC_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML016_NX016_KX01_clKernel);
        zgemm_Col_TC_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX016_NL016_KX01_clKernel);
        zgemm_Col_TC_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML016_NL016_KX01_clKernel);
        zgemm_Col_TC_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX016_NX016_KX08_clKernel);
        zgemm_Col_TC_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML016_NX016_KX08_clKernel);
        zgemm_Col_TC_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX016_NL016_KX08_clKernel);
        zgemm_Col_TC_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML016_NL016_KX08_clKernel);
        zgemm_Col_TC_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX032_NX032_KX01_clKernel);
        zgemm_Col_TC_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML032_NX032_KX01_clKernel);
        zgemm_Col_TC_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX032_NL032_KX01_clKernel);
        zgemm_Col_TC_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML032_NL032_KX01_clKernel);
        zgemm_Col_TC_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX032_NX032_KX08_clKernel);
        zgemm_Col_TC_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML032_NX032_KX08_clKernel);
        zgemm_Col_TC_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX032_NL032_KX08_clKernel);
        zgemm_Col_TC_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML032_NL032_KX08_clKernel);
        zgemm_Col_TC_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX048_NX048_KX01_clKernel);
        zgemm_Col_TC_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML048_NX048_KX01_clKernel);
        zgemm_Col_TC_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX048_NL048_KX01_clKernel);
        zgemm_Col_TC_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML048_NL048_KX01_clKernel);
        zgemm_Col_TC_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX048_NX048_KX08_clKernel);
        zgemm_Col_TC_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML048_NX048_KX08_clKernel);
        zgemm_Col_TC_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX048_NL048_KX08_clKernel);
        zgemm_Col_TC_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML048_NL048_KX08_clKernel);
        zgemm_Col_TC_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX064_NX064_KX01_clKernel);
        zgemm_Col_TC_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML064_NX064_KX01_clKernel);
        zgemm_Col_TC_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX064_NL064_KX01_clKernel);
        zgemm_Col_TC_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML064_NL064_KX01_clKernel);
        zgemm_Col_TC_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX064_NX064_KX08_clKernel);
        zgemm_Col_TC_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML064_NX064_KX08_clKernel);
        zgemm_Col_TC_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_MX064_NL064_KX08_clKernel);
        zgemm_Col_TC_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B0_ML064_NL064_KX08_clKernel);
        zgemm_Col_TC_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX016_NX016_KX01_clKernel);
        zgemm_Col_TC_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML016_NX016_KX01_clKernel);
        zgemm_Col_TC_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX016_NL016_KX01_clKernel);
        zgemm_Col_TC_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML016_NL016_KX01_clKernel);
        zgemm_Col_TC_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX016_NX016_KX08_clKernel);
        zgemm_Col_TC_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML016_NX016_KX08_clKernel);
        zgemm_Col_TC_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX016_NL016_KX08_clKernel);
        zgemm_Col_TC_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML016_NL016_KX08_clKernel);
        zgemm_Col_TC_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX032_NX032_KX01_clKernel);
        zgemm_Col_TC_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML032_NX032_KX01_clKernel);
        zgemm_Col_TC_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX032_NL032_KX01_clKernel);
        zgemm_Col_TC_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML032_NL032_KX01_clKernel);
        zgemm_Col_TC_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX032_NX032_KX08_clKernel);
        zgemm_Col_TC_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML032_NX032_KX08_clKernel);
        zgemm_Col_TC_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX032_NL032_KX08_clKernel);
        zgemm_Col_TC_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML032_NL032_KX08_clKernel);
        zgemm_Col_TC_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX048_NX048_KX01_clKernel);
        zgemm_Col_TC_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML048_NX048_KX01_clKernel);
        zgemm_Col_TC_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX048_NL048_KX01_clKernel);
        zgemm_Col_TC_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML048_NL048_KX01_clKernel);
        zgemm_Col_TC_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX048_NX048_KX08_clKernel);
        zgemm_Col_TC_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML048_NX048_KX08_clKernel);
        zgemm_Col_TC_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX048_NL048_KX08_clKernel);
        zgemm_Col_TC_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML048_NL048_KX08_clKernel);
        zgemm_Col_TC_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX064_NX064_KX01_clKernel);
        zgemm_Col_TC_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML064_NX064_KX01_clKernel);
        zgemm_Col_TC_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX064_NL064_KX01_clKernel);
        zgemm_Col_TC_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML064_NL064_KX01_clKernel);
        zgemm_Col_TC_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX064_NX064_KX08_clKernel);
        zgemm_Col_TC_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML064_NX064_KX08_clKernel);
        zgemm_Col_TC_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_MX064_NL064_KX08_clKernel);
        zgemm_Col_TC_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_TC_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_TC_B1_ML064_NL064_KX08_clKernel);
        zgemm_Col_TC_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX016_NX016_KX01_clKernel);
        zgemm_Col_CN_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML016_NX016_KX01_clKernel);
        zgemm_Col_CN_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX016_NL016_KX01_clKernel);
        zgemm_Col_CN_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML016_NL016_KX01_clKernel);
        zgemm_Col_CN_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX016_NX016_KX08_clKernel);
        zgemm_Col_CN_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML016_NX016_KX08_clKernel);
        zgemm_Col_CN_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX016_NL016_KX08_clKernel);
        zgemm_Col_CN_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML016_NL016_KX08_clKernel);
        zgemm_Col_CN_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX032_NX032_KX01_clKernel);
        zgemm_Col_CN_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML032_NX032_KX01_clKernel);
        zgemm_Col_CN_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX032_NL032_KX01_clKernel);
        zgemm_Col_CN_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML032_NL032_KX01_clKernel);
        zgemm_Col_CN_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX032_NX032_KX08_clKernel);
        zgemm_Col_CN_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML032_NX032_KX08_clKernel);
        zgemm_Col_CN_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX032_NL032_KX08_clKernel);
        zgemm_Col_CN_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML032_NL032_KX08_clKernel);
        zgemm_Col_CN_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX048_NX048_KX01_clKernel);
        zgemm_Col_CN_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML048_NX048_KX01_clKernel);
        zgemm_Col_CN_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX048_NL048_KX01_clKernel);
        zgemm_Col_CN_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML048_NL048_KX01_clKernel);
        zgemm_Col_CN_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX048_NX048_KX08_clKernel);
        zgemm_Col_CN_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML048_NX048_KX08_clKernel);
        zgemm_Col_CN_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX048_NL048_KX08_clKernel);
        zgemm_Col_CN_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML048_NL048_KX08_clKernel);
        zgemm_Col_CN_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX064_NX064_KX01_clKernel);
        zgemm_Col_CN_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML064_NX064_KX01_clKernel);
        zgemm_Col_CN_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX064_NL064_KX01_clKernel);
        zgemm_Col_CN_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML064_NL064_KX01_clKernel);
        zgemm_Col_CN_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX064_NX064_KX08_clKernel);
        zgemm_Col_CN_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML064_NX064_KX08_clKernel);
        zgemm_Col_CN_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_MX064_NL064_KX08_clKernel);
        zgemm_Col_CN_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B0_ML064_NL064_KX08_clKernel);
        zgemm_Col_CN_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX016_NX016_KX01_clKernel);
        zgemm_Col_CN_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML016_NX016_KX01_clKernel);
        zgemm_Col_CN_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX016_NL016_KX01_clKernel);
        zgemm_Col_CN_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML016_NL016_KX01_clKernel);
        zgemm_Col_CN_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX016_NX016_KX08_clKernel);
        zgemm_Col_CN_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML016_NX016_KX08_clKernel);
        zgemm_Col_CN_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX016_NL016_KX08_clKernel);
        zgemm_Col_CN_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML016_NL016_KX08_clKernel);
        zgemm_Col_CN_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX032_NX032_KX01_clKernel);
        zgemm_Col_CN_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML032_NX032_KX01_clKernel);
        zgemm_Col_CN_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX032_NL032_KX01_clKernel);
        zgemm_Col_CN_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML032_NL032_KX01_clKernel);
        zgemm_Col_CN_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX032_NX032_KX08_clKernel);
        zgemm_Col_CN_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML032_NX032_KX08_clKernel);
        zgemm_Col_CN_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX032_NL032_KX08_clKernel);
        zgemm_Col_CN_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML032_NL032_KX08_clKernel);
        zgemm_Col_CN_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX048_NX048_KX01_clKernel);
        zgemm_Col_CN_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML048_NX048_KX01_clKernel);
        zgemm_Col_CN_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX048_NL048_KX01_clKernel);
        zgemm_Col_CN_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML048_NL048_KX01_clKernel);
        zgemm_Col_CN_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX048_NX048_KX08_clKernel);
        zgemm_Col_CN_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML048_NX048_KX08_clKernel);
        zgemm_Col_CN_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX048_NL048_KX08_clKernel);
        zgemm_Col_CN_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML048_NL048_KX08_clKernel);
        zgemm_Col_CN_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX064_NX064_KX01_clKernel);
        zgemm_Col_CN_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML064_NX064_KX01_clKernel);
        zgemm_Col_CN_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX064_NL064_KX01_clKernel);
        zgemm_Col_CN_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML064_NL064_KX01_clKernel);
        zgemm_Col_CN_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX064_NX064_KX08_clKernel);
        zgemm_Col_CN_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML064_NX064_KX08_clKernel);
        zgemm_Col_CN_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_MX064_NL064_KX08_clKernel);
        zgemm_Col_CN_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CN_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CN_B1_ML064_NL064_KX08_clKernel);
        zgemm_Col_CN_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX016_NX016_KX01_clKernel);
        zgemm_Col_CT_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML016_NX016_KX01_clKernel);
        zgemm_Col_CT_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX016_NL016_KX01_clKernel);
        zgemm_Col_CT_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML016_NL016_KX01_clKernel);
        zgemm_Col_CT_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX016_NX016_KX08_clKernel);
        zgemm_Col_CT_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML016_NX016_KX08_clKernel);
        zgemm_Col_CT_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX016_NL016_KX08_clKernel);
        zgemm_Col_CT_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML016_NL016_KX08_clKernel);
        zgemm_Col_CT_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX032_NX032_KX01_clKernel);
        zgemm_Col_CT_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML032_NX032_KX01_clKernel);
        zgemm_Col_CT_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX032_NL032_KX01_clKernel);
        zgemm_Col_CT_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML032_NL032_KX01_clKernel);
        zgemm_Col_CT_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX032_NX032_KX08_clKernel);
        zgemm_Col_CT_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML032_NX032_KX08_clKernel);
        zgemm_Col_CT_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX032_NL032_KX08_clKernel);
        zgemm_Col_CT_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML032_NL032_KX08_clKernel);
        zgemm_Col_CT_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX048_NX048_KX01_clKernel);
        zgemm_Col_CT_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML048_NX048_KX01_clKernel);
        zgemm_Col_CT_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX048_NL048_KX01_clKernel);
        zgemm_Col_CT_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML048_NL048_KX01_clKernel);
        zgemm_Col_CT_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX048_NX048_KX08_clKernel);
        zgemm_Col_CT_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML048_NX048_KX08_clKernel);
        zgemm_Col_CT_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX048_NL048_KX08_clKernel);
        zgemm_Col_CT_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML048_NL048_KX08_clKernel);
        zgemm_Col_CT_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX064_NX064_KX01_clKernel);
        zgemm_Col_CT_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML064_NX064_KX01_clKernel);
        zgemm_Col_CT_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX064_NL064_KX01_clKernel);
        zgemm_Col_CT_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML064_NL064_KX01_clKernel);
        zgemm_Col_CT_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX064_NX064_KX08_clKernel);
        zgemm_Col_CT_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML064_NX064_KX08_clKernel);
        zgemm_Col_CT_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_MX064_NL064_KX08_clKernel);
        zgemm_Col_CT_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B0_ML064_NL064_KX08_clKernel);
        zgemm_Col_CT_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX016_NX016_KX01_clKernel);
        zgemm_Col_CT_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML016_NX016_KX01_clKernel);
        zgemm_Col_CT_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX016_NL016_KX01_clKernel);
        zgemm_Col_CT_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML016_NL016_KX01_clKernel);
        zgemm_Col_CT_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX016_NX016_KX08_clKernel);
        zgemm_Col_CT_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML016_NX016_KX08_clKernel);
        zgemm_Col_CT_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX016_NL016_KX08_clKernel);
        zgemm_Col_CT_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML016_NL016_KX08_clKernel);
        zgemm_Col_CT_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX032_NX032_KX01_clKernel);
        zgemm_Col_CT_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML032_NX032_KX01_clKernel);
        zgemm_Col_CT_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX032_NL032_KX01_clKernel);
        zgemm_Col_CT_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML032_NL032_KX01_clKernel);
        zgemm_Col_CT_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX032_NX032_KX08_clKernel);
        zgemm_Col_CT_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML032_NX032_KX08_clKernel);
        zgemm_Col_CT_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX032_NL032_KX08_clKernel);
        zgemm_Col_CT_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML032_NL032_KX08_clKernel);
        zgemm_Col_CT_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX048_NX048_KX01_clKernel);
        zgemm_Col_CT_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML048_NX048_KX01_clKernel);
        zgemm_Col_CT_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX048_NL048_KX01_clKernel);
        zgemm_Col_CT_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML048_NL048_KX01_clKernel);
        zgemm_Col_CT_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX048_NX048_KX08_clKernel);
        zgemm_Col_CT_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML048_NX048_KX08_clKernel);
        zgemm_Col_CT_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX048_NL048_KX08_clKernel);
        zgemm_Col_CT_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML048_NL048_KX08_clKernel);
        zgemm_Col_CT_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX064_NX064_KX01_clKernel);
        zgemm_Col_CT_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML064_NX064_KX01_clKernel);
        zgemm_Col_CT_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX064_NL064_KX01_clKernel);
        zgemm_Col_CT_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML064_NL064_KX01_clKernel);
        zgemm_Col_CT_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX064_NX064_KX08_clKernel);
        zgemm_Col_CT_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML064_NX064_KX08_clKernel);
        zgemm_Col_CT_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_MX064_NL064_KX08_clKernel);
        zgemm_Col_CT_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CT_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CT_B1_ML064_NL064_KX08_clKernel);
        zgemm_Col_CT_B1_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX016_NX016_KX01_clKernel);
        zgemm_Col_CC_B0_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML016_NX016_KX01_clKernel);
        zgemm_Col_CC_B0_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX016_NL016_KX01_clKernel);
        zgemm_Col_CC_B0_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML016_NL016_KX01_clKernel);
        zgemm_Col_CC_B0_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX016_NX016_KX08_clKernel);
        zgemm_Col_CC_B0_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML016_NX016_KX08_clKernel);
        zgemm_Col_CC_B0_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX016_NL016_KX08_clKernel);
        zgemm_Col_CC_B0_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML016_NL016_KX08_clKernel);
        zgemm_Col_CC_B0_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX032_NX032_KX01_clKernel);
        zgemm_Col_CC_B0_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML032_NX032_KX01_clKernel);
        zgemm_Col_CC_B0_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX032_NL032_KX01_clKernel);
        zgemm_Col_CC_B0_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML032_NL032_KX01_clKernel);
        zgemm_Col_CC_B0_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX032_NX032_KX08_clKernel);
        zgemm_Col_CC_B0_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML032_NX032_KX08_clKernel);
        zgemm_Col_CC_B0_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX032_NL032_KX08_clKernel);
        zgemm_Col_CC_B0_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML032_NL032_KX08_clKernel);
        zgemm_Col_CC_B0_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX048_NX048_KX01_clKernel);
        zgemm_Col_CC_B0_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML048_NX048_KX01_clKernel);
        zgemm_Col_CC_B0_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX048_NL048_KX01_clKernel);
        zgemm_Col_CC_B0_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML048_NL048_KX01_clKernel);
        zgemm_Col_CC_B0_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX048_NX048_KX08_clKernel);
        zgemm_Col_CC_B0_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML048_NX048_KX08_clKernel);
        zgemm_Col_CC_B0_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX048_NL048_KX08_clKernel);
        zgemm_Col_CC_B0_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML048_NL048_KX08_clKernel);
        zgemm_Col_CC_B0_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX064_NX064_KX01_clKernel);
        zgemm_Col_CC_B0_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML064_NX064_KX01_clKernel);
        zgemm_Col_CC_B0_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX064_NL064_KX01_clKernel);
        zgemm_Col_CC_B0_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML064_NL064_KX01_clKernel);
        zgemm_Col_CC_B0_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX064_NX064_KX08_clKernel);
        zgemm_Col_CC_B0_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML064_NX064_KX08_clKernel);
        zgemm_Col_CC_B0_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_MX064_NL064_KX08_clKernel);
        zgemm_Col_CC_B0_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B0_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B0_ML064_NL064_KX08_clKernel);
        zgemm_Col_CC_B0_ML064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX016_NX016_KX01_clKernel);
        zgemm_Col_CC_B1_MX016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML016_NX016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML016_NX016_KX01_clKernel);
        zgemm_Col_CC_B1_ML016_NX016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX016_NL016_KX01_clKernel);
        zgemm_Col_CC_B1_MX016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML016_NL016_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML016_NL016_KX01_clKernel);
        zgemm_Col_CC_B1_ML016_NL016_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX016_NX016_KX08_clKernel);
        zgemm_Col_CC_B1_MX016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML016_NX016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML016_NX016_KX08_clKernel);
        zgemm_Col_CC_B1_ML016_NX016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX016_NL016_KX08_clKernel);
        zgemm_Col_CC_B1_MX016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML016_NL016_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML016_NL016_KX08_clKernel);
        zgemm_Col_CC_B1_ML016_NL016_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX032_NX032_KX01_clKernel);
        zgemm_Col_CC_B1_MX032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML032_NX032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML032_NX032_KX01_clKernel);
        zgemm_Col_CC_B1_ML032_NX032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX032_NL032_KX01_clKernel);
        zgemm_Col_CC_B1_MX032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML032_NL032_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML032_NL032_KX01_clKernel);
        zgemm_Col_CC_B1_ML032_NL032_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX032_NX032_KX08_clKernel);
        zgemm_Col_CC_B1_MX032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML032_NX032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML032_NX032_KX08_clKernel);
        zgemm_Col_CC_B1_ML032_NX032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX032_NL032_KX08_clKernel);
        zgemm_Col_CC_B1_MX032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML032_NL032_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML032_NL032_KX08_clKernel);
        zgemm_Col_CC_B1_ML032_NL032_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX048_NX048_KX01_clKernel);
        zgemm_Col_CC_B1_MX048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML048_NX048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML048_NX048_KX01_clKernel);
        zgemm_Col_CC_B1_ML048_NX048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX048_NL048_KX01_clKernel);
        zgemm_Col_CC_B1_MX048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML048_NL048_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML048_NL048_KX01_clKernel);
        zgemm_Col_CC_B1_ML048_NL048_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX048_NX048_KX08_clKernel);
        zgemm_Col_CC_B1_MX048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML048_NX048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML048_NX048_KX08_clKernel);
        zgemm_Col_CC_B1_ML048_NX048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX048_NL048_KX08_clKernel);
        zgemm_Col_CC_B1_MX048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML048_NL048_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML048_NL048_KX08_clKernel);
        zgemm_Col_CC_B1_ML048_NL048_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX064_NX064_KX01_clKernel);
        zgemm_Col_CC_B1_MX064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML064_NX064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML064_NX064_KX01_clKernel);
        zgemm_Col_CC_B1_ML064_NX064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX064_NL064_KX01_clKernel);
        zgemm_Col_CC_B1_MX064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML064_NL064_KX01_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML064_NL064_KX01_clKernel);
        zgemm_Col_CC_B1_ML064_NL064_KX01_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX064_NX064_KX08_clKernel);
        zgemm_Col_CC_B1_MX064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML064_NX064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML064_NX064_KX08_clKernel);
        zgemm_Col_CC_B1_ML064_NX064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_MX064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_MX064_NL064_KX08_clKernel);
        zgemm_Col_CC_B1_MX064_NL064_KX08_clKernel = NULL;
    }
    if(zgemm_Col_CC_B1_ML064_NL064_KX08_clKernel != NULL) {
        clReleaseKernel(zgemm_Col_CC_B1_ML064_NL064_KX08_clKernel);
        zgemm_Col_CC_B1_ML064_NL064_KX08_clKernel = NULL;
    }
}

