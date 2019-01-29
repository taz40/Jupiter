#include <stdio.h>

#if defined(__is_libk)
#include <kernel/tty.h>
#endif

int puthex(int i) {
#if defined(__is_libk)
	terminal_writehex(i);
#else
	// TODO: Implement stdio and the write system call.
#endif
	return i;
}
// 
