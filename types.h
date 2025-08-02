#include <cstdint>

struct GDTEntry {
  uint32_t base;
  uint32_t limit;
  union {
    struct {
      uint8_t unused : 4;
      uint8_t G : 1;
      uint8_t DB : 1;
      uint8_t O : 1;
      uint8_t AVL : 1;
    } bits;
    uint8_t value;
  } access;
  union {
    struct {
      uint8_t P : 1;
      uint8_t DPL : 2;
      uint8_t S : 1;
      uint8_t TYPE : 4;
    } bits;
    uint8_t value;
  } flags;
};
