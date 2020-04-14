/* -----------------------------------------------------------------------------
* 파일 : ex0513.c
* 기능 :5장 실습 과제 문항 #13 -가정요금 청구액 계산기
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-09
* 개발 종료 : 2020-04-09 (fail)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

double electric_w_s(double n)
{
	double result;
	if(n<=200)
		result=910+
}

int main()
{
	double elec;
	int	season;

	printf("> Enter monthly amount in Kwh.\n> ");
	scanf("%d", &elec);
	printf("> Enter 1 if summer of winter, 0 if not.\n>");
	scanf("%d", &season);


}