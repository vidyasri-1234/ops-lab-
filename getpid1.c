
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid, ppid;

    pid = getpid();    // Get current process ID
    ppid = getppid();  // Get parent process ID

    printf("Process ID (PID): %d\n", pid);
    printf("Parent Process ID (PPID): %d\n", ppid);

    return 0;
}

