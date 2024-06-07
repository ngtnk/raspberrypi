#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void standby(void)
{
    int fd = 0;
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "5", 1);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio5/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);
    fd = open("/sys/class/gpio/gpio5/value",O_WRONLY);
    write(fd,"1",1);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "6", 1);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio6/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);
    fd = open("/sys/class/gpio/gpio6/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);

    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "22", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio22/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);
    fd = open("/sys/class/gpio/gpio22/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "27", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio27/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);
    fd = open("/sys/class/gpio/gpio27/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "17", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio17/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);
    fd = open("/sys/class/gpio/gpio17/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "25", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio25/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);
    fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "24", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio24/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);
    fd = open("/sys/class/gpio/gpio24/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "23", 2);
    close(fd);
    usleep(100000);
    fd = open("/sys/class/gpio/gpio23/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);
    fd = open("/sys/class/gpio/gpio23/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
}