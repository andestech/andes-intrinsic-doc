#include <riscv_vector.h>
#include <stdint.h>

vfloat32mf2_t test_nds_vfwcvt_s_bf16_f32mf2(vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s_bf16_f32mf2(vs2, vl);
}

vfloat32m1_t test_nds_vfwcvt_s_bf16_f32m1(vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s_bf16_f32m1(vs2, vl);
}

vfloat32m2_t test_nds_vfwcvt_s_bf16_f32m2(vbfloat16m1_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s_bf16_f32m2(vs2, vl);
}

vfloat32m4_t test_nds_vfwcvt_s_bf16_f32m4(vbfloat16m2_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s_bf16_f32m4(vs2, vl);
}

vfloat32m8_t test_nds_vfwcvt_s_bf16_f32m8(vbfloat16m4_t vs2, size_t vl) {
  return __riscv_nds_vfwcvt_s_bf16_f32m8(vs2, vl);
}
