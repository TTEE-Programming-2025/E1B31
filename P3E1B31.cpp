#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char seats[9][9];
    int i, j;
    int password, tries = 0;

    // 密碼驗證（最多3次）
    while (tries < 3) {
        printf("請輸入4位數密碼：");
        scanf("%d", &password);
        if (password == 2025) break;
        else {
            printf("密碼錯誤，請重試。\n");
            tries++;
        }
    }
    if (tries == 3) {
        printf("輸入錯誤三次，結束程式。\n");
        return 0;
    }}

