// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone -target-feature +v \
// RUN:   -target-feature +xandesbf \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint16mf4_t test_vfcvt_x_f_v_i16mf4(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, vl);
}

vbfloat16mf4_t test_vfcvt_f_x_v_bf16mf4(vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16mf2_t test_vfcvt_f_x_v_bf16mf2(vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16m1_t test_vfcvt_f_x_v_bf16m1(vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16m2_t test_vfcvt_f_x_v_bf16m2(vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16m4_t test_vfcvt_f_x_v_bf16m4(vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16m8_t test_vfcvt_f_x_v_bf16m8(vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16mf4_t test_vfcvt_f_xu_v_bf16mf4(vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16mf2_t test_vfcvt_f_xu_v_bf16mf2(vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16m1_t test_vfcvt_f_xu_v_bf16m1(vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16m2_t test_vfcvt_f_xu_v_bf16m2(vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16m4_t test_vfcvt_f_xu_v_bf16m4(vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vbfloat16m8_t test_vfcvt_f_xu_v_bf16m8(vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                    size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_m(vbool8_t vm, vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_m(vbool4_t vm, vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_m(vbool2_t vm, vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_m(vbool8_t vm, vbfloat16m2_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_m(vbool4_t vm, vbfloat16m4_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_m(vbool2_t vm, vbfloat16m8_t vs2,
                                      size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, vl);
}

vbfloat16mf4_t test_vfcvt_f_x_v_bf16mf4_m(vbool64_t vm, vint16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16mf2_t test_vfcvt_f_x_v_bf16mf2_m(vbool32_t vm, vint16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16m1_t test_vfcvt_f_x_v_bf16m1_m(vbool16_t vm, vint16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16m2_t test_vfcvt_f_x_v_bf16m2_m(vbool8_t vm, vint16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16m4_t test_vfcvt_f_x_v_bf16m4_m(vbool4_t vm, vint16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16m8_t test_vfcvt_f_x_v_bf16m8_m(vbool2_t vm, vint16m8_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16mf4_t test_vfcvt_f_xu_v_bf16mf4_m(vbool64_t vm, vuint16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16mf2_t test_vfcvt_f_xu_v_bf16mf2_m(vbool32_t vm, vuint16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16m1_t test_vfcvt_f_xu_v_bf16m1_m(vbool16_t vm, vuint16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16m2_t test_vfcvt_f_xu_v_bf16m2_m(vbool8_t vm, vuint16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16m4_t test_vfcvt_f_xu_v_bf16m4_m(vbool4_t vm, vuint16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vbfloat16m8_t test_vfcvt_f_xu_v_bf16m8_m(vbool2_t vm, vuint16m8_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_x(vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_rm(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_rm(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_rm(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_rm(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_rm(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_rm(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_xu(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfcvt_f_x_v_bf16mf4_rm(vint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfcvt_f_x_v_bf16mf2_rm(vint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfcvt_f_x_v_bf16m1_rm(vint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfcvt_f_x_v_bf16m2_rm(vint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfcvt_f_x_v_bf16m4_rm(vint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfcvt_f_x_v_bf16m8_rm(vint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfcvt_f_xu_v_bf16mf4_rm(vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfcvt_f_xu_v_bf16mf2_rm(vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfcvt_f_xu_v_bf16m1_rm(vuint16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfcvt_f_xu_v_bf16m2_rm(vuint16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfcvt_f_xu_v_bf16m4_rm(vuint16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfcvt_f_xu_v_bf16m8_rm(vuint16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_bf(vs2, __RISCV_FRM_RNE, vl);
}

vint16mf4_t test_vfcvt_x_f_v_i16mf4_rm_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16mf2_t test_vfcvt_x_f_v_i16mf2_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16m1_t test_vfcvt_x_f_v_i16m1_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16m2_t test_vfcvt_x_f_v_i16m2_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16m4_t test_vfcvt_x_f_v_i16m4_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vint16m8_t test_vfcvt_x_f_v_i16m8_rm_m(vbool2_t vm, vbfloat16m8_t vs2,
                                       size_t vl) {
  return __riscv_vfcvt_x(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf4_t test_vfcvt_xu_f_v_u16mf4_rm_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16mf2_t test_vfcvt_xu_f_v_u16mf2_rm_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m1_t test_vfcvt_xu_f_v_u16m1_rm_m(vbool16_t vm, vbfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m2_t test_vfcvt_xu_f_v_u16m2_rm_m(vbool8_t vm, vbfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m4_t test_vfcvt_xu_f_v_u16m4_rm_m(vbool4_t vm, vbfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vuint16m8_t test_vfcvt_xu_f_v_u16m8_rm_m(vbool2_t vm, vbfloat16m8_t vs2,
                                         size_t vl) {
  return __riscv_vfcvt_xu(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfcvt_f_x_v_bf16mf4_rm_m(vbool64_t vm, vint16mf4_t vs2,
                                             size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfcvt_f_x_v_bf16mf2_rm_m(vbool32_t vm, vint16mf2_t vs2,
                                             size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfcvt_f_x_v_bf16m1_rm_m(vbool16_t vm, vint16m1_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfcvt_f_x_v_bf16m2_rm_m(vbool8_t vm, vint16m2_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfcvt_f_x_v_bf16m4_rm_m(vbool4_t vm, vint16m4_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfcvt_f_x_v_bf16m8_rm_m(vbool2_t vm, vint16m8_t vs2,
                                           size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf4_t test_vfcvt_f_xu_v_bf16mf4_rm_m(vbool64_t vm, vuint16mf4_t vs2,
                                              size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_vfcvt_f_xu_v_bf16mf2_rm_m(vbool32_t vm, vuint16mf2_t vs2,
                                              size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_vfcvt_f_xu_v_bf16m1_rm_m(vbool16_t vm, vuint16m1_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_vfcvt_f_xu_v_bf16m2_rm_m(vbool8_t vm, vuint16m2_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_vfcvt_f_xu_v_bf16m4_rm_m(vbool4_t vm, vuint16m4_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m8_t test_vfcvt_f_xu_v_bf16m8_rm_m(vbool2_t vm, vuint16m8_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_bf(vm, vs2, __RISCV_FRM_RNE, vl);
}
