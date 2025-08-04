#include <cstdint>
#define __LITTLE_ENDIAN_BITFIELD 1

struct GDTEntry {
  uint32_t base;
  uint32_t limit;
  union {
    struct {
#ifdef __LITTLE_ENDIAN_BITFIELD
      uint8_t TYPE : 4;
      uint8_t S : 1;
      uint8_t DPL : 2;
      uint8_t P : 1;
#else
      uint8_t P : 1;
      uint8_t DPL : 2;
      uint8_t S : 1;
      uint8_t TYPE : 4;
#endif
    } bits;
    uint8_t value;
  } access;
  union {
    struct {
#ifdef __LITTLE_ENDIAN_BITFIELD
      uint8_t AVL : 1;
      uint8_t O : 1;
      uint8_t DB : 1;
      uint8_t G : 1;
      uint8_t unused : 4;
#else
      uint8_t unused : 4;
      uint8_t G : 1;
      uint8_t DB : 1;
      uint8_t O : 1;
      uint8_t AVL : 1;
#endif
    } bits;
    uint8_t value;
  } flags;
};
