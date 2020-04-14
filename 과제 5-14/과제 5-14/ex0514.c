/* -----------------------------------------------------------------------------
* 파일 : ex0514.c
* 기능 :5장 실습 과제 문항 #14 -수정된 계산기
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-09
* 개발 종료 : 2020-04-09 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable :4996)

double float_calculator(double a,char k ,double b)
{
	if (k == '+')
		return a + b;
	else if (k == '-')
		return a - b;
	else if (k == '*')
		return a * b;
	else if (k == '/')
		return a / b;
	else if (k == '%')
		return (int)a % (int)b;
}

int int_calculator(int a,char k ,int b)
{
	if (k == '+')
		return a + b;
	else if (k == '-')
		return a - b;
	else if (k == '*')
		return a * b;
	else if (k == '/')
		return a / b;
	else if (k == '%')
		return a % b;
}


int main()
{
	int temp;
	double num1, num2;
	char ch;

	printf("> Enter 1 for floating poitn calculation, 2 for integer calculation\n> ");
	scanf("%d", &temp);

	printf("> Enter an expression. For EXAMPLE, 2 + 5.\n> ");
	scanf("%lf %c %lf",&num1,&ch,&num2);

	if (temp == 1)
		printf("> %lf %c %lf = %lf\n", num1, ch, num2, float_calculator(num1, ch, num2));

	else if (temp == 2)
		printf("> %d %c %d = %d\n", (int)num1, ch, (int)num2, int_calculator((int)num1, ch, (int)num2));
}