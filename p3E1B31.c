#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char seats[9][9];
    int i, j;
    int password, tries = 0;
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
printf("E1B31\n");
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
        else if (choice == 'b') {
            int need, found = 0;
            printf("你需要幾個座位？(1-4): ");
            scanf("%d", &need);

            if (need < 1 || need > 4) {
                printf("輸入錯誤。\n");
                continue;
            }
            for (i = 0; i < 9 && !found; i++) {
                for (j = 0; j <= 9 - need; j++) {
                    int ok = 1;
                    for (int k = 0; k < need; k++) {
                        if (seats[i][j + k] != '-') {
                            ok = 0;
                            break;
                        }
                    }
                    if (ok) {
                        for (int k = 0; k < need; k++) {
                            seats[i][j + k] = '@';
                        }
                        found = 1;
                        break;
                    }
                }
            }

            if (found) {
                printf("系統已自動安排座位如下：\n");
                printf("  123456789\n");
                for (i = 8; i >= 0; i--) {
                    printf("%d ", i + 1);
                    for (j = 0; j < 9; j++) {
                        printf("%c", seats[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("無法安排連續座位。\n");
            }
        }
                return 0;
            }}
