/* -----------------------------------------------------------------------------
* 파일 : ex0612.c
* 기능 :6장 실습 과제 문항 #12 - 입력수에 따른 별과 숫자열 출력
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-12
* 개발 종료 : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable:4996)

//직각 삼각형 형태 별 출력
void star_print1(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
//직각 삼각형 형태 숫자 피라미드 출력
void number_print(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j <= i)
				printf("%d", j);
			else
				printf(" ");
		}
		printf("\n");
	}
}
//피라미드 형태 별 출력
void star_print2(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--) 
		{
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int num;
	printf("Enter the number.\n");
	scanf("%d", &num);

	//각각 출력을 위한 함수 호출
	star_print1(num);
	number_print(num);
	star_print2(num/2+1);
}