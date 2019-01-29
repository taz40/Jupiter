#include <stdio.h>
#include <stdint.h>

#include <kernel/tty.h>

void kernel_main(uint8_t* multiboot) {
	terminal_initialize();
	printf("Hello, kernel World!\n");
    printf("Multiboot Structure located at: %i", multiboot[0]);
}
