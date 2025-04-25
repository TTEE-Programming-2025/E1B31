#include<stdio.h>
#include<stdlib.h>

#define PASSWORD 2025

int clearScreen() {
    system("cls");  // 清除畫面（只適用於 Windows）
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
