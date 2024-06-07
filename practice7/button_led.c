#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(void) {
    int fd;
    char val[2] = {0};
    
    // GPIO25をエクスポート
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "25", 2);
    close(fd);

    // GPIO25を出力に設定
    fd = open("/sys/class/gpio/gpio25/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);

    // GPIO24をエクスポート
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "24", 2);
    close(fd);

    // GPIO24を入力に設定
    fd = open("/sys/class/gpio/gpio24/direction", O_WRONLY);
    write(fd, "in", 2);
    close(fd);

    while (1) {

        fd = open("/sys/class/gpio/gpio24/value", O_RDONLY);
        read(fd, val, 1);
        close(fd);

        // case GPIO 24 value 1
        if (val[0] == '1') {
            fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
            write(fd, "1", 1);
            close(fd);
        } else { // case GPIO 24 value 0
            fd = open("/sys/class/gpio/gpio25/value", O_WRONLY);
            write(fd, "0", 1);
            close(fd);
        }

        usleep(100000); // wait 100000 microseconds
    }

    return 0;
}
