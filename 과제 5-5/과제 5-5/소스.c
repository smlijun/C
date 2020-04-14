#include<stdio.h>
#pragma warning (disable:4996)

int quadrant_judge(int a, int b)
{
	if (a > 0 && b > 0)
		return 1;
	else if (a < 0 && b > 0)
		return 2;
	else if (a < 0 && b < 0)
		return 3;
	else
		return 4;
}

int main()
{
	int x, y;
	printf("> Enter your x, y coordinates of the point.\n> ");
	scanf("%d %d", &x, &y);

	printf("It's in the %dth quadrant.", quadrant_judge(x, y));
}