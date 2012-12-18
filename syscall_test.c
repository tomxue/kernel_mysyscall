#include <stdio.h>
#include <errno.h>
#include <sys/syscall.h>
#include <unistd.h>

#define __NR_foo    (__NR_SYSCALL_BASE+376)

int main(int argc, char *argv[])
{
	syscall(__NR_foo, 100);
}
