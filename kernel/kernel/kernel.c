#include <stdio.h>
#include <stdint.h>

#include <kernel/tty.h>
#include <kernel/memmanage.h>

void kernel_main(uint32_t* multiboot) {
	terminal_initialize();
    uint32_t memorySize = multiboot[2];
    memmanage_init(1024*1024, memorySize*1024);
    const char* test = (const char*)memmanage_malloc(sizeof(char)*10);
    //test = "test";
    printf("test: %i\n", (uint32_t)test);
	printf("Hello, kernel World!\n");
    printf("Memory: %iMB", multiboot[2] / 1024);
}
