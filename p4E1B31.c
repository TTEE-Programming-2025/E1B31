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

void showMenu() {
    printf("--------- [Grade System] ---------\n");
    printf("a. Enter student grades\n");
    printf("b. Display student grades\n");
    printf("c. Search for student grades\n");
    printf("d. Grade ranking\n");
    printf("e. Exit system\n");
    printf("----------------------------------\n");
    printf("請輸入選項: ");
}

void enterGrades() {
    clearScreen();
    printf("請輸入學生人數 (5~10): ");
    scanf("%d", &student_count);
    if (student_count < 5 || student_count > 10) {
        printf("人數錯誤，請重新輸入！\n");
        student_count = 0;
        return;
    }

    for (int i = 0; i < student_count; i++) {
        printf("\n第 %d 位學生:\n", i + 1);
        printf("姓名: ");
        scanf("%s", students[i].name);
        printf("學號: ");
        scanf("%s", students[i].id);
        students[i].average = 0;
        char *subjects[] = {"數學", "英文", "物理"};
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%s 成績 (0~100): ", subjects[j]);
            scanf("%d", &students[i].scores[j]);
            students[i].average += students[i].scores[j];
        }
        students[i].average /= SUBJECTS;
    }
    printf("\n成績輸入完成，按任意鍵返回主選單。\n");
    system("pause");
}

void displayGrades() {
    clearScreen();
    printf("姓名\t學號\t數學\t英文\t物理\t平均\n");
    for (int i = 0; i < student_count; i++) {
        printf("%s\t%s\t", students[i].name, students[i].id);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%d\t", students[i].scores[j]);
        }
        printf("%.2f\n", students[i].average);
    }
    system("pause");
}

void searchStudent() {
    clearScreen();
    char query[20];
    printf("請輸入欲查詢的學號: ");
    scanf("%s", query);
    for (int i = 0; i < student_count; i++) {
        if (strcmp(students[i].id, query) == 0) {
            printf("姓名: %s\t學號: %s\t平均: %.2f\n", students[i].name, students[i].id, students[i].average);
            return;
        }
    }
    printf("查無此學號學生。\n");
    system("pause");
}

int compare(const void *a, const void *b) {
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;
    return s1->average > s2->average ? -1 : 1;
}

void showRanking() {
    clearScreen();
    Student sorted[MAX_STUDENTS];
    memcpy(sorted, students, sizeof(students));
    qsort(sorted, student_count, sizeof(Student), compare);
    printf("成績排名（高至低）:\n");
    for (int i = 0; i < student_count; i++) {
        printf("%d. %s (%.2f)\n", i + 1, sorted[i].name, sorted[i].average);
    }
    system("pause");
}

void exitSystem() {
    char confirm;
    printf("確定要離開嗎？(y/n): ");
    scanf(" %c", &confirm);
    if (confirm == 'y' || confirm == 'Y') {
        printf("感謝使用，再見！\n");
        exit(0);
    }
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
