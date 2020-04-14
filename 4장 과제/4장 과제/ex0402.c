/* -----------------------------------------------------------------------------
* 파일 : ex0402.c
* 기능 :4장 실습 과제 문항 #02 - 실수형태 두점 x,y 좌표를 입력받아 두점사이 거리 구하는 함수 구현
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-10
* 개발 종료 : 2020-04-10 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

double distance(double i, double j, double k, double n)
{
	double xcor, ycor, temp, result;
	//pow 함수로 제곱값 저장
	xcor = pow(i - k, 2);
	ycor = pow(j - n, 2);
	//제곱근 값을 구하기 위해 sqrt함수 사용
	result = sqrt(xcor + ycor);

	printf("Distance between the points is %lf.\n", result);
}

int ex0402()
{
	double p1, p2, q1, q2;
	printf("> Enter the coordinates of point p.\n> ");
	scanf("%lf %lf", &p1, &p2);

	printf("> Enter the coordinates of point q.\n> ");
	scanf("%lf %lf", &q1, &q2);
	//distance 함수 호출
	distance(p1, p2, q1, q2);
}

