#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char seats[9][9];
    int i, j;
    int password, tries = 0;

    // �K�X���ҡ]�̦h3���^
    while (tries < 3) {
        printf("�п�J4��ƱK�X�G");
        scanf("%d", &password);
        if (password == 2025) break;
        else {
            printf("�K�X���~�A�Э��աC\n");
            tries++;
        }
    }
    if (tries == 3) {
        printf("��J���~�T���A�����{���C\n");
        return 0;
    }
    srand(time(NULL));  // ��l�ƶü�

    // �D���j��
    while (1) {
        char choice;
        printf("---------[Booking System]----------\n");
        printf("a. Available seats\n");
        printf("b. Arrange for you\n");
        printf("c. Choose by yourself\n");
        printf("d. Exit\n");
        printf("�п�J�ﶵ (a/b/c/d): ");
        scanf(" %c", &choice);

        if (choice == 'a') {
            // ��l�Ʈy��}�C
            for (i = 0; i < 9; i++)
                for (j = 0; j < 9; j++)
                    seats[i][j] = '-';

            // �H���w�q10�Ӯy��]�H * ��ܡ^
            int count = 0;
            while (count < 10) {
                int r = rand() % 9;
                int c = rand() % 9;
                if (seats[r][c] == '-') {
                    seats[r][c] = '*';
                    count++;
                }
         }
         // ��ܮy���
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
