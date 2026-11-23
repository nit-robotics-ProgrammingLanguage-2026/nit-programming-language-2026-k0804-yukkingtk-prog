#include <stdio.h>

/* 整数のビットを逆順に並べた値を計算する */
void reverse_bits(int *input_value, int *reversed_value)
{
    int remaining_value = *input_value;
    int result = 0;

    /* 下位ビットから順番に取り出して逆順に並べる */
    while (remaining_value > 0)
    {
        result = (result << 1) | (remaining_value & 1);
        remaining_value >>= 1;
    }

    /* ポインタを使って計算結果を呼び出し元へ渡す */
    *reversed_value = result;
}

int main(void)
{
    int input_number;
    int reversed_number;

    scanf("%d", &input_number);

    /* 0以下の入力はNGと表示する */
    if (input_number <= 0)
    {
        printf("NG");
        return 0;
    }

    /* ポインタ引数を使ってビット反転結果を取得する */
    reverse_bits(&input_number, &reversed_number);

    printf("%d,%d", input_number, reversed_number);

    return 0;
}
