#include<stdio.h>
#include <string.h>
#include<stdlib.h>

#define MAX_STUDENTS 10
#define SUBJECTS 3
#define PASSWORD 2025

typedef struct {
    char name[50];
    char id[20];
    int scores[SUBJECTS]; // 數學、英文、物理
    float average;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;

void clearScreen() {
    system("cls"); // Windows 專用清屏
}

void welcomeScreen() {
    int input, tries = 0;
    while (tries < 3) {
        clearScreen();
        for (int i = 0; i < 20; i++) printf("*");
        printf("\n請輸入4位數字密碼: ");
        scanf("%d", &input);
        if (input == PASSWORD) {
            printf("歡迎使用成績系統！\n");
            return;
        } else {
            printf("密碼錯誤！\n");
            tries++;
        }
    }
    printf("錯誤次數過多，程式結束。\n");
    exit(0);
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
	
	system("pause");
	return 0;
} 
