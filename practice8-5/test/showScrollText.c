#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define DEBUG

// TODO: 必要なプロトタイプ宣言を書く

int main(void)
{
    int i;
    int cnt;
    int fd = 0;

    // 関数ポインタの配列を使って関数を配列化する。
    // 関数を配列にすると次のように処理できる
    // 1回目は0, 1, 2, 3番目の関数(off, off, off, off)
    // 2回目は1, 2, 3, 4番目の関数(off, off, off, on_H)
    // 3回目は2, 3, 4, 5番目の関数(off, off, on_H, on_E)
    // 4回目は3, 4, 5, 6番目の関数(off, on_H, on_E, on_L)
    // 5回目は4, 5, 6, 7番目の関数(on_H, on_E, on_L, on_L)を呼び出せばよい
    void (*on[13])(void) = {off, off, off, off, on_H, on_E, on_L, on_L, on_O, off, off, off, off};

    standby();

    for (i = 0; i < 10; i++)
    {
        cnt = 0;
        while (cnt < 100)
        {
            // TODO: 1けためを点灯させる処理

            // on[i]関数を実行する
            on[i]();
            usleep(2);
            off();

            // TODO: 2けためを点灯させる処理

            // on[i+1]関数を実行する
            on[i + 1]();
            usleep(2);
            off();

            // TODO: 3けためを点灯させる処理

            // on[i+2]関数を実行する
            on[i + 2]();
            usleep(2);
            off();

            // TODO: 4けためを点灯させる処理

            // on[i+3]関数を実行する
            on[i + 3]();
            usleep(2);
            off();

            cnt++;
        }
    }

    deleteFile();
    return 0;
}