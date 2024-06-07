Q. 以下を参考に入力された英数字の文字列をモールス信号に変換して点灯させるプログラムを作成せよ。
- モールス信号の.は短い点滅(ex. 300ミリ秒点灯)を表す
- モールス信号の-は長い点滅(ex. 900ミリ秒点灯)を表す
- 符号間は短い消灯を挟むものとする(ex. 100ミリ秒)
- 文字間は中程度の消灯を挟むものとする(ex. 300ミリ秒)
- 単語間は長い消灯を挟むものとする(ex. 700ミリ秒)

A: .-  
B: -...  
C: -.-.  
D: -..  
E: .  
F: ..-.  
G: --.  
H: ....  
I: ..  
J: .---  
K: -.-  
L: .-..  
M: --  
N: -.  
O: ---  
P: .--.  
Q: --.-  
R: .-.  
S: ...  
T: -  
U: ..-  
V: ...-  
W: .--  
X: -..-  
Y: -.--  
Z: --..  
0: -----  
1: .----  
2: ..---  
3: ...--  
4: ....-  
5: .....  
6: -....  
7: --...  
8: ---..  
9: ----.  

```C
#include <stdio.h>
#include <string.h>
#include <unistd.h>

// 以下の関数を実装する
void standby() {
    // GPIO18の利用を開始
}

void deleteFile() {
    // GPIO18の利用を終了
}

void blink_dot() {
    // TODO: LEDを点灯させて0.3秒待機後、LEDを消灯して0.1秒待機するコードを書く
}

void blink_dash() {
    // TODO: LEDを点灯させて0.9秒待機後、LEDを消灯して0.1秒待機するコードを書く
}

void blink_char_space() {
    // TODO: 文字間のスペースを示す0.3秒の待機時間を設定するコードを書く
}

void blink_word_space() {
    // TODO: 単語間のスペースを示す0.7秒の待機時間を設定するコードを書く
}

void blink_char(char c) {
    // TODO: 各アルファベットや数字に対するモールスコードを実装するコードを書く
    // 例:
    // if (c == 'A' || c == 'a') {
        // blink_dot();
        // blink_dash();
    // }
    blink_char_space(); // 文字の終わりに文字間隔を追加
}

int main(void) {
    standby(); // GPIO18の利用を開始する。
    printf("Please enter a string: ");
    fgets(str, 100, stdin); // ユーザーからの入力を読み取る

    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            blink_word_space(); // TODO: 単語間のスペースを処理するコードを書く
        } else {
            blink_char(str[i]); // TODO: 文字をモールスコードに変換するコードを書く
        }
    }
    deleteFile(); // GPIO18の利用を終了する。
    return 0;
}
```