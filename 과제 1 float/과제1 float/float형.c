#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	float i;                                  //num1=int num2=long long num3=float num4=double
	float num3, sum3 = 0;
	printf("float ��\n");
	scanf("%f", &num3);

	sum3 = num3 * (num3 + 1) / 2;             //1���� n������ ��

	printf("%f", sum3);
	
}