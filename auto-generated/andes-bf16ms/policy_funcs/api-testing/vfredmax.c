#include <riscv_vector.h>
#include <stdint.h>

vbfloat16m1_t test_vfredmax_vs_bf16mf4_bf16m1_tu(vbfloat16m1_t vd,
                                                 vbfloat16mf4_t vs2,
                                                 vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16mf4_bf16m1_tu(vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16mf2_bf16m1_tu(vbfloat16m1_t vd,
                                                 vbfloat16mf2_t vs2,
                                                 vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16mf2_bf16m1_tu(vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m1_bf16m1_tu(vbfloat16m1_t vd,
                                                vbfloat16m1_t vs2,
                                                vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m1_bf16m1_tu(vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m2_bf16m1_tu(vbfloat16m1_t vd,
                                                vbfloat16m2_t vs2,
                                                vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m2_bf16m1_tu(vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m4_bf16m1_tu(vbfloat16m1_t vd,
                                                vbfloat16m4_t vs2,
                                                vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m4_bf16m1_tu(vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m8_bf16m1_tu(vbfloat16m1_t vd,
                                                vbfloat16m8_t vs2,
                                                vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m8_bf16m1_tu(vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16mf4_bf16m1_tum(vbool64_t vm,
                                                  vbfloat16m1_t vd,
                                                  vbfloat16mf4_t vs2,
                                                  vbfloat16m1_t vs1,
                                                  size_t vl) {
  return __riscv_vfredmax_vs_bf16mf4_bf16m1_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16mf2_bf16m1_tum(vbool32_t vm,
                                                  vbfloat16m1_t vd,
                                                  vbfloat16mf2_t vs2,
                                                  vbfloat16m1_t vs1,
                                                  size_t vl) {
  return __riscv_vfredmax_vs_bf16mf2_bf16m1_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m1_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                                 vbfloat16m1_t vs2,
                                                 vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m1_bf16m1_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m2_bf16m1_tum(vbool8_t vm, vbfloat16m1_t vd,
                                                 vbfloat16m2_t vs2,
                                                 vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m2_bf16m1_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m4_bf16m1_tum(vbool4_t vm, vbfloat16m1_t vd,
                                                 vbfloat16m4_t vs2,
                                                 vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m4_bf16m1_tum(vm, vd, vs2, vs1, vl);
}

vbfloat16m1_t test_vfredmax_vs_bf16m8_bf16m1_tum(vbool2_t vm, vbfloat16m1_t vd,
                                                 vbfloat16m8_t vs2,
                                                 vbfloat16m1_t vs1, size_t vl) {
  return __riscv_vfredmax_vs_bf16m8_bf16m1_tum(vm, vd, vs2, vs1, vl);
}
