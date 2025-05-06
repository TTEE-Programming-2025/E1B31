#include<stdio.h>
#include<stdlib.h>

#define PASSWORD 2025

int clearScreen() {
    system("cls");  // ²M°£µe­±¡]¥u¾A¥Î©ó Windows¡^
    return 0;
}
int triangle(char ch) {
    int height = ch - 'a' + 1;
    int i = 1;
    while (i <= height) {
        int j = 1;
        while (j <= i) {
            printf("%c", ch);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

int mul(int n) {
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            printf("%4d", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

int main(){
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
	int password, attempts = 0;
    char choice, cont;
    
    do {
        clearScreen();
        printf("Enter 4-digit password: ");
        scanf("%d", &password);
        attempts++;

        if (password != PASSWORD) {
            printf("Wrong password!\n");
            if (attempts >= 3) {
                printf("Too many attempts. Exiting.\n");
                return 0;
            }
            system("pause");
        }
    } while (password != PASSWORD);
	
	
	return 0;
} 
//心得:這次寫程式讓我更熟悉 while 迴圈的用法，
//特別是在畫三角形時學到怎麼用字元來控制輸出。
//雖然一開始有錯誤，但修正後更了解程式的邏輯。
//透過這次練習，我覺得自己對 C 語言又更熟一點了。
