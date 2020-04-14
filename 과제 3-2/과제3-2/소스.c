#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int cel,fah1;
	printf(">Enter degree in Celcius\n>");
	scanf("%d", &cel);

	fah1 = 9 * cel / 5+32;


	printf(">%d degreees in Celcius is %d  degrees in Fahrenheit.",cel,fah1);

}