#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

double average(double a, double b, double c)
{
	double result;
	result = (a + b + c) / 3;
	return result;
}

double std_deviation(double a, double b, double c)
{
	double result;
	result = pow(average(a, b, c) - a, 2) + pow(average(a, b, c) - b, 2) + pow(average(a, b, c) - c, 2);
	result = result / 3;
	result = sqrt(result);

	return result;
}

void main()
{
	double num1, num2, num3;
	printf("> Enter a three real numbers\n> ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	printf("> The standard deviation is %lf", std_deviation(num1, num2, num3));
}