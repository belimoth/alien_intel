#pragma once

#define s32_max        2147483647
#define u32_max        4294967295
#define float_min      ((float)-3.40282346638528860e+38)
#define float_max      ((float)3.40282346638528860e+38)
#define absi(val)      ((val) > 0 ? (val) : -(val))
#define absf(val)      ((val) > 0.0f ? (val) : -(val))
#define align_2(val)   (((val) | 1) ^ 0x1)
#define align_4(val)   (((val) | 3) ^ 0x3)
#define align_8(val)   ((((val) + 0x7) | 0x7) ^ 0x7)
#define align_16(val)  ((((val) + 0xf) | 0xf) ^ 0xf)
#define align_64(val)  (((((uintptr_t)(val)) + 0x3f) | 0x3f) ^ 0x3f)
#define array_count(a) (int)(sizeof(a) / sizeof(a[0]))
