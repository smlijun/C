#include<stdio.h>
#pragma warning(disable: 4996)                 //scanf 함수 오류 무시

int main()
{
	double i;                                  //num1=int num2=long long num3=float num4=double
	double num4, sum4 = 0;
	printf("double 형\n");
	scanf("%lf", &num4);
	
	sum4 = num4* (num4 + 1) / 2;             //1부터 n까지의 합
	
	printf("%lf", sum4);                     

}