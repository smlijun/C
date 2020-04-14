/* -----------------------------------------------------------------------------
* ���� : ex0511.c
* ��� :5�� �ǽ� ���� ���� #11 -���� �Ǻ�
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-09
* ���� ���� : 2020-04-09 (Pass)
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
