#include<stdio.h>
#include<stdlib.h>
	
int main() {
    int password; 
    int key=2024;
    char Char;
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
    //輸入密碼
    printf("請輸入 4 位數字密碼: ");
    scanf("%d",&password);
    if (password != key) {
        printf("密碼錯誤！程式結束。\n");
        return 0; //密碼錯誤，結束程式
    }
    //密碼正確，顯示歡迎訊息
    printf("歡迎！密碼正確。\n");
    //輸入 1 個字元
    printf("請輸入 1 個字元: ");
    scanf(" %c", &Char); 
    //判斷輸入的字元類型
    if (Char >= 'A' && Char <= 'Z') {
        printf("Uppercase\n");
    } else if (Char >= 'a' && Char <= 'z') {
        printf("Lowercase\n");
    } else if (Char >= '0' && Char <= '9') {
        printf("Digit\n");
    } else {
        printf("E1B31倪柏恩\n");
    }
    system("pause");
    return 0;
}

//心得:這段程式讓我感覺十分實用且簡單易懂，尤其是在密碼驗證和字符類型判斷上
//，利用直接的整數比較和 ASCII 範圍判斷，避免了過多的庫函數依賴，讓程式顯得更加輕巧， 
//對於新手來說，這是一個很好的練習，能幫助理解基本的輸入處理和條件判斷。






