#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    int priority, pid;
    if (argc < 3)
    {
        printf(2, "Usage: chpr pid priority");
        exit();
    }
    pid = atoi(argv[1]);
    priority = atoi(argv[2]);
    if (priority < 0 || priority > 100)
    {
        printf(2, "Invalid priority (0-100)!\n");
        exit();
    }
    set_priority(pid, priority);
    printf(1, "pid=%d, new-priority=%d\n", pid, priority);
    exit();
}