#include<stdio.h>
#pragma warning(disable: 4996)                 //scanf �Լ� ���� ����

int main()
{
	double i;                                  //num1=int num2=long long num3=float num4=double
	double num4, sum4 = 0;
	printf("double ��\n");
	scanf("%lf", &num4);
	
	sum4 = num4* (num4 + 1) / 2;             //1���� n������ ��
	
	printf("%lf", sum4);                     

}