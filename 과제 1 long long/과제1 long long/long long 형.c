#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int  i;                                  //num1=int num2=long long num3=float num4=double
	long long num2, sum2 = 0;
	printf("long long 형\n");
	scanf("%lld", &num2);

	sum2 = num2 * (num2 + 1) / 2;             //1부터 n까지의 합

	printf("%lld", sum2);

}