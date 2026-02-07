#pragma once

#define memp_0         0
#define memp_stage     4 // cleared on stage load
#define memp_5         5
#define memp_permanent 6 // never cleared
#define memp_7         7
#define memp_8         8

void *memp_alloc( uint32_t len, uint8_t pool);
