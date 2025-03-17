// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone -target-feature +v \
// RUN:   -target-feature +xandesbf \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vbfloat16m1_t test_vfredmax_vs_bf16mf4_bf16m1(vbfloat16mf4_t vs2,
                                              vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16mf4_bf16m1(vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16mf2_bf16m1(vbfloat16mf2_t vs2,
                                              vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16mf2_bf16m1(vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m1_bf16m1(vbfloat16m1_t vs2,
                                             vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m1_bf16m1(vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m2_bf16m1(vbfloat16m2_t vs2,
                                             vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m2_bf16m1(vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m4_bf16m1(vbfloat16m4_t vs2,
                                             vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m4_bf16m1(vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m8_bf16m1(vbfloat16m8_t vs2,
                                             vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m8_bf16m1(vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16mf4_bf16m1_m(vbool64_t vm,
                                                vbfloat16mf4_t vs2,
                                                vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16mf4_bf16m1_m(vm, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16mf2_bf16m1_m(vbool32_t vm,
                                                vbfloat16mf2_t vs2,
                                                vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16mf2_bf16m1_m(vm, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m1_bf16m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                               vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m1_bf16m1_m(vm, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m2_bf16m1_m(vbool8_t vm, vbfloat16m2_t vs2,
                                               vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m2_bf16m1_m(vm, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m4_bf16m1_m(vbool4_t vm, vbfloat16m4_t vs2,
                                               vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m4_bf16m1_m(vm, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m8_bf16m1_m(vbool2_t vm, vbfloat16m8_t vs2,
                                               vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m8_bf16m1_m(vm, vs2, vs1, vl);
}
