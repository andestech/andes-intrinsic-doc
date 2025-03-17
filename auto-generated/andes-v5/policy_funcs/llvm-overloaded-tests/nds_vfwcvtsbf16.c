// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvlsseg -target-feature +zvlsidx \
// RUN:   -target-feature +xandesvbfhcvt -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_nds_vfwcvt_s_bf16_f32mf2_tu(vfloat32mf2_t vd,
                                               vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s_tu(vd, vs2, vl);
}

vfloat32m1_t test_nds_vfwcvt_s_bf16_f32m1_tu(vfloat32m1_t vd,
                                             vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s_tu(vd, vs2, vl);
}

vfloat32m2_t test_nds_vfwcvt_s_bf16_f32m2_tu(vfloat32m2_t vd, vbfloat16m1_t vs2,
                                             size_t vl) {
  return __riscv_nds_vfwcvt_s_tu(vd, vs2, vl);
}

vfloat32m4_t test_nds_vfwcvt_s_bf16_f32m4_tu(vfloat32m4_t vd, vbfloat16m2_t vs2,
                                             size_t vl) {
  return __riscv_nds_vfwcvt_s_tu(vd, vs2, vl);
}

vfloat32m8_t test_nds_vfwcvt_s_bf16_f32m8_tu(vfloat32m8_t vd, vbfloat16m4_t vs2,
                                             size_t vl) {
  return __riscv_nds_vfwcvt_s_tu(vd, vs2, vl);
}
