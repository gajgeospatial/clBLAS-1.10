/*******************************************************************************
 * This file was auto-generated using the AutoGemm.py python script.
 * DO NOT modify this file! Instead, make changes to scripts in
 *   clBLAS/src/library/blas/AutoGemm/ then re-generate files
 *   (otherwise local changes will be lost after re-generation).
 ******************************************************************************/

#ifndef KERNEL_CGEMM_COL_TT_B0_ML048_NX048_KX01_SRC_H
#define KERNEL_CGEMM_COL_TT_B0_ML048_NX048_KX01_SRC_H

const unsigned int cgemm_Col_TT_B0_ML048_NX048_KX01_workGroupNumRows = 16;
const unsigned int cgemm_Col_TT_B0_ML048_NX048_KX01_workGroupNumCols = 16;
const unsigned int cgemm_Col_TT_B0_ML048_NX048_KX01_microTileNumRows = 3;
const unsigned int cgemm_Col_TT_B0_ML048_NX048_KX01_microTileNumCols = 3;
const unsigned int cgemm_Col_TT_B0_ML048_NX048_KX01_unroll = 1;

const char * const cgemm_Col_TT_B0_ML048_NX048_KX01_src ="\n"
"/* cgemm_Col_TT_B0_ML048_NX048_KX01 */\n"
"\n"
"/* kernel parameters */\n"
"#define WG_NUM_ROWS          16\n"
"#define WG_NUM_COLS          16\n"
"#define MICRO_TILE_NUM_ROWS  3\n"
"#define MICRO_TILE_NUM_COLS  3\n"
"#define MACRO_TILE_NUM_ROWS  48\n"
"#define MACRO_TILE_NUM_COLS  48\n"
"#define NUM_UNROLL_ITER      1\n"
"\n"
"#define LOCAL_ROW_PAD        0\n"
"#define LOCAL_COL_PAD        0\n"
"\n"
"/* global memory indices */\n"
"#define GET_GLOBAL_INDEX_A(ROW,COL) ((ROW)*lda+(COL))\n"
"#define GET_GLOBAL_INDEX_B(ROW,COL) ((ROW)*ldb+(COL))\n"
"#define GET_GLOBAL_INDEX_C(ROW,COL) ((COL)*ldc+(ROW))\n"
"\n"
"/* local memory indices */\n"
"#define GET_LOCAL_INDEX_A(ROW,COL) ((ROW) + (COL)*((MACRO_TILE_NUM_ROWS)+(LOCAL_COL_PAD)) )\n"
"#define GET_LOCAL_INDEX_B(ROW,COL) ((COL) + (ROW)*((MACRO_TILE_NUM_COLS)+(LOCAL_ROW_PAD)) )\n"
"\n"
"/* data types */\n"
"#define DATA_TYPE_STR float2\n"
"#define TYPE_MAD(MULA,MULB,DST) \\\n"
"  DST.s0 = mad(  MULA.s0, MULB.s0, DST.s0 ); \\\n"
"  DST.s0 = mad( -MULA.s1, MULB.s1, DST.s0 ); \\\n"
"  DST.s1 = mad(  MULA.s0, MULB.s1, DST.s1 ); \\\n"
"  DST.s1 = mad(  MULA.s1, MULB.s0, DST.s1 );\n"
"#define TYPE_MAD_WRITE( DST, ALPHA, REG, BETA ) \\\n"
"  /* (1) */ \\\n"
"  type_mad_tmp = REG.s0; \\\n"
"  REG.s0 *= ALPHA.s0; \\\n"
"  REG.s0 = mad( -ALPHA.s1, REG.s1, REG.s0 ); \\\n"
"  REG.s1 *= ALPHA.s0; \\\n"
"  REG.s1 = mad(  ALPHA.s1, type_mad_tmp, REG.s1 ); \\\n"
"  DST = REG;\n"
"\n"
"/* 3x3 micro-tile */\n"
"#define MICRO_TILE \\\n"
"  rA[0] = localA[offA + 0*WG_NUM_ROWS]; \\\n"
"  rA[1] = localA[offA + 1*WG_NUM_ROWS]; \\\n"
"  rA[2] = localA[offA + 2*WG_NUM_ROWS]; \\\n"
"  rB[0] = localB[offB + 0*WG_NUM_COLS]; \\\n"
"  rB[1] = localB[offB + 1*WG_NUM_COLS]; \\\n"
"  rB[2] = localB[offB + 2*WG_NUM_COLS]; \\\n"
"  offA += (MACRO_TILE_NUM_ROWS+LOCAL_COL_PAD); \\\n"
"  offB += (MACRO_TILE_NUM_COLS+LOCAL_ROW_PAD); \\\n"
"  TYPE_MAD(rA[0],rB[0],rC[0][0]); \\\n"
"  TYPE_MAD(rA[0],rB[1],rC[0][1]); \\\n"
"  TYPE_MAD(rA[0],rB[2],rC[0][2]); \\\n"
"  TYPE_MAD(rA[1],rB[0],rC[1][0]); \\\n"
"  TYPE_MAD(rA[1],rB[1],rC[1][1]); \\\n"
"  TYPE_MAD(rA[1],rB[2],rC[1][2]); \\\n"
"  TYPE_MAD(rA[2],rB[0],rC[2][0]); \\\n"
"  TYPE_MAD(rA[2],rB[1],rC[2][1]); \\\n"
"  TYPE_MAD(rA[2],rB[2],rC[2][2]); \\\n"
"  mem_fence(CLK_LOCAL_MEM_FENCE);\n"
"\n"
"__attribute__((reqd_work_group_size(WG_NUM_COLS,WG_NUM_ROWS,1)))\n"
"__kernel void cgemm_Col_TT_B0_ML048_NX048_KX01(\n"
"  __global DATA_TYPE_STR const * restrict A,\n"
"  __global DATA_TYPE_STR const * restrict B,\n"
"  __global DATA_TYPE_STR       *          C,\n"
"  DATA_TYPE_STR const alpha,\n"
"  DATA_TYPE_STR const beta,\n"
"  uint const M,\n"
"  uint const N,\n"
"  uint const K,\n"
"  uint const lda,\n"
"  uint const ldb,\n"
"  uint const ldc,\n"
"  uint const offsetA,\n"
"  uint const offsetB,\n"
"  uint const offsetC\n"
") {\n"
"\n"
"  /* apply offsets */\n"
"  A += offsetA;\n"
"  B += offsetB;\n"
"  C += offsetC;\n"
"\n"
"  /* allocate registers */\n"
"  DATA_TYPE_STR rC[MICRO_TILE_NUM_ROWS][MICRO_TILE_NUM_COLS] = { {0} };\n"
"  DATA_TYPE_STR rA[MICRO_TILE_NUM_ROWS];\n"
"  DATA_TYPE_STR rB[MICRO_TILE_NUM_COLS];\n"
"\n"
"  /* allocate local memory */\n"
"  __local DATA_TYPE_STR localA[NUM_UNROLL_ITER*(MACRO_TILE_NUM_ROWS+LOCAL_COL_PAD)];\n"
"  __local DATA_TYPE_STR localB[NUM_UNROLL_ITER*(MACRO_TILE_NUM_COLS+LOCAL_ROW_PAD)];\n"
"\n"
"  /* work item indices */\n"
"  uint groupRow = M / 48; // last row\n"
"  uint groupCol = get_group_id(1);\n"
"  uint localRow = get_local_id(0);\n"
"  uint localCol = get_local_id(1);\n"
"  uint localSerial = localRow + localCol*WG_NUM_ROWS;\n"
"\n"
"  /* global indices being loaded */\n"
"#define globalARow(LID) (groupRow*MACRO_TILE_NUM_ROWS + (localSerial+(LID)*WG_NUM_ROWS*WG_NUM_COLS)/NUM_UNROLL_ITER)\n"
"#define globalACol(LID) ((localSerial+(LID)*WG_NUM_ROWS*WG_NUM_COLS)%NUM_UNROLL_ITER)\n"
"#define globalBRow(LID) ((localSerial+(LID)*WG_NUM_ROWS*WG_NUM_COLS)/MACRO_TILE_NUM_COLS)\n"
"#define globalBCol(LID) (groupCol*MACRO_TILE_NUM_COLS + (localSerial+(LID)*WG_NUM_ROWS*WG_NUM_COLS)%MACRO_TILE_NUM_COLS)\n"
"\n"
"  /* loop over k */\n"
"  uint block_k = K / NUM_UNROLL_ITER;\n"
"  do {\n"
"\n"
"    /* local indices being written */\n"
"#define localARow (localSerial / NUM_UNROLL_ITER)\n"
"#define localACol (localSerial % NUM_UNROLL_ITER)\n"
"#define localAStride (WG_NUM_ROWS*WG_NUM_COLS/NUM_UNROLL_ITER)\n"
"#define localBRow ( localSerial / MACRO_TILE_NUM_COLS )\n"
"#define localBCol ( localSerial % MACRO_TILE_NUM_COLS )\n"
"#define localBStride  (WG_NUM_ROWS*WG_NUM_COLS)\n"
"    __local DATA_TYPE_STR *lA = localA + GET_LOCAL_INDEX_A(localARow, localACol);\n"
"    __local DATA_TYPE_STR *lB = localB + GET_LOCAL_INDEX_B(localBRow, localBCol);\n"
"    barrier(CLK_LOCAL_MEM_FENCE);\n"
"\n"
"    /* load global -> local */\n"
"    if ( localSerial + 0*WG_NUM_ROWS*WG_NUM_COLS < (WG_NUM_ROWS*MICRO_TILE_NUM_ROWS*NUM_UNROLL_ITER) ) {\n"
"      lA[ 0*localAStride ] = ( globalARow(0) >= M) ? (float2)(0.f, 0.f) : A[ GET_GLOBAL_INDEX_A( globalARow(0), globalACol(0) ) ];\n"
"    }\n"
"    if ( localSerial + 0*WG_NUM_ROWS*WG_NUM_COLS < (WG_NUM_COLS*MICRO_TILE_NUM_COLS*NUM_UNROLL_ITER) ) {\n"
"      lB[ 0*localBStride ] = B[ GET_GLOBAL_INDEX_B( globalBRow(0), globalBCol(0) ) ];\n"
"    }\n"
"    barrier(CLK_LOCAL_MEM_FENCE);\n"
"    uint offA = localRow;\n"
"    uint offB = localCol;\n"
"\n"
"    /* do mads */\n"
"    MICRO_TILE\n"
"\n"
"    /* shift to next k block */\n"
"    A += NUM_UNROLL_ITER;\n"
"    B += ldb*NUM_UNROLL_ITER;\n"
"\n"
"  } while (--block_k > 0);\n"
"\n"
"\n"
"  /* which global Cij index */\n"
"  uint globalCRow = groupRow * MACRO_TILE_NUM_ROWS + localRow;\n"
"  uint globalCCol = groupCol * MACRO_TILE_NUM_COLS + localCol;\n"
"\n"
"  /* write global Cij */\n"
"  float type_mad_tmp;\n"
"  if (globalCRow+0*WG_NUM_ROWS < M){  TYPE_MAD_WRITE( C[ GET_GLOBAL_INDEX_C( globalCRow+0*WG_NUM_ROWS, globalCCol+0*WG_NUM_COLS) ], alpha, rC[0][0], beta )}\n"
"  if (globalCRow+0*WG_NUM_ROWS < M){  TYPE_MAD_WRITE( C[ GET_GLOBAL_INDEX_C( globalCRow+0*WG_NUM_ROWS, globalCCol+1*WG_NUM_COLS) ], alpha, rC[0][1], beta )}\n"
"  if (globalCRow+0*WG_NUM_ROWS < M){  TYPE_MAD_WRITE( C[ GET_GLOBAL_INDEX_C( globalCRow+0*WG_NUM_ROWS, globalCCol+2*WG_NUM_COLS) ], alpha, rC[0][2], beta )}\n"
"  if (globalCRow+1*WG_NUM_ROWS < M){  TYPE_MAD_WRITE( C[ GET_GLOBAL_INDEX_C( globalCRow+1*WG_NUM_ROWS, globalCCol+0*WG_NUM_COLS) ], alpha, rC[1][0], beta )}\n"
"  if (globalCRow+1*WG_NUM_ROWS < M){  TYPE_MAD_WRITE( C[ GET_GLOBAL_INDEX_C( globalCRow+1*WG_NUM_ROWS, globalCCol+1*WG_NUM_COLS) ], alpha, rC[1][1], beta )}\n"
"  if (globalCRow+1*WG_NUM_ROWS < M){  TYPE_MAD_WRITE( C[ GET_GLOBAL_INDEX_C( globalCRow+1*WG_NUM_ROWS, globalCCol+2*WG_NUM_COLS) ], alpha, rC[1][2], beta )}\n"
"  if (globalCRow+2*WG_NUM_ROWS < M){  TYPE_MAD_WRITE( C[ GET_GLOBAL_INDEX_C( globalCRow+2*WG_NUM_ROWS, globalCCol+0*WG_NUM_COLS) ], alpha, rC[2][0], beta )}\n"
"  if (globalCRow+2*WG_NUM_ROWS < M){  TYPE_MAD_WRITE( C[ GET_GLOBAL_INDEX_C( globalCRow+2*WG_NUM_ROWS, globalCCol+1*WG_NUM_COLS) ], alpha, rC[2][1], beta )}\n"
"  if (globalCRow+2*WG_NUM_ROWS < M){  TYPE_MAD_WRITE( C[ GET_GLOBAL_INDEX_C( globalCRow+2*WG_NUM_ROWS, globalCCol+2*WG_NUM_COLS) ], alpha, rC[2][2], beta )}\n"
"\n"
"}\n"
"";

#else
#endif
