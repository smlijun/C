/* -----------------------------------------------------------------------------
* 파일 : ex0511.c
* 기능 :5장 실습 과제 문항 #11 -윤년 판별
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-09
* 개발 종료 : 2020-04-09 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable :4996)

int leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 100) || (y % 4 == 0 && y % 400 == 0))
		return 1;
	else
		return 0;

}

int main()
{
	int year;

	printf("> Enter year\n> ");
	scanf("%d", &year);

	if (leap_year(year) == 1)
		printf("> It is a leap year.\n");
	else
		printf("> It is not a leap year.\n");
}
