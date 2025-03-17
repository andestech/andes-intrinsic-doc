/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsseg2e16_v_bf16mf4x2(__bf16 *rs1, vbfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16mf4x2(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16mf2x2(__bf16 *rs1, vbfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16mf2x2(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m1x2(__bf16 *rs1, vbfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16m1x2(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m2x2(__bf16 *rs1, vbfloat16m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16m2x2(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m4x2(__bf16 *rs1, vbfloat16m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16m4x2(rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16mf4x2_m(vbool64_t vm, __bf16 *rs1, vbfloat16mf4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16mf4x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16mf2x2_m(vbool32_t vm, __bf16 *rs1, vbfloat16mf2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16mf2x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m1x2_m(vbool16_t vm, __bf16 *rs1, vbfloat16m1x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16m1x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m2x2_m(vbool8_t vm, __bf16 *rs1, vbfloat16m2x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16m2x2_m(vm, rs1, vs3, vl);
}

void test_vsseg2e16_v_bf16m4x2_m(vbool4_t vm, __bf16 *rs1, vbfloat16m4x2_t vs3, size_t vl) {
  return __riscv_vsseg2e16_v_bf16m4x2_m(vm, rs1, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg2e16\.[ivxfswum.]+\s+} 10 } } */
