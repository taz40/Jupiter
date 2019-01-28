#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	printf("Hello, kernel World!\n");
    //for(int i = 0; i < 100; i++){
        printf("This is on a new line!%i\n", 1);
    //}
}
