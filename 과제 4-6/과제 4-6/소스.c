#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

double round_up(double n)
{
	if (n - 0.5 >= (int)n)
		return (int)ceil(n);

	else
		return (int)floor(n);
}

void main()
{
	double num1;

	printf("> Enter a positive real number\n> ");
	scanf("%lf", &num1);
	printf("> The round up value is %lf.", round_up(num1));

}