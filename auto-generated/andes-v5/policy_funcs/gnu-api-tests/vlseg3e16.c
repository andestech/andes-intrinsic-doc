/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbfloat16mf4x3_t test_vlseg3e16_v_bf16mf4x3_tu(vbfloat16mf4x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf4x3_tu(vd, rs1, vl);
}

vbfloat16mf2x3_t test_vlseg3e16_v_bf16mf2x3_tu(vbfloat16mf2x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf2x3_tu(vd, rs1, vl);
}

vbfloat16m1x3_t test_vlseg3e16_v_bf16m1x3_tu(vbfloat16m1x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m1x3_tu(vd, rs1, vl);
}

vbfloat16m2x3_t test_vlseg3e16_v_bf16m2x3_tu(vbfloat16m2x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m2x3_tu(vd, rs1, vl);
}

vbfloat16mf4x3_t test_vlseg3e16_v_bf16mf4x3_tum(vbool64_t vm, vbfloat16mf4x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf4x3_tum(vm, vd, rs1, vl);
}

vbfloat16mf2x3_t test_vlseg3e16_v_bf16mf2x3_tum(vbool32_t vm, vbfloat16mf2x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf2x3_tum(vm, vd, rs1, vl);
}

vbfloat16m1x3_t test_vlseg3e16_v_bf16m1x3_tum(vbool16_t vm, vbfloat16m1x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m1x3_tum(vm, vd, rs1, vl);
}

vbfloat16m2x3_t test_vlseg3e16_v_bf16m2x3_tum(vbool8_t vm, vbfloat16m2x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m2x3_tum(vm, vd, rs1, vl);
}

vbfloat16mf4x3_t test_vlseg3e16_v_bf16mf4x3_tumu(vbool64_t vm, vbfloat16mf4x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf4x3_tumu(vm, vd, rs1, vl);
}

vbfloat16mf2x3_t test_vlseg3e16_v_bf16mf2x3_tumu(vbool32_t vm, vbfloat16mf2x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf2x3_tumu(vm, vd, rs1, vl);
}

vbfloat16m1x3_t test_vlseg3e16_v_bf16m1x3_tumu(vbool16_t vm, vbfloat16m1x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m1x3_tumu(vm, vd, rs1, vl);
}

vbfloat16m2x3_t test_vlseg3e16_v_bf16m2x3_tumu(vbool8_t vm, vbfloat16m2x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m2x3_tumu(vm, vd, rs1, vl);
}

vbfloat16mf4x3_t test_vlseg3e16_v_bf16mf4x3_mu(vbool64_t vm, vbfloat16mf4x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf4x3_mu(vm, vd, rs1, vl);
}

vbfloat16mf2x3_t test_vlseg3e16_v_bf16mf2x3_mu(vbool32_t vm, vbfloat16mf2x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16mf2x3_mu(vm, vd, rs1, vl);
}

vbfloat16m1x3_t test_vlseg3e16_v_bf16m1x3_mu(vbool16_t vm, vbfloat16m1x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m1x3_mu(vm, vd, rs1, vl);
}

vbfloat16m2x3_t test_vlseg3e16_v_bf16m2x3_mu(vbool8_t vm, vbfloat16m2x3_t vd, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg3e16_v_bf16m2x3_mu(vm, vd, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg3e16\.[ivxfswum.]+\s+} 16 } } */
