#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int num1,sum1=0,i;                         //num1=int num2=long long num3=float num4=double

	printf("int 형\n");
	scanf("%d", &num1);

	sum1 = num1 * (num1 + 1) / 2;             //1부터 n까지의 합
	printf("%d", sum1);

}