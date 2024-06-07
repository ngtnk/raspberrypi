#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

void standby()
{
    int fd = 0;
    fd = open("/sys/class/gpio/export", O_WRONLY);
    write(fd, "18", 2);
    close(fd);

    fd = 0;
    fd = open("/sys/class/gpio/gpio18/direction", O_WRONLY);
    write(fd, "out", 3);
    close(fd);
}

void deleteFile()
{
    int fd = 0;
    fd = open("/sys/class/gpio/unexport", O_WRONLY);

    write(fd, "18", 2);
    close(fd);
}

void blink_dot()
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio18/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    usleep(300000); // 0.3秒待機
    fd = open("/sys/class/gpio/gpio18/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    usleep(100000); // 0.1秒待機
}
void blink_dash()
{
    int fd = 0;
    fd = open("/sys/class/gpio/gpio18/value", O_WRONLY);
    write(fd, "1", 1);
    close(fd);
    usleep(900000); // 0.9秒待機
    fd = open("/sys/class/gpio/gpio18/value", O_WRONLY);
    write(fd, "0", 1);
    close(fd);
    usleep(100000); // 0.1秒待機
}
void blink_char_space()
{
    usleep(300000); // 0.3秒待機
}
void blink_word_space()
{
    usleep(700000); // 0.7秒待機
}
void blink_char(char c)
{
    switch (c)
    {
    case 'A':
    case 'a':
        blink_dot();
        blink_dash();
        break;
    case 'B':
    case 'b':
        blink_dash();
        blink_dot();
        blink_dot();
        blink_dot();
        break;
    case 'C':
    case 'c':
        blink_dash();
        blink_dot();
        blink_dash();
        blink_dot();
        break;
    case 'D':
    case 'd':
        blink_dash();
        blink_dot();
        blink_dot();
        break;
    case 'E':
    case 'e':
        blink_dot();
        break;
    case 'F':
    case 'f':
        blink_dot();
        blink_dot();
        blink_dash();
        blink_dot();
        break;
    case 'G':
    case 'g':
        blink_dash();
        blink_dash();
        blink_dot();
        break;
    case 'H':
    case 'h':
        blink_dot();
        blink_dot();
        blink_dot();
        blink_dot();
        break;
    case 'I':
    case 'i':
        blink_dot();
        blink_dot();
        break;
    case 'J':
    case 'j':
        blink_dot();
        blink_dash();
        blink_dash();
        blink_dash();
        break;
    case 'K':
    case 'k':
        blink_dash();
        blink_dot();
        blink_dash();
        break;
    case 'L':
    case 'l':
        blink_dot();
        blink_dash();
        blink_dot();
        blink_dot();
        break;
    case 'M':
    case 'm':
        blink_dash();
        blink_dash();
        break;
    case 'N':
    case 'n':
        blink_dash();
        blink_dot();
        break;
    case 'O':
    case 'o':
        blink_dash();
        blink_dash();
        blink_dash();
        break;
    case 'P':
    case 'p':
        blink_dot();
        blink_dash();
        blink_dash();
        blink_dot();
        break;
    case 'Q':
    case 'q':
        blink_dash();
        blink_dash();
        blink_dot();
        blink_dash();
        break;
    case 'R':
    case 'r':
        blink_dot();
        blink_dash();
        blink_dot();
        break;
    case 'S':
    case 's':
        blink_dot();
        blink_dot();
        blink_dot();
        break;
    case 'T':
    case 't':
        blink_dash();
        break;
    case 'U':
    case 'u':
        blink_dot();
        blink_dot();
        blink_dash();
        break;
    case 'V':
    case 'v':
        blink_dot();
        blink_dot();
        blink_dot();
        blink_dash();
        break;
    case 'W':
    case 'w':
        blink_dot();
        blink_dash();
        blink_dash();
        break;
    case 'X':
    case 'x':
        blink_dash();
        blink_dot();
        blink_dot();
        blink_dash();
        break;
    case 'Y':
    case 'y':
        blink_dash();
        blink_dot();
        blink_dash();
        blink_dash();
        break;
    case 'Z':
    case 'z':
        blink_dash();
        blink_dash();
        blink_dot();
        blink_dot();
        break;
    case '0':
        blink_dash();
        blink_dash();
        blink_dash();
        blink_dash();
        blink_dash();
        break;
    case '1':
        blink_dot();
        blink_dash();
        blink_dash();
        blink_dash();
        blink_dash();
        break;
    case '2':
        blink_dot();
        blink_dot();
        blink_dash();
        blink_dash();
        blink_dash();
        break;
    case '3':
        blink_dot();
        blink_dot();
        blink_dot();
        blink_dash();
        blink_dash();
        break;
    case '4':
        blink_dot();
        blink_dot();
        blink_dot();
        blink_dot();
        blink_dash();
        break;
    case '5':
        blink_dot();
        blink_dot();
        blink_dot();
        blink_dot();
        blink_dot();
        break;
    case '6':
        blink_dash();
        blink_dot();
        blink_dot();
        blink_dot();
        blink_dot();
        break;
    case '7':
        blink_dash();
        blink_dash();
        blink_dot();
        blink_dot();
        blink_dot();
        break;
    case '8':
        blink_dash();
        blink_dash();
        blink_dash();
        blink_dot();
        blink_dot();
        break;
    case '9':
        blink_dash();
        blink_dash();
        blink_dash();
        blink_dash();
        blink_dot();
        break;
    default:
        break;
    }
    blink_char_space(); // 文字の終わりに文字間隔を追加
}

int main(void)
{
    standby();
    usleep(1000000);
    char str[100];
    printf("Please enter a string: ");
    fgets(str, 100, stdin); // ユーザーからの入力を読み取る
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            blink_word_space(); // 単語間のスペースを処理
        }
        else
        {
            blink_char(str[i]);
        }
    }
    deleteFile();
    return 0;
}