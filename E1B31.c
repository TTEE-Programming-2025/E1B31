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
    //��J�K�X
    printf("�п�J 4 ��Ʀr�K�X: ");
    scanf("%d",&password);
    if (password != key) {
        printf("�K�X���~�I�{�������C\n");
        return 0; //�K�X���~�A�����{��
    }
    //�K�X���T�A����w��T��
    printf("�w��I�K�X���T�C\n");
    //��J 1 �Ӧr��
    printf("�п�J 1 �Ӧr��: ");
    scanf(" %c", &Char); 
    //�P�_��J���r������
    if (Char >= 'A' && Char <= 'Z') {
        printf("Uppercase\n");
    } else if (Char >= 'a' && Char <= 'z') {
        printf("Lowercase\n");
    } else if (Char >= '0' && Char <= '9') {
        printf("Digit\n");
    } else {
        printf("E1B31�٬f��\n");
    }
    system("pause");
    return 0;
}

//�߱o:�o�q�{�����ڷPı�Q����ΥB²������A�ר�O�b�K�X���ҩM�r�������P�_�W
//�A�Q�Ϊ�������Ƥ���M ASCII �d��P�_�A�קK�F�L�h���w��ƨ̿�A���{����o��[�����A 
//���s��ӻ��A�o�O�@�ӫܦn���m�ߡA�����U�z�Ѱ򥻪���J�B�z�M����P�_�C






