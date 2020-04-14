#include<stdio.h>
#pragma warning (disable:4996)

int main()

{

	int coin[4] = { 500,100,50,10};

	int change, i, count[4];

	printf("> Enter the amout of change.\n> ");

	scanf("%d", &change);


	for (i = 0; i < 4; i++) 
	{
		count[i] = change / coin[i];
		change = change % coin[i];
	}
	
	printf("> 500원: %d개, 100원: %d개, 50원: %d개, 10원: %d개.", count[0], count[1], count[2], count[3]);

}