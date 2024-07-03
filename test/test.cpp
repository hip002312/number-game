#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int num;
    char str[10];

    printf("整数を入力してください: ");
    scanf_s("%s", &str);

    // 入力された文字列の各文字をチェックします
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            printf("整数以外の値が入力されました。\n");
            return 1;
        }
    }

    // 文字列全体が数字であることを確認できた場合、strtol関数を使用して数値に変換します
    num = strtol(str, NULL, 10);

    printf("入力された値は %d です。\n", num);

    return 0;
}