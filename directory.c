
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
    int status;

    status = mkdir("MyDirectory", 0777);

    if (status == 0) {
        printf("Directory created successfully\n");
    } else {
        perror("mkdir failed");
    }

    return 0;
}

