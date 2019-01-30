#include <stdio.h>
#include <stdint.h>

#include <kernel/tty.h>

void kernel_main(uint32_t* multiboot) {
	terminal_initialize();
    uint32_t memorySize = multiboot[2];
	printf("Hello, kernel World!\n");
    printf("Memory: %iMB", multiboot[2] / 1024);
}
