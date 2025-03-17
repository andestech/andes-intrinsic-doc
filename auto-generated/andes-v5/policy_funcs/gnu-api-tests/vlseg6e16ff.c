/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbfloat16mf4x6_t test_vlseg6e16ff_v_bf16mf4x6_tu(vbfloat16mf4x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16mf4x6_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf2x6_t test_vlseg6e16ff_v_bf16mf2x6_tu(vbfloat16mf2x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16mf2x6_tu(vd, rs1, new_vl, vl);
}

vbfloat16m1x6_t test_vlseg6e16ff_v_bf16m1x6_tu(vbfloat16m1x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16m1x6_tu(vd, rs1, new_vl, vl);
}

vbfloat16mf4x6_t test_vlseg6e16ff_v_bf16mf4x6_tum(vbool64_t vm, vbfloat16mf4x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16mf4x6_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x6_t test_vlseg6e16ff_v_bf16mf2x6_tum(vbool32_t vm, vbfloat16mf2x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16mf2x6_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x6_t test_vlseg6e16ff_v_bf16m1x6_tum(vbool16_t vm, vbfloat16m1x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16m1x6_tum(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4x6_t test_vlseg6e16ff_v_bf16mf4x6_tumu(vbool64_t vm, vbfloat16mf4x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16mf4x6_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x6_t test_vlseg6e16ff_v_bf16mf2x6_tumu(vbool32_t vm, vbfloat16mf2x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16mf2x6_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x6_t test_vlseg6e16ff_v_bf16m1x6_tumu(vbool16_t vm, vbfloat16m1x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16m1x6_tumu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf4x6_t test_vlseg6e16ff_v_bf16mf4x6_mu(vbool64_t vm, vbfloat16mf4x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16mf4x6_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16mf2x6_t test_vlseg6e16ff_v_bf16mf2x6_mu(vbool32_t vm, vbfloat16mf2x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16mf2x6_mu(vm, vd, rs1, new_vl, vl);
}

vbfloat16m1x6_t test_vlseg6e16ff_v_bf16m1x6_mu(vbool16_t vm, vbfloat16m1x6_t vd, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg6e16ff_v_bf16m1x6_mu(vm, vd, rs1, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg6e16ff\.[ivxfswum.]+\s+} 12 } } */
