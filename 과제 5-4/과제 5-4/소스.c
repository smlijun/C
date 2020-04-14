#include<stdio.h>
#pragma warning (disable :4996)

double triangle_judge (double a, double b, double c)
{
	if (a + b > c || b + c > a || a + c > b)
		printf("%lf", a + b + c);
	else
		printf("no such triangle");

}

int main()
{
	double a, b, c;
	printf("> Enter three real numbers.\n> ");
	scanf("%lf %lf %lf", &a, &b, &c);

	triangle_judge(a, b, c);

}