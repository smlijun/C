#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	float num1;
	int num2;
	printf("Enter a real number.\n");             
	scanf("%f", &num1);                          //�Ǽ��� �Է�

	num2=(int)num1;								//����ȯ
	printf("%d", num2);
}