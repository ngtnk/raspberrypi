#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void on0(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}
void on1(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}
void on2(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}
void on3(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}
void on4(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}
void on5(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}
void on6(void)
{
    int fd = 0;

    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}
void on7(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}
void on8(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}
void on9(void)
{
    int fd = 0;

    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
}