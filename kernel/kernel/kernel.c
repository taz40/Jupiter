#include <stdio.h>
#include <stdint.h>

#include <kernel/tty.h>
#include <kernel/memmanage.h>

void kernel_main(uint32_t* multiboot) {
	terminal_initialize();
    uint32_t memorySize = multiboot[2];
    memmanage_init(1024*1024, memorySize*1024);
    memmanage_malloc(1024);
	printf("Hello, kernel World!\n");
    printf("Memory: %iMB", multiboot[2] / 1024);
}
