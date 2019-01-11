# xv6 OS Assignment

---

This assignment helped me to understand the working of the xv6 OS and I also implemented a few system calls to design the asked functionality.

### Features

Following additional features were implemented as part of the assignment:

- "**_invertcase_**" command - which takes string arguments and prints out the case inverted string.
- Changed the default scheduling algorithm to **priority based scheduling**: modifying process structure (in proc.h) and various other files associated to it (quite a lot of them!)
- implementing syscalls:
  - **_ps_** : prints out the currently running processes names, pids and their priorities.
  - **_set_priority_** : used to set/change the priority of a process.
- **_System call tracing_** : modification of the kernel to print out a line for each system call invocation. It has been commented by default to avoid abnormal view.

### How to Run the OS

```
cd xv6-assignment
make
make qemu #use make qemu-nox to run within thne same terminal
```
