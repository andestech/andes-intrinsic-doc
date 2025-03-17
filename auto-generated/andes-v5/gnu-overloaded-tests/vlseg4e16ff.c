/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbfloat16mf4x4_t test_vlseg4e16ff_v_bf16mf4x4_m(vbool64_t vm, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(vm, rs1, new_vl, vl);
}

vbfloat16mf2x4_t test_vlseg4e16ff_v_bf16mf2x4_m(vbool32_t vm, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(vm, rs1, new_vl, vl);
}

vbfloat16m1x4_t test_vlseg4e16ff_v_bf16m1x4_m(vbool16_t vm, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(vm, rs1, new_vl, vl);
}

vbfloat16m2x4_t test_vlseg4e16ff_v_bf16m2x4_m(vbool8_t vm, const __bf16 *rs1, size_t *new_vl, size_t vl) {
  return __riscv_vlseg4e16ff(vm, rs1, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg4e16ff\.[ivxfswum.]+\s+} 4 } } */
