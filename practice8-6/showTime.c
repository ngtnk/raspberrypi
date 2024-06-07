// a: 17
// b: 22
// c:  6
// d: 24
// e: 23
// f: 27
// g: 26
// dp: 5
// d1: 12
// d2: 16
// d3: 20
// d4: 21

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h> // time, localtime, struct tm
#define GPIO "/sys/class/gpio"
#define EXPORT "/sys/class/gpio/export"
#define UNEXPORT "/sys/class/gpio/unexport"
#define GPIO_ARR_SIZE 12 // 使用するGPIOの数
#define BLINK_LENGTH 3000 // 何回くりかえすか
#define DEBUG

char *gpio_arr[GPIO_ARR_SIZE] = {"17", "22", "6", "24", "23", "27", "26", "5", "12", "16", "20", "21"};

char *nums[10][7] = {
    {"17", "22", "6", "24", "23", "27"},       // 0
    {"22", "6"},                               // 1
    {"17", "22", "24", "23", "26"},            // 2
    {"17", "22", "6", "24", "26"},             // 3
    {"22", "6", "27", "26"},                   // 4
    {"17", "6", "24", "27", "26"},             // 5
    {"17", "6", "24", "23", "27", "26"},       // 6
    {"17", "22", "6"},                         // 7
    {"17", "22", "6", "24", "23", "27", "26"}, // 8
    {"17", "22", "6", "24", "27", "26"},       // 9
};

void standby(void)
{
    int fd = 0;
    char path[33];
    for (int i = 0; i < GPIO_ARR_SIZE; i++)
    {
        fd = open(EXPORT, O_WRONLY);
        write(fd, gpio_arr[i], 2);
        close(fd);
#ifdef DEBUG
        fprintf(stderr, "export GPIO %s\n", gpio_arr[i]);
#endif
        usleep(100000);
        sprintf(path, "%s/gpio%s/direction", GPIO, gpio_arr[i]);
        fd = open(path, O_WRONLY);
        write(fd, "out", 3);
        close(fd);
    }
    return;
}

void deleteFile(void)
{
    int fd = 0;
    char path[33];
    for (int i = 0; i < GPIO_ARR_SIZE; i++)
    {
        fd = open(UNEXPORT, O_WRONLY);
        write(fd, gpio_arr[i], 2);
        close(fd);
#ifdef DEBUG
        fprintf(stderr, "unexport GPIO %s\n", gpio_arr[i]);
#endif
    }
    return;
}

void write_value(char *gpio, char *value)
{
    int fd = 0;
    char path[31];
    sprintf(path, "%s/gpio%s/value", GPIO, gpio);
    fd = open(path, O_WRONLY);
    write(fd, value, 2);
    close(fd);
    return;
}

void blink(int digit, int num)
{
    int fd = 0;
    char path[31];
    switch (digit)
    {
    case 1:
        write_value("12", "1");
        write_value("16", "0");
        write_value("20", "0");
        write_value("21", "0");
        break;
    case 2:
        write_value("12", "0");
        write_value("16", "1");
        write_value("20", "0");
        write_value("21", "0");
        break;
    case 3:
        write_value("12", "0");
        write_value("16", "0");
        write_value("20", "1");
        write_value("21", "0");
        break;
    case 4:
        write_value("12", "0");
        write_value("16", "0");
        write_value("20", "0");
        write_value("21", "1");
        break;
    default:
        write_value("12", "0");
        write_value("16", "0");
        write_value("20", "0");
        write_value("21", "0");
        break;
    }
    for (int i = 0; i < 7; i++)
    {
        if (nums[num][i] == NULL)
            break;
        write_value(nums[num][i], "0");
    }
    return;
}

void clear(void)
{
    int fd = 0;
    char path[31];
    for (int i = 0; i < GPIO_ARR_SIZE; i++)
    {
        write_value(gpio_arr[i], "1");
    }
}

// Practice 7-7
int main(void)
{
    time_t now;
    struct tm *t;
    int first;  // first digit
    int second; // second digit
    int third;  // third digit
    int fourth; // fourth digit
    int cnt = 0;
    standby();
    while (1)
    {
        now = time(NULL);         // get now
        t = localtime(&now);      // cast now to localtime
        first = t->tm_hour / 10;  // first digit of hour
        second = t->tm_hour % 10; // second digit of hour
        third = t->tm_min / 10;   // first digit of min
        fourth = t->tm_min % 10;  // second digit of min
        clear();
        blink(1, first);
        usleep(2);
        clear();
        blink(2, second);
        write_value("5", "0");
        usleep(2);
        clear();
        blink(3, third);
        usleep(2);
        clear();
        blink(4, fourth);
        usleep(2);
        cnt++;
        if (cnt > BLINK_LENGTH)
        {
            clear();
            deleteFile();
            break;
        }
    }
    return 0;
}