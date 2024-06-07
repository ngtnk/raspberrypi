#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void off0(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}
void off1(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}
void off2(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}
void off3(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}
void off4(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}
void off5(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}
void off6(void)
{
    int fd = 0;

    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}
void off7(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}
void off8(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}
void off9(void)
{
    int fd = 0;

    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}