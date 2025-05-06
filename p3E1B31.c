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
    }
    srand(time(NULL));  // 初始化亂數

    // 主選單迴圈
    while (1) {
        char choice;
        printf("---------[Booking System]----------\n");
        printf("a. Available seats\n");
        printf("b. Arrange for you\n");
        printf("c. Choose by yourself\n");
        printf("d. Exit\n");
        printf("請輸入選項 (a/b/c/d): ");
        scanf(" %c", &choice);

        if (choice == 'a') {
            // 初始化座位陣列
            for (i = 0; i < 9; i++)
                for (j = 0; j < 9; j++)
                    seats[i][j] = '-';

            // 隨機預訂10個座位（以 * 表示）
            int count = 0;
            while (count < 10) {
                int r = rand() % 9;
                int c = rand() % 9;
                if (seats[r][c] == '-') {
                    seats[r][c] = '*';
                    count++;
                }
         }
         // 顯示座位圖
            printf("  123456789\n");
            for (i = 8; i >= 0; i--) {
                printf("%d ", i + 1);
                for (j = 0; j < 9; j++) {
                    printf("%c", seats[i][j]);
                }
                printf("\n");
            }
        }
                return 0;
            }}
