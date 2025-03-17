/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbfloat16mf4x5_t test_vloxseg5ei16_v_bf16mf4x5_tu(vbfloat16mf4x5_t vd, const __bf16 *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_tu(vd, rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vloxseg5ei16_v_bf16mf2x5_tu(vbfloat16mf2x5_t vd, const __bf16 *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_tu(vd, rs1, rs2, vl);
}

vbfloat16m1x5_t test_vloxseg5ei16_v_bf16m1x5_tu(vbfloat16m1x5_t vd, const __bf16 *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_tu(vd, rs1, rs2, vl);
}

vbfloat16mf4x5_t test_vloxseg5ei16_v_bf16mf4x5_tum(vbool64_t vm, vbfloat16mf4x5_t vd, const __bf16 *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vloxseg5ei16_v_bf16mf2x5_tum(vbool32_t vm, vbfloat16mf2x5_t vd, const __bf16 *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x5_t test_vloxseg5ei16_v_bf16m1x5_tum(vbool16_t vm, vbfloat16m1x5_t vd, const __bf16 *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_tum(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x5_t test_vloxseg5ei16_v_bf16mf4x5_tumu(vbool64_t vm, vbfloat16mf4x5_t vd, const __bf16 *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vloxseg5ei16_v_bf16mf2x5_tumu(vbool32_t vm, vbfloat16mf2x5_t vd, const __bf16 *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x5_t test_vloxseg5ei16_v_bf16m1x5_tumu(vbool16_t vm, vbfloat16m1x5_t vd, const __bf16 *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_tumu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf4x5_t test_vloxseg5ei16_v_bf16mf4x5_mu(vbool64_t vm, vbfloat16mf4x5_t vd, const __bf16 *rs1, vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16mf2x5_t test_vloxseg5ei16_v_bf16mf2x5_mu(vbool32_t vm, vbfloat16mf2x5_t vd, const __bf16 *rs1, vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_mu(vm, vd, rs1, rs2, vl);
}

vbfloat16m1x5_t test_vloxseg5ei16_v_bf16m1x5_mu(vbool16_t vm, vbfloat16m1x5_t vd, const __bf16 *rs1, vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg5ei16_mu(vm, vd, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vloxseg5ei16\.[ivxfswum.]+\s+} 12 } } */
