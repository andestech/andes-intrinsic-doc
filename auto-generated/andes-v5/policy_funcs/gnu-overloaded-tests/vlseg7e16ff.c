/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbfloat16mf4x7_t test_vlseg7e16ff_v_bf16mf4x7_tu(vbfloat16mf4x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf2x7_t test_vlseg7e16ff_v_bf16mf2x7_tu(vbfloat16mf2x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16m1x7_t test_vlseg7e16ff_v_bf16m1x7_tu(vbfloat16m1x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf4x7_t test_vlseg7e16ff_v_bf16mf4x7_tum(vbool64_t vm, vbfloat16mf4x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x7_t test_vlseg7e16ff_v_bf16mf2x7_tum(vbool32_t vm, vbfloat16mf2x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x7_t test_vlseg7e16ff_v_bf16m1x7_tum(vbool16_t vm, vbfloat16m1x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4x7_t test_vlseg7e16ff_v_bf16mf4x7_tumu(vbool64_t vm, vbfloat16mf4x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x7_t test_vlseg7e16ff_v_bf16mf2x7_tumu(vbool32_t vm, vbfloat16mf2x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x7_t test_vlseg7e16ff_v_bf16m1x7_tumu(vbool16_t vm, vbfloat16m1x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4x7_t test_vlseg7e16ff_v_bf16mf4x7_mu(vbool64_t vm, vbfloat16mf4x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x7_t test_vlseg7e16ff_v_bf16mf2x7_mu(vbool32_t vm, vbfloat16mf2x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x7_t test_vlseg7e16ff_v_bf16m1x7_mu(vbool16_t vm, vbfloat16m1x7_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e16ff_mu(vm, vd, rs1, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg7e16ff\.[ivxfswum.]+\s+} 12 } } */
