#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 輸入三筆訂單的出發時間和返回時間
    //printf("請輸入三筆訂單的出發時間和返回時間，格式為s1 d1 s2 d2 s3 d3：");
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    // 計算需要的遊覽車數量
    int neededBuses ;

    // 需要派3輛的情況
    if ((d1!=s2 && d1!=s3) && (d2!=s1 && d2!=s3) && (d3!=s1 && d3!=s2) ) {
        // 如果第二輛車的發車時間早於第一輛車的返回時間，則不需要額外的車
        neededBuses = 3;
    }

    // 需要派1輛的情況
    else if ((d1==s2 && d2==s3) ||(d1==s3 && d3==s2)||(d2==s1 && d1==s3) ||(d2==s3 && d3==s1)||(d3==s1 && d1==s2) ||(d3==s2 && d2==s1)) {

        neededBuses = 1;
    }
    else
    {
        neededBuses = 2;
    }
    // 輸出結果
    printf("%d", neededBuses);

    return 0;
}
