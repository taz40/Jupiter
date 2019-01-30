#ifndef _KERNEL_TTY_H
#define _KERNEL_TTY_H

#include <stddef.h>

struct head{
    bool free;
    uint32_t size;
    uint32_t* next;
};

static head root;

void memmanage_init(uint32_t start, uint32_t size);
uint32_t* memmanage_alloc(uint32_t size);
void memmanage_free(uint32_t pointer);

#endif
