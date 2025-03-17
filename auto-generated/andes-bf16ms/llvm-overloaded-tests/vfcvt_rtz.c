// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone -target-feature +v \
// RUN:   -target-feature +xandesbf \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x(vs2, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x(vs2, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x(vs2, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x(vs2, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x(vs2, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_x(vs2, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu(vs2, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu(vs2, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu(vs2, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu(vs2, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu(vs2, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8(vbfloat16m8_t vs2, size_t vl) {
  return __riscv_vfcvt_rtz_xu(vs2, vl);
}

vint16mf4_t test_vfcvt_rtz_x_f_v_i16mf4_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_x(vm, vs2, vl);
}

vint16mf2_t test_vfcvt_rtz_x_f_v_i16mf2_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_x(vm, vs2, vl);
}

vint16m1_t test_vfcvt_rtz_x_f_v_i16m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x(vm, vs2, vl);
}

vint16m2_t test_vfcvt_rtz_x_f_v_i16m2_m(vbool8_t vm, vbfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x(vm, vs2, vl);
}

vint16m4_t test_vfcvt_rtz_x_f_v_i16m4_m(vbool4_t vm, vbfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x(vm, vs2, vl);
}

vint16m8_t test_vfcvt_rtz_x_f_v_i16m8_m(vbool2_t vm, vbfloat16m8_t vs2,
                                        size_t vl) {
  return __riscv_vfcvt_rtz_x(vm, vs2, vl);
}

vuint16mf4_t test_vfcvt_rtz_xu_f_v_u16mf4_m(vbool64_t vm, vbfloat16mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_rtz_xu(vm, vs2, vl);
}

vuint16mf2_t test_vfcvt_rtz_xu_f_v_u16mf2_m(vbool32_t vm, vbfloat16mf2_t vs2,
                                            size_t vl) {
  return __riscv_vfcvt_rtz_xu(vm, vs2, vl);
}

vuint16m1_t test_vfcvt_rtz_xu_f_v_u16m1_m(vbool16_t vm, vbfloat16m1_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu(vm, vs2, vl);
}

vuint16m2_t test_vfcvt_rtz_xu_f_v_u16m2_m(vbool8_t vm, vbfloat16m2_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu(vm, vs2, vl);
}

vuint16m4_t test_vfcvt_rtz_xu_f_v_u16m4_m(vbool4_t vm, vbfloat16m4_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu(vm, vs2, vl);
}

vuint16m8_t test_vfcvt_rtz_xu_f_v_u16m8_m(vbool2_t vm, vbfloat16m8_t vs2,
                                          size_t vl) {
  return __riscv_vfcvt_rtz_xu(vm, vs2, vl);
}
