/* -----------------------------------------------------------------------------
* 파일 : ex0405.c
* 기능 :4장 실습 과제 문항 #05 -평균을 구하는 함수와 표준편차를 구하는 함수 구현하기
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-10
* 개발 종료 : 2020-04-10 (Pass)
*-------------------------------------------------------------------------------*/


#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

double average(double a, double b, double c)
{
	//결과값을 저장할 변수 선언
	double result;
	result = (a + b + c) / 3;
	return result;
}

double std_deviation(double a, double b, double c)
{
	double result;
	//average 함수와 math.h에 포함된 pow함수를 호출해 필요한 값연산 제곱하므로 빼는 순서는 상관없음
	result = pow(average(a, b, c) - a, 2) + pow(average(a, b, c) - b, 2) + pow(average(a, b, c) - c, 2);
	result = result / 3;
	//제곱근을 구하기 위한 sqrt함수 사용
	result = sqrt(result);

	return result;
}

int ex0405()
{
	double num1, num2, num3;
	printf("> Enter a three real numbers\n> ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	//std_deviation함수 호출
	printf("> The standard deviation is %lf\n", std_deviation(num1, num2, num3));
}