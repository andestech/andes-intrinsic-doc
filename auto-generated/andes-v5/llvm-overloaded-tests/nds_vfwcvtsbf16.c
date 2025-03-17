// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +zvlsseg -target-feature +zvlsidx \
// RUN:   -target-feature +xandesvbfhcvt -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32mf2_t test_nds_vfwcvt_s_bf16_f32mf2(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s(vs2, vl);
}

vfloat32m1_t test_nds_vfwcvt_s_bf16_f32m1(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s(vs2, vl);
}

vfloat32m2_t test_nds_vfwcvt_s_bf16_f32m2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s(vs2, vl);
}

vfloat32m4_t test_nds_vfwcvt_s_bf16_f32m4(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s(vs2, vl);
}

vfloat32m8_t test_nds_vfwcvt_s_bf16_f32m8(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s(vs2, vl);
}
