#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void deleteFile(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "5", 1);
    close(fd);
    usleep(100000);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "6", 1);
    close(fd);
    usleep(100000);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "22", 2);
    close(fd);
    usleep(100000);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "27", 2);
    close(fd);
    usleep(100000);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "17", 2);
    close(fd);
    usleep(100000);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "25", 2);
    close(fd);
    usleep(100000);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "24", 2);
    close(fd);
    usleep(100000);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "23", 2);
    close(fd);
    usleep(100000);
}