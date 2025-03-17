// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -disable-O0-optnone -target-feature +v \
// RUN:   -target-feature +xandesvsintload \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint8mf8_t test_nds_vlnu8_v_u8mf8_tu(vuint8mf8_t vd, const void *rs1,
                                      size_t vl) {
  return __riscv_nds_vlnu8_tu(vd, rs1, vl);
}

vuint8mf4_t test_nds_vlnu8_v_u8mf4_tu(vuint8mf4_t vd, const void *rs1,
                                      size_t vl) {
  return __riscv_nds_vlnu8_tu(vd, rs1, vl);
}

vuint8mf2_t test_nds_vlnu8_v_u8mf2_tu(vuint8mf2_t vd, const void *rs1,
                                      size_t vl) {
  return __riscv_nds_vlnu8_tu(vd, rs1, vl);
}

vuint8m1_t test_nds_vlnu8_v_u8m1_tu(vuint8m1_t vd, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tu(vd, rs1, vl);
}

vuint8m2_t test_nds_vlnu8_v_u8m2_tu(vuint8m2_t vd, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tu(vd, rs1, vl);
}

vuint8m4_t test_nds_vlnu8_v_u8m4_tu(vuint8m4_t vd, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tu(vd, rs1, vl);
}

vuint8m8_t test_nds_vlnu8_v_u8m8_tu(vuint8m8_t vd, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tu(vd, rs1, vl);
}

vuint8mf8_t test_nds_vlnu8_v_u8mf8_tum(vbool64_t vm, vuint8mf8_t vd,
                                       const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tum(vm, vd, rs1, vl);
}

vuint8mf4_t test_nds_vlnu8_v_u8mf4_tum(vbool32_t vm, vuint8mf4_t vd,
                                       const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tum(vm, vd, rs1, vl);
}

vuint8mf2_t test_nds_vlnu8_v_u8mf2_tum(vbool16_t vm, vuint8mf2_t vd,
                                       const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tum(vm, vd, rs1, vl);
}

vuint8m1_t test_nds_vlnu8_v_u8m1_tum(vbool8_t vm, vuint8m1_t vd,
                                     const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tum(vm, vd, rs1, vl);
}

vuint8m2_t test_nds_vlnu8_v_u8m2_tum(vbool4_t vm, vuint8m2_t vd,
                                     const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tum(vm, vd, rs1, vl);
}

vuint8m4_t test_nds_vlnu8_v_u8m4_tum(vbool2_t vm, vuint8m4_t vd,
                                     const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tum(vm, vd, rs1, vl);
}

vuint8m8_t test_nds_vlnu8_v_u8m8_tum(vbool1_t vm, vuint8m8_t vd,
                                     const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tum(vm, vd, rs1, vl);
}

vuint8mf8_t test_nds_vlnu8_v_u8mf8_tumu(vbool64_t vm, vuint8mf8_t vd,
                                        const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tumu(vm, vd, rs1, vl);
}

vuint8mf4_t test_nds_vlnu8_v_u8mf4_tumu(vbool32_t vm, vuint8mf4_t vd,
                                        const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tumu(vm, vd, rs1, vl);
}

vuint8mf2_t test_nds_vlnu8_v_u8mf2_tumu(vbool16_t vm, vuint8mf2_t vd,
                                        const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tumu(vm, vd, rs1, vl);
}

vuint8m1_t test_nds_vlnu8_v_u8m1_tumu(vbool8_t vm, vuint8m1_t vd,
                                      const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tumu(vm, vd, rs1, vl);
}

vuint8m2_t test_nds_vlnu8_v_u8m2_tumu(vbool4_t vm, vuint8m2_t vd,
                                      const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tumu(vm, vd, rs1, vl);
}

vuint8m4_t test_nds_vlnu8_v_u8m4_tumu(vbool2_t vm, vuint8m4_t vd,
                                      const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tumu(vm, vd, rs1, vl);
}

vuint8m8_t test_nds_vlnu8_v_u8m8_tumu(vbool1_t vm, vuint8m8_t vd,
                                      const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_tumu(vm, vd, rs1, vl);
}

vuint8mf8_t test_nds_vlnu8_v_u8mf8_mu(vbool64_t vm, vuint8mf8_t vd,
                                      const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_mu(vm, vd, rs1, vl);
}

vuint8mf4_t test_nds_vlnu8_v_u8mf4_mu(vbool32_t vm, vuint8mf4_t vd,
                                      const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_mu(vm, vd, rs1, vl);
}

vuint8mf2_t test_nds_vlnu8_v_u8mf2_mu(vbool16_t vm, vuint8mf2_t vd,
                                      const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_mu(vm, vd, rs1, vl);
}

vuint8m1_t test_nds_vlnu8_v_u8m1_mu(vbool8_t vm, vuint8m1_t vd, const void *rs1,
                                    size_t vl) {
  return __riscv_nds_vlnu8_mu(vm, vd, rs1, vl);
}

vuint8m2_t test_nds_vlnu8_v_u8m2_mu(vbool4_t vm, vuint8m2_t vd, const void *rs1,
                                    size_t vl) {
  return __riscv_nds_vlnu8_mu(vm, vd, rs1, vl);
}

vuint8m4_t test_nds_vlnu8_v_u8m4_mu(vbool2_t vm, vuint8m4_t vd, const void *rs1,
                                    size_t vl) {
  return __riscv_nds_vlnu8_mu(vm, vd, rs1, vl);
}

vuint8m8_t test_nds_vlnu8_v_u8m8_mu(vbool1_t vm, vuint8m8_t vd, const void *rs1,
                                    size_t vl) {
  return __riscv_nds_vlnu8_mu(vm, vd, rs1, vl);
}
