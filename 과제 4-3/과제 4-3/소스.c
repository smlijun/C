#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

int square(int n)
{	
	n = pow(n, 2);
}

int main()
{
	int num1, num2, snum1, snum2;
	printf("> Enter a, b.\n> ");
	scanf("%d %d", &num1, &num2);

	snum1 = square(num1);
	snum2 = square(num2);
	printf("%d * %d + %d * %d = %d", num1, num1, num2, num2, snum1 + snum2);
}