#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
// #define DEBUG

void on_H(void)
{
#ifdef DEBUG
    fprintf(stderr, "H");
#endif
    int fd = 0;

    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio23/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio26/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);

    return;
}
void on_E(void)
{
#ifdef DEBUG
    fprintf(stderr, "E");
#endif

    int fd = 0;

    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio23/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio26/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);

    return;
}
void on_L(void)
{
#ifdef DEBUG
    fprintf(stderr, "L");
#endif

    int fd = 0;

    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio23/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio26/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);

    return;
}
void on_O(void)
{
#ifdef DEBUG
    fprintf(stderr, "O");
#endif

    int fd = 0;

    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio23/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio5/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    fd = open("/sys/class/gpio/gpio26/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);

    return;
}