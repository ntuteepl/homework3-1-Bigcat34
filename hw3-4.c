#include <stdio.h>

// 比較使用者輸入與答案，計算A和B的數量
void compareInput(int answer[], int guess[], int *A, int *B) {
    *A = *B = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == answer[i]) {
            (*A)++;
        } else {
            for (int j = 0; j < 4; ++j) {
                if (guess[i] == answer[j]) {
                    (*B)++;
                    break;
                }
            }
        }
    }
}

int main() {
    int answer[4];
    int guess[4];
    int A, B;

    while (1) {
        // 讀入一連串的4位數字，第一個為答案
        scanf("%1d%1d%1d%1d", &answer[0], &answer[1], &answer[2], &answer[3]);

        // 判斷是否結束
        if (answer[0] == 0) {

            break;
        }

        do {
            // 提示使用者猜數字

            scanf("%1d%1d%1d%1d", &guess[0], &guess[1], &guess[2], &guess[3]);

            // 比較輸入與答案
            compareInput(answer, guess, &A, &B);

            // 顯示結果
            printf("%dA%dB\n", A, B);

            // 判斷是否猜中
            if (A == 4) {
                printf("%d%d%d%d\n", answer[0], answer[1], answer[2], answer[3]);
                break;
            }
        } while (1);
    }

    return 0;
}
