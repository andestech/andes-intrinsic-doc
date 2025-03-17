// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvlsseg -target-feature +zvlsidx \
// RUN:   -target-feature +xandesvbfhcvt -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16mf4_t test_nds_vfncvt_bf16_s_bf16mf4(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, vl);
}

vbfloat16mf2_t test_nds_vfncvt_bf16_s_bf16mf2(vfloat32m1_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, vl);
}

vbfloat16m1_t test_nds_vfncvt_bf16_s_bf16m1(vfloat32m2_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, vl);
}

vbfloat16m2_t test_nds_vfncvt_bf16_s_bf16m2(vfloat32m4_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, vl);
}

vbfloat16m4_t test_nds_vfncvt_bf16_s_bf16m4(vfloat32m8_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, vl);
}

vbfloat16mf4_t test_nds_vfncvt_bf16_s_bf16mf4_rm(vfloat32mf2_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_nds_vfncvt_bf16_s_bf16mf2_rm(vfloat32m1_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_nds_vfncvt_bf16_s_bf16m1_rm(vfloat32m2_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_nds_vfncvt_bf16_s_bf16m2_rm(vfloat32m4_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_nds_vfncvt_bf16_s_bf16m4_rm(vfloat32m8_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16(vs2, __RISCV_FRM_RNE, vl);
}
