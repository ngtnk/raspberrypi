#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void standby(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "17", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio17/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "27", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio27/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "22", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio22/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "23", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio23/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "24", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio24/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "5", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio5/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "6", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio6/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "26", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio26/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "12", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio12/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "16", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio16/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "20", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio20/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "21", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio21/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    return;
}