#include<stdio.h>
#include<stdlib.h>

#define PASSWORD 2025

int clearScreen() {
    system("cls");  // 清除畫面（只適用於 Windows）
    return 0;
}
int drawTriangle(char ch) {
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

int multiplicationTable(int n) {
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
	
	
	return 0;
} 
