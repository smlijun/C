/* -----------------------------------------------------------------------------
* ���� : Q4.c
* ��� :��ĥ°?
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-05-08
* ���� ���� : 2020-05-08 (fail)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<time.h>

/* <time.h> �ʿ� */
int getToday(int* y, int* m, int* d) 
{
	// ���� �����
	time_t current;
	struct tm* t;
	time(&current);
	t = localtime(&current);
	*y = t->tm_year + 1900;
	*m = t->tm_mon + 1;
	*d = t->tm_mday;
	return t->tm_yday; //���� ���� �� ��
}

/* �Է� ��ȹ���ڷ� '/' ��� */
void getDayOne(int* y, int* m, int* d) {// ���� �����
	printf("Enter the Day 1 (as yyyy/mm/dd) : ");
	scanf("%d/%d/%d", y, m, d);
}

int main()
{
	int t;
	int month[][12] = { { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },	  	// index 0: ���
			{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };	// index 1: ����
	char* week[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

	
}