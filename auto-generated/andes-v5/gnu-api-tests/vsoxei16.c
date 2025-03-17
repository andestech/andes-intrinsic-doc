/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsoxei16_v_bf16mf4(__bf16 *rs1, vuint16mf4_t rs2, vbfloat16mf4_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16mf4(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16mf2(__bf16 *rs1, vuint16mf2_t rs2, vbfloat16mf2_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16mf2(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16m1(__bf16 *rs1, vuint16m1_t rs2, vbfloat16m1_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16m1(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16m2(__bf16 *rs1, vuint16m2_t rs2, vbfloat16m2_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16m2(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16m4(__bf16 *rs1, vuint16m4_t rs2, vbfloat16m4_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16m4(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16m8(__bf16 *rs1, vuint16m8_t rs2, vbfloat16m8_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16m8(rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16mf4_m(vbool64_t vm, __bf16 *rs1, vuint16mf4_t rs2, vbfloat16mf4_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16mf4_m(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16mf2_m(vbool32_t vm, __bf16 *rs1, vuint16mf2_t rs2, vbfloat16mf2_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16mf2_m(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16m1_m(vbool16_t vm, __bf16 *rs1, vuint16m1_t rs2, vbfloat16m1_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16m1_m(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16m2_m(vbool8_t vm, __bf16 *rs1, vuint16m2_t rs2, vbfloat16m2_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16m2_m(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16m4_m(vbool4_t vm, __bf16 *rs1, vuint16m4_t rs2, vbfloat16m4_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16m4_m(vm, rs1, rs2, vs3, vl);
}

void test_vsoxei16_v_bf16m8_m(vbool2_t vm, __bf16 *rs1, vuint16m8_t rs2, vbfloat16m8_t vs3, size_t vl) {
  return __riscv_vsoxei16_v_bf16m8_m(vm, rs1, rs2, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsoxei16\.[ivxfswum.]+\s+} 12 } } */
