#include<stdio.h>
#pragma warning (disable:4996)

int abs(int n)
{
	n = n < 0 ?  -n : n;
	return n;
}

int main()
{
	int n;
	printf(">Plesee enter integer number\n>");
	scanf("%d", &n);
	printf("%d abs number is %d", n, abs(n));
}

