#include <stdio.h>

#if defined(__is_libk)
#include <kernel/tty.h>
#endif

int putint(int i) {
#if defined(__is_libk)
	terminal_writeint(i);
#else
	// TODO: Implement stdio and the write system call.
#endif
	return i;
}
// 
