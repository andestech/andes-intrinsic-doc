/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbfloat16mf4x7_t test_vlseg7e16_v_bf16mf4x7_m(vbool64_t vm, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg7e16(vm, rs1, vl);
}

vbfloat16mf2x7_t test_vlseg7e16_v_bf16mf2x7_m(vbool32_t vm, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg7e16(vm, rs1, vl);
}

vbfloat16m1x7_t test_vlseg7e16_v_bf16m1x7_m(vbool16_t vm, const __bf16 *rs1, size_t vl) {
  return __riscv_vlseg7e16(vm, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg7e16\.[ivxfswum.]+\s+} 3 } } */
