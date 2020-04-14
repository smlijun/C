#include<stdio.h>
#include<ctype.h>
#pragma warning (disable:4996)

int main()
{
	int num,check_scanf;
	char letter;
	double weight;

	printf("> Enter sex, age and weigth\n> ");

	check_scanf= scanf("%c %d %lf", &letter, &num, &weight);

	if (check_scanf == 3)
		printf("> %c %d %lf", letter, num, weight);
	else
		printf("> Error in input format.");
}