#ifndef _KERNEL_TTY_H
#define _KERNEL_TTY_H

#include <stddef.h>
#include <stdint.h>

struct head{
    uint8_t free;
    uint32_t size;
    uint32_t* next;
}__attribute__((packed));

void memmanage_init(uint32_t start, uint32_t size);
uint32_t* memmanage_malloc(uint32_t size);
uint32_t* memmanage_calloc(uint32_t count, uint32_t size);
void memmanage_mfree(uint32_t pointer);

#endif
