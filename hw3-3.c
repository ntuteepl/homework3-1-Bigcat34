#include <stdio.h>
#include <stdlib.h>

// 計算各位數字和
int calculateDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// 比較函式，用於 qsort 排序
int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    int sum1 = calculateDigitSum(num1);
    int sum2 = calculateDigitSum(num2);

    // 先比較各位數字和
    if (sum1 != sum2) {
        return sum1 - sum2;
    }

    // 如果各位數字和相等，再比較數值大小
    return num1 - num2;
}

int main() {
    int j =1;
    while ( j <= 2)
    {
    int num1, num2;

    // 輸入兩個整數
    scanf("%d %d", &num1, &num2);

    // 使用 qsort 排序
    int nums[] = {num1, num2};
    qsort(nums, sizeof(nums) / sizeof(nums[0]), sizeof(nums[0]), compare);

    // 輸出排序後的結果
    for (int i = 0; i < 1; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    j++;
    }
    return 0;
}
