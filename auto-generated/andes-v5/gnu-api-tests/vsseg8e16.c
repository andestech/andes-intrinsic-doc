/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsseg8e16_v_bf16mf4x8(__bf16 *rs1, vbfloat16mf4x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16_v_bf16mf4x8(rs1, vs3, vl);
}

void test_vsseg8e16_v_bf16mf2x8(__bf16 *rs1, vbfloat16mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16_v_bf16mf2x8(rs1, vs3, vl);
}

void test_vsseg8e16_v_bf16m1x8(__bf16 *rs1, vbfloat16m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16_v_bf16m1x8(rs1, vs3, vl);
}

void test_vsseg8e16_v_bf16mf4x8_m(vbool64_t vm, __bf16 *rs1, vbfloat16mf4x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16_v_bf16mf4x8_m(vm, rs1, vs3, vl);
}

void test_vsseg8e16_v_bf16mf2x8_m(vbool32_t vm, __bf16 *rs1, vbfloat16mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16_v_bf16mf2x8_m(vm, rs1, vs3, vl);
}

void test_vsseg8e16_v_bf16m1x8_m(vbool16_t vm, __bf16 *rs1, vbfloat16m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e16_v_bf16m1x8_m(vm, rs1, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg8e16\.[ivxfswum.]+\s+} 6 } } */
