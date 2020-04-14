#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	float num1;
	int num2;
	printf("Enter a real number.\n");             
	scanf("%f", &num1);                          //실수값 입력

	num2=(int)num1;								//형변환
	printf("%d", num2);
}