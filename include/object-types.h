#pragma once

enum objecttype {
	OBJ_MMAP_ANON,
	OBJ_MMAP_FILE,
	OBJ_MMAP_TESTFILE,
	OBJ_FD_PIPE,
	OBJ_FD_FILE,
	OBJ_FD_PERF,
	OBJ_FD_EPOLL,
	OBJ_FD_EVENTFD,
	OBJ_FD_TIMERFD,
	OBJ_FD_TESTFILE,
	OBJ_FD_MEMFD,
	OBJ_FD_DRM,
	OBJ_FD_INOTIFY,
	OBJ_FD_SOCKET,
	OBJ_FD_USERFAULTFD,
	OBJ_FD_FANOTIFY,
	OBJ_FD_BPF_MAP,
	OBJ_FD_BPF_PROG,
	OBJ_FUTEX,
	OBJ_SYSV_SHM,
	MAX_OBJECT_TYPES,
};
