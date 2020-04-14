#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int second;
	printf(">Enter seconds.\n>");
	scanf("%d", &second);

	printf("It is %d hours, %d minutes, %d seconds", second / 3600,second/60, second % 60);  //분단위 미완성

}