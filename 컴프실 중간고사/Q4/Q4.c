/* -----------------------------------------------------------------------------
* 파일 : Q4.c
* 기능 :며칠째?
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-05-08
* 개발 종료 : 2020-05-08 (fail)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<time.h>

/* <time.h> 필요 */
int getToday(int* y, int* m, int* d) 
{
	// 오늘 년월일
	time_t current;
	struct tm* t;
	time(&current);
	t = localtime(&current);
	*y = t->tm_year + 1900;
	*m = t->tm_mon + 1;
	*d = t->tm_mday;
	return t->tm_yday; //올해 지난 날 수
}

/* 입력 구획문자로 '/' 사용 */
void getDayOne(int* y, int* m, int* d) {// 시작 년월일
	printf("Enter the Day 1 (as yyyy/mm/dd) : ");
	scanf("%d/%d/%d", y, m, d);
}

int main()
{
	int t;
	int month[][12] = { { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },	  	// index 0: 평년
			{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };	// index 1: 윤년
	char* week[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

	
}