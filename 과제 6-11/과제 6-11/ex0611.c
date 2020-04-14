/* -----------------------------------------------------------------------------
* 파일 : ex0611.c
* 기능 :6장 실습 과제 문항 #15 -서로소 판별
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-12
* 개발 종료 : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable :4996)

//서로소 판별함수 참일경우 'y' 반환 거짓인경우 'n' 반환
char mutally_prime(int a, int b)
{
	int i,min,count=0;
	min = a > b ? b : a;
	
	//a,b모두 나누어떨어지면 하나 이상의 약수가 존재 
	for (i = 2; i < +min; i++)
	{
		if (a % i == 0 && b % i == 0)
			count++;
	}
	if (count == 0)
		return 'y';
	else
		return 'n';
}


int main()
{
	int num1, num2;
	printf("> Enter two number.\n> ");
	scanf("%d %d", &num1, &num2);

	//서로소 판별 함수 호출
	if (mutally_prime(num1, num2) == 'y')
		printf("> They are mutually prime.\n");
	else
		printf("> They are mutually prime.\n");
}