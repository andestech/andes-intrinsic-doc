#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_nds_vfncvt_bf16_s_bf16mf4_tu(vbfloat16mf4_t vd,
                                                 vfloat32mf2_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16mf4_tu(vd, vs2, vl);
}

vbfloat16mf2_t test_nds_vfncvt_bf16_s_bf16mf2_tu(vbfloat16mf2_t vd,
                                                 vfloat32m1_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16mf2_tu(vd, vs2, vl);
}

vbfloat16m1_t test_nds_vfncvt_bf16_s_bf16m1_tu(vbfloat16m1_t vd,
                                               vfloat32m2_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16m1_tu(vd, vs2, vl);
}

vbfloat16m2_t test_nds_vfncvt_bf16_s_bf16m2_tu(vbfloat16m2_t vd,
                                               vfloat32m4_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16m2_tu(vd, vs2, vl);
}

vbfloat16m4_t test_nds_vfncvt_bf16_s_bf16m4_tu(vbfloat16m4_t vd,
                                               vfloat32m8_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16m4_tu(vd, vs2, vl);
}

vbfloat16mf4_t test_nds_vfncvt_bf16_s_bf16mf4_rm_tu(vbfloat16mf4_t vd,
                                                    vfloat32mf2_t vs2,
                                                    size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16mf4_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16mf2_t test_nds_vfncvt_bf16_s_bf16mf2_rm_tu(vbfloat16mf2_t vd,
                                                    vfloat32m1_t vs2,
                                                    size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16mf2_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m1_t test_nds_vfncvt_bf16_s_bf16m1_rm_tu(vbfloat16m1_t vd,
                                                  vfloat32m2_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16m1_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m2_t test_nds_vfncvt_bf16_s_bf16m2_rm_tu(vbfloat16m2_t vd,
                                                  vfloat32m4_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16m2_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vbfloat16m4_t test_nds_vfncvt_bf16_s_bf16m4_rm_tu(vbfloat16m4_t vd,
                                                  vfloat32m8_t vs2, size_t vl) {
  return __riscv_nds_vfncvt_bf16_s_bf16m4_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}
