#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char name[50], purp[50], grade;

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", name);														//���ڿ� �Է�

	printf("���������� �Է��Ͻÿ�: ");
	scanf("%s", purp);														//���ڿ� �Է�

	printf("��� ������ �Է��Ͻÿ�: ");
	getchar();																//���ۿ� \n ����
	scanf("%c", &grade);
	
	printf("\n�̸�: %s\n��������: %s\n�������: %c ", name, purp, grade);   //��� ���
}