#include <riscv_vector.h>
#include <stdint.h>

vuint8mf8_t test_nds_vlnu8_v_u8mf8(const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8mf8(rs1, vl);
}

vuint8mf4_t test_nds_vlnu8_v_u8mf4(const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8mf4(rs1, vl);
}

vuint8mf2_t test_nds_vlnu8_v_u8mf2(const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8mf2(rs1, vl);
}

vuint8m1_t test_nds_vlnu8_v_u8m1(const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8m1(rs1, vl);
}

vuint8m2_t test_nds_vlnu8_v_u8m2(const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8m2(rs1, vl);
}

vuint8m4_t test_nds_vlnu8_v_u8m4(const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8m4(rs1, vl);
}

vuint8m8_t test_nds_vlnu8_v_u8m8(const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8m8(rs1, vl);
}

vuint8mf8_t test_nds_vlnu8_v_u8mf8_m(vbool64_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8mf8_m(vm, rs1, vl);
}

vuint8mf4_t test_nds_vlnu8_v_u8mf4_m(vbool32_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8mf4_m(vm, rs1, vl);
}

vuint8mf2_t test_nds_vlnu8_v_u8mf2_m(vbool16_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8mf2_m(vm, rs1, vl);
}

vuint8m1_t test_nds_vlnu8_v_u8m1_m(vbool8_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8m1_m(vm, rs1, vl);
}

vuint8m2_t test_nds_vlnu8_v_u8m2_m(vbool4_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8m2_m(vm, rs1, vl);
}

vuint8m4_t test_nds_vlnu8_v_u8m4_m(vbool2_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8m4_m(vm, rs1, vl);
}

vuint8m8_t test_nds_vlnu8_v_u8m8_m(vbool1_t vm, const void *rs1, size_t vl) {
  return __riscv_nds_vlnu8_v_u8m8_m(vm, rs1, vl);
}
