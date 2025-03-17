#include <riscv_vector.h>
#include <stdint.h>

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_tu(vbfloat16mf4_t vd, vint8mf8_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_tu(vbfloat16mf2_t vd, vint8mf4_t vs2,
                                            size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_tu(vbfloat16m1_t vd, vint8mf2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_tu(vbfloat16m2_t vd, vint8m1_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_tu(vbfloat16m4_t vd, vint8m2_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_tu(vbfloat16m8_t vd, vint8m4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_tu(vbfloat16mf4_t vd, vuint8mf8_t vs2,
                                             size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_tu(vbfloat16mf2_t vd, vuint8mf4_t vs2,
                                             size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_tu(vbfloat16m1_t vd, vuint8mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_tu(vbfloat16m2_t vd, vuint8m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_tu(vbfloat16m4_t vd, vuint8m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_tu(vbfloat16m8_t vd, vuint8m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_bf_tu(vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_tu(vint32mf2_t vd, vbfloat16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_tu(vint32m1_t vd, vbfloat16mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_tu(vint32m2_t vd, vbfloat16m1_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_tu(vint32m4_t vd, vbfloat16m2_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_tu(vint32m8_t vd, vbfloat16m4_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_tu(vuint32mf2_t vd, vbfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_tu(vuint32m1_t vd, vbfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_tu(vuint32m2_t vd, vbfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_tu(vuint32m4_t vd, vbfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_tu(vuint32m8_t vd, vbfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_tu(vfloat32mf2_t vd, vbfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_tu(vfloat32m1_t vd, vbfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_tu(vfloat32m2_t vd, vbfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_tu(vfloat32m4_t vd, vbfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_tu(vfloat32m8_t vd, vbfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_tu(vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                             vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                             vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                           vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                           vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                           vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_tum(vbool2_t vm, vbfloat16m8_t vd,
                                           vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_tum(vbool64_t vm, vbfloat16mf4_t vd,
                                              vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_tum(vbool32_t vm, vbfloat16mf2_t vd,
                                              vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_tum(vbool16_t vm, vbfloat16m1_t vd,
                                            vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_tum(vbool8_t vm, vbfloat16m2_t vd,
                                            vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_tum(vbool4_t vm, vbfloat16m4_t vd,
                                            vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_tum(vbool2_t vm, vbfloat16m8_t vd,
                                            vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tum(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_tum(vbool64_t vm, vint32mf2_t vd,
                                         vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_tum(vbool32_t vm, vint32m1_t vd,
                                       vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_tum(vbool16_t vm, vint32m2_t vd,
                                       vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_tum(vbool8_t vm, vint32m4_t vd,
                                       vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_tum(vbool4_t vm, vint32m8_t vd,
                                       vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                           vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                         vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                         vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                         vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_tum(vbool4_t vm, vuint32m8_t vd,
                                         vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                           vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                         vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                         vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                         vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                         vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tum(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                              vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                              vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                            vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                            vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                            vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                            vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_tumu(vbool64_t vm, vbfloat16mf4_t vd,
                                               vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_tumu(vbool32_t vm, vbfloat16mf2_t vd,
                                               vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_tumu(vbool16_t vm, vbfloat16m1_t vd,
                                             vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_tumu(vbool8_t vm, vbfloat16m2_t vd,
                                             vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_tumu(vbool4_t vm, vbfloat16m4_t vd,
                                             vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_tumu(vbool2_t vm, vbfloat16m8_t vd,
                                             vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_tumu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd,
                                          vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_tumu(vbool32_t vm, vint32m1_t vd,
                                        vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_tumu(vbool16_t vm, vint32m2_t vd,
                                        vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_tumu(vbool8_t vm, vint32m4_t vd,
                                        vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_tumu(vbool4_t vm, vint32m8_t vd,
                                        vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                            vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                          vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                          vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                          vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_tumu(vbool4_t vm, vuint32m8_t vd,
                                          vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                            vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                          vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                          vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                          vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                          vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_tumu(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_x_v_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                            vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_x_v_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                            vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_x_v_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                          vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_x_v_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                          vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_x_v_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                          vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_x_v_bf16m8_mu(vbool2_t vm, vbfloat16m8_t vd,
                                          vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16mf4_t test_vfwcvt_f_xu_v_bf16mf4_mu(vbool64_t vm, vbfloat16mf4_t vd,
                                             vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16mf2_t test_vfwcvt_f_xu_v_bf16mf2_mu(vbool32_t vm, vbfloat16mf2_t vd,
                                             vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16m1_t test_vfwcvt_f_xu_v_bf16m1_mu(vbool16_t vm, vbfloat16m1_t vd,
                                           vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16m2_t test_vfwcvt_f_xu_v_bf16m2_mu(vbool8_t vm, vbfloat16m2_t vd,
                                           vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16m4_t test_vfwcvt_f_xu_v_bf16m4_mu(vbool4_t vm, vbfloat16m4_t vd,
                                           vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vbfloat16m8_t test_vfwcvt_f_xu_v_bf16m8_mu(vbool2_t vm, vbfloat16m8_t vd,
                                           vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_bf_mu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_mu(vbool64_t vm, vint32mf2_t vd,
                                        vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_mu(vbool32_t vm, vint32m1_t vd,
                                      vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_mu(vbool16_t vm, vint32m2_t vd,
                                      vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_mu(vbool8_t vm, vint32m4_t vd,
                                      vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_mu(vbool4_t vm, vint32m8_t vd,
                                      vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                          vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                        vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                        vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_mu(vbool8_t vm, vuint32m4_t vd,
                                        vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_mu(vbool4_t vm, vuint32m8_t vd,
                                        vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                          vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                        vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                        vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                        vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                        vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_mu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_tu(vint32mf2_t vd, vbfloat16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_tu(vint32m1_t vd, vbfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_tu(vint32m2_t vd, vbfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_tu(vint32m4_t vd, vbfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_tu(vint32m8_t vd, vbfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_tu(vuint32mf2_t vd,
                                             vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_tu(vuint32m1_t vd, vbfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_tu(vuint32m2_t vd, vbfloat16m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_tu(vuint32m4_t vd, vbfloat16m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_tu(vuint32m8_t vd, vbfloat16m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_tum(vbool64_t vm, vint32mf2_t vd,
                                            vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_tum(vbool32_t vm, vint32m1_t vd,
                                          vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_tum(vbool16_t vm, vint32m2_t vd,
                                          vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_tum(vbool8_t vm, vint32m4_t vd,
                                          vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_tum(vbool4_t vm, vint32m8_t vd,
                                          vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_tum(vbool64_t vm, vuint32mf2_t vd,
                                              vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_tum(vbool32_t vm, vuint32m1_t vd,
                                            vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_tum(vbool16_t vm, vuint32m2_t vd,
                                            vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_tum(vbool8_t vm, vuint32m4_t vd,
                                            vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_tum(vbool4_t vm, vuint32m8_t vd,
                                            vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_tumu(vbool64_t vm, vint32mf2_t vd,
                                             vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_tumu(vbool32_t vm, vint32m1_t vd,
                                           vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_tumu(vbool16_t vm, vint32m2_t vd,
                                           vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_tumu(vbool8_t vm, vint32m4_t vd,
                                           vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_tumu(vbool4_t vm, vint32m8_t vd,
                                           vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_tumu(vbool64_t vm, vuint32mf2_t vd,
                                               vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_tumu(vbool32_t vm, vuint32m1_t vd,
                                             vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_tumu(vbool16_t vm, vuint32m2_t vd,
                                             vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_tumu(vbool8_t vm, vuint32m4_t vd,
                                             vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_tumu(vbool4_t vm, vuint32m8_t vd,
                                             vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_mu(vbool64_t vm, vint32mf2_t vd,
                                           vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_mu(vbool32_t vm, vint32m1_t vd,
                                         vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_mu(vbool16_t vm, vint32m2_t vd,
                                         vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_mu(vbool8_t vm, vint32m4_t vd,
                                         vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_mu(vbool4_t vm, vint32m8_t vd,
                                         vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_mu(vbool64_t vm, vuint32mf2_t vd,
                                             vbfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_mu(vbool32_t vm, vuint32m1_t vd,
                                           vbfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_mu(vbool16_t vm, vuint32m2_t vd,
                                           vbfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_mu(vbool8_t vm, vuint32m4_t vd,
                                           vbfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_mu(vbool4_t vm, vuint32m8_t vd,
                                           vbfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}
