#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define DEBUG

void standby(void);
void on_H(void);
void on_E(void);
void on_L(void);
void on_O(void);
void off(void);
void deleteFile(void);

int main(void)
{
    int i;
    int cnt;
    int fd = 0;
    void (*on[13])(void) = {off, off, off, off, on_H, on_E, on_L, on_L, on_O, off, off, off, off};

    standby();

    for (i = 0; i < 10; i++)
    {
        cnt = 0;
        while (cnt < 100)
        {
            // 1st digit
            fd = open("/sys/class/gpio/gpio12/value", O_WRONLY);
            write(fd, "1", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio16/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio20/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio21/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            on[i]();
            usleep(2);
            off();

            // 2nd digit
            fd = open("/sys/class/gpio/gpio12/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio16/value", O_WRONLY);
            write(fd, "1", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio20/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio21/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            on[i + 1]();
            usleep(2);
            off();

            // 3rd digit
            fd = open("/sys/class/gpio/gpio12/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio16/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio20/value", O_WRONLY);
            write(fd, "1", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio21/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            on[i + 2]();
            usleep(2);
            off();

            // 4th digit
            fd = open("/sys/class/gpio/gpio12/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio16/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio20/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
            fd = open("/sys/class/gpio/gpio21/value", O_WRONLY);
            write(fd, "1", 1);
            close(fd);
            on[i + 3]();
            usleep(2);
            off();

            cnt++;
        }
    }

    deleteFile();
    return 0;
}