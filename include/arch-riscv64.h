#pragma once

#define PAGE_OFFSET		0xffffffc000000000UL
#define TASK_SIZE		(1UL << 39)
#define MODULE_ADDR		(PAGE_OFFSET - 0x04000000)
#define KERNEL_ADDR		(PAGE_OFFSET + 0x80000)

#define PAGE_SHIFT		12
#define PTE_FILE_MAX_BITS	60

#define PTRACE_GETREGS		0
#define PTRACE_GETFPREGS	0
#define PTRACE_SETREGS		0
#define PTRACE_SETFPREGS	0

#define SYSCALLS syscalls_riscv64
