#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

double distance(double i, double j, double k, double n)
{
	double xcor, ycor, temp, result;
	xcor = pow(i - k,2) ;
	ycor = pow(j - n, 2);

	result = sqrt(xcor + ycor);

	printf("Distance between the points is %lf.", result);
}

int main()
{
	double p1, p2, q1, q2;
	printf("> Enter the ccordinates of point p.\n> ");
	scanf("%lf %lf", &p1, &p2);

	printf("\n> Enter the coordinates of point q.\n> ");
	scanf("%lf %lf", &q1, &q2);

	distance(p1, p2, q1, q2);
}

