#include <stdio.h>
#include <stdint.h>

#include <kernel/tty.h>

void kernel_main(uint32_t* multiboot) {
	terminal_initialize();
	printf("Hello, kernel World!\n");
    printf("Multiboot tag1 type: %i", multiboot[2]);
}
