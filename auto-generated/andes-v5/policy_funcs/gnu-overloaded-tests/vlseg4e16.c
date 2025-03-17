/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbfloat16mf4x4_t test_vlseg4e16_v_bf16mf4x4_tu(vbfloat16mf4x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tu(vd, rs1, vl);
}

vbfloat16mf2x4_t test_vlseg4e16_v_bf16mf2x4_tu(vbfloat16mf2x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tu(vd, rs1, vl);
}

vbfloat16m1x4_t test_vlseg4e16_v_bf16m1x4_tu(vbfloat16m1x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tu(vd, rs1, vl);
}

vbfloat16m2x4_t test_vlseg4e16_v_bf16m2x4_tu(vbfloat16m2x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tu(vd, rs1, vl);
}

vbfloat16mf4x4_t test_vlseg4e16_v_bf16mf4x4_tum(vbool64_t vm, vbfloat16mf4x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tum(vm, vd, rs1, vl);
}

vbfloat16mf2x4_t test_vlseg4e16_v_bf16mf2x4_tum(vbool32_t vm, vbfloat16mf2x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tum(vm, vd, rs1, vl);
}

vbfloat16m1x4_t test_vlseg4e16_v_bf16m1x4_tum(vbool16_t vm, vbfloat16m1x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tum(vm, vd, rs1, vl);
}

vbfloat16m2x4_t test_vlseg4e16_v_bf16m2x4_tum(vbool8_t vm, vbfloat16m2x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tum(vm, vd, rs1, vl);
}

vbfloat16mf4x4_t test_vlseg4e16_v_bf16mf4x4_tumu(vbool64_t vm, vbfloat16mf4x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tumu(vm, vd, rs1, vl);
}

vbfloat16mf2x4_t test_vlseg4e16_v_bf16mf2x4_tumu(vbool32_t vm, vbfloat16mf2x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tumu(vm, vd, rs1, vl);
}

vbfloat16m1x4_t test_vlseg4e16_v_bf16m1x4_tumu(vbool16_t vm, vbfloat16m1x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tumu(vm, vd, rs1, vl);
}

vbfloat16m2x4_t test_vlseg4e16_v_bf16m2x4_tumu(vbool8_t vm, vbfloat16m2x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_tumu(vm, vd, rs1, vl);
}

vbfloat16mf4x4_t test_vlseg4e16_v_bf16mf4x4_mu(vbool64_t vm, vbfloat16mf4x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_mu(vm, vd, rs1, vl);
}

vbfloat16mf2x4_t test_vlseg4e16_v_bf16mf2x4_mu(vbool32_t vm, vbfloat16mf2x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_mu(vm, vd, rs1, vl);
}

vbfloat16m1x4_t test_vlseg4e16_v_bf16m1x4_mu(vbool16_t vm, vbfloat16m1x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_mu(vm, vd, rs1, vl);
}

vbfloat16m2x4_t test_vlseg4e16_v_bf16m2x4_mu(vbool8_t vm, vbfloat16m2x4_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg4e16_mu(vm, vd, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg4e16\.[ivxfswum.]+\s+} 16 } } */
