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
    }}

