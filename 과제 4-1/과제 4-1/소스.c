#include<stdio.h>
#pragma warning (disable:4996)


int main()
{
	int num1, num2;

	printf("> Enter two integers.\n> ");
	scanf("%d %d", &num1, &num2);

	is_larger(num1, num2);

}

int is_larger(int f, int s)
{
	if (f >= s)
		printf("> Reuslt is 1");
	else
		printf("> Result is 0");
}