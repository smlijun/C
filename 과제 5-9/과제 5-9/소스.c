#include<stdio.h>
#pragma warning (disable:4996)



int main()
{
	int num1;
	printf("> Enter an integer.\n> ");
	scanf("%d", &num1);

	num1 = num1 & 1;

	if (num1 = 1)
		printf("It is an even number.");
	else
		printf("It is an odd number.");
}

