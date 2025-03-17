// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone -target-feature +v \
// RUN:   -target-feature +xandesbf \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat32m1_t test_vfwredosum_vs_bf16mf4_f32m1(vbfloat16mf4_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16mf4_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16mf2_f32m1(vbfloat16mf2_t vs2,
                                              vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16mf2_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m1_f32m1(vbfloat16m1_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m1_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m2_f32m1(vbfloat16m2_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m2_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m4_f32m1(vbfloat16m4_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m4_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m8_f32m1(vbfloat16m8_t vs2,
                                             vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m8_f32m1(vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16mf4_f32m1_m(vbool64_t vm,
                                                vbfloat16mf4_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16mf4_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16mf2_f32m1_m(vbool32_t vm,
                                                vbfloat16mf2_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16mf2_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m1_f32m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m1_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m2_f32m1_m(vbool8_t vm, vbfloat16m2_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m2_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m4_f32m1_m(vbool4_t vm, vbfloat16m4_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m4_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m8_f32m1_m(vbool2_t vm, vbfloat16m8_t vs2,
                                               vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m8_f32m1_m(vm, vs2, vs1, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16mf4_f32m1_rm(vbfloat16mf4_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16mf4_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16mf2_f32m1_rm(vbfloat16mf2_t vs2,
                                                 vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16mf2_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m1_f32m1_rm(vbfloat16m1_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m1_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m2_f32m1_rm(vbfloat16m2_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m2_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m4_f32m1_rm(vbfloat16m4_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m4_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m8_f32m1_rm(vbfloat16m8_t vs2,
                                                vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m8_f32m1_rm(vs2, vs1, __RISCV_FRM_RNE, vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16mf4_f32m1_rm_m(vbool64_t vm,
                                                   vbfloat16mf4_t vs2,
                                                   vfloat32m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredosum_vs_bf16mf4_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                  vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16mf2_f32m1_rm_m(vbool32_t vm,
                                                   vbfloat16mf2_t vs2,
                                                   vfloat32m1_t vs1,
                                                   size_t vl) {
  return __riscv_vfwredosum_vs_bf16mf2_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                  vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m1_f32m1_rm_m(vbool16_t vm,
                                                  vbfloat16m1_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m1_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m2_f32m1_rm_m(vbool8_t vm,
                                                  vbfloat16m2_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m2_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m4_f32m1_rm_m(vbool4_t vm,
                                                  vbfloat16m4_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m4_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}

vfloat32m1_t test_vfwredosum_vs_bf16m8_f32m1_rm_m(vbool2_t vm,
                                                  vbfloat16m8_t vs2,
                                                  vfloat32m1_t vs1, size_t vl) {
  return __riscv_vfwredosum_vs_bf16m8_f32m1_rm_m(vm, vs2, vs1, __RISCV_FRM_RNE,
                                                 vl);
}
