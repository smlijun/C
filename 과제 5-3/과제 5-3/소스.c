#include<stdio.h>
#pragma warning (disable :4996)

double total_price(double a,double b)
{
	double c;

	if (b >= 10)
	{
		c = a * b * 0.95;
	return c;
	}

	else
	{
	c = a * b;
	return c;
	}
}

int main()
{
	double unit_price, quantity ,total;
	
	printf("Enter unit_price and quantity\n");
	scanf("%lf %lf", &unit_price, &quantity);

	total = total_price(unit_price, quantity);
	printf("Total price is %d", (int)total);
}


