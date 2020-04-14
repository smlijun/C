#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int num1, num2;
	printf(">Enter dividend\n>");
	scanf("%d",&num1);

	printf(">Enter divisor\n>");
	scanf("%d",&num2);

	printf("Quotient is %d. Remainder is %d.", num1 / num2, num1 % num2);
}	