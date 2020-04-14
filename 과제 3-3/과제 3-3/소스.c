#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num1, num2, num3;

	printf(">Enter three integers.\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("The average of %d, %d, %d is %lf", num1, num2, num3,(double)(num1+num2+num3)/3);
}