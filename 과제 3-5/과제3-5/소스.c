#include<stdio.h>
#pragma warning  (disable:4996)

int main()
{
	int num1;
	printf(">Enter a natural number.\n>");
	scanf("%d", &num1);

	if (num1 % 5 == 0)
		printf(">0\n");
	else
		printf(">1\n");

	if (num1 % 6 == 0)
		printf(">0\n");
	else
		printf(">1\n");

	if (num1 % 5 == 0 && num1 % 6 == 0)
		printf(">0\n");
	else
		printf(">1\n");

}