#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void deleteFile(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "17", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "27", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "22", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "23", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "24", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "5", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "6", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "26", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "12", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "16", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "20", 2);
    close(fd);

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    write(fd, "21", 2);
    close(fd);

    return;
}