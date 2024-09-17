#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int pid, fd, n;
    int status;
    char buf[11]; // buffer to store read data + null terminator

    fd = open("text.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        exit(1);
    }

    printf("hello world\n");

    pid = fork();
    if (pid == -1)
    {
        perror("bad fork");
        exit(1);
    }

    n = read(fd, buf, 10);
    if (n == -1)
    {
        perror("Error reading file");
        exit(1);
    }
    buf[n] = '\0'; // null-terminate the string
    write(1, buf, n);

    if (pid == 0)
    {
        printf("this is child\n");
    }
    else
    {
        wait(&status);
        printf("this is parent\n");
    }

    close(fd);
    return 0;
}
