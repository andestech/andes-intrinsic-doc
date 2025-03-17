/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsseg7e16_v_bf16mf4x7(__bf16 *rs1, vbfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16mf2x7(__bf16 *rs1, vbfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16m1x7(__bf16 *rs1, vbfloat16m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16mf4x7_m(vbool64_t vm, __bf16 *rs1, vbfloat16mf4x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16mf2x7_m(vbool32_t vm, __bf16 *rs1, vbfloat16mf2x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}

void test_vsseg7e16_v_bf16m1x7_m(vbool16_t vm, __bf16 *rs1, vbfloat16m1x7_t vs3, size_t vl) {
  return __riscv_vsseg7e16(vm, rs1, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg7e16\.[ivxfswum.]+\s+} 6 } } */
