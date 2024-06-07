#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void standby(void);
void on0(void);
void on1(void);
void on2(void);
void on3(void);
void on4(void);
void on5(void);
void on6(void);
void on7(void);
void on8(void);
void on9(void);
void off(void);
void deleteFile(void);

int main(void){
    standby();

    int fd = 0;

    // 1桁目のみつける
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


    on1();
    usleep(1000000);
    off();
    on2();
    usleep(1000000);
    off();
    on3();
    usleep(1000000);
    off();
    on4();
    usleep(1000000);
    off();

    deleteFile();
    return 0;
}