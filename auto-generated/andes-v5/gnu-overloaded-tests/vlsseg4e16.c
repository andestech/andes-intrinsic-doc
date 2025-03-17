/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_xandes -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbfloat16mf4x4_t test_vlsseg4e16_v_bf16mf4x4_m(vbool64_t vm, const __bf16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vbfloat16mf2x4_t test_vlsseg4e16_v_bf16mf2x4_m(vbool32_t vm, const __bf16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vbfloat16m1x4_t test_vlsseg4e16_v_bf16m1x4_m(vbool16_t vm, const __bf16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}

vbfloat16m2x4_t test_vlsseg4e16_v_bf16m2x4_m(vbool8_t vm, const __bf16 *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg4e16(vm, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg4e16\.[ivxfswum.]+\s+} 4 } } */
