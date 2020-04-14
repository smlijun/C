/* -----------------------------------------------------------------------------
* 파일 : ex0403.c
* 기능 :4장 실습 과제 문항 #03 - 제곱을 구하는 함수를 구현한 후 호출하여 a^2+b^2 값 출력하기
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-10
* 개발 종료 : 2020-04-10 (Pass)
*-------------------------------------------------------------------------------*/


#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

int square(int n)
{
	n = n * n;
	return n;
	//결과값 반환
}

int ex0403()
{
	int num1, num2, snum1, snum2;
	printf("> Enter a, b.\n> ");
	scanf("%d %d", &num1, &num2);

	//square함수 호출
	snum1 = square(num1);
	snum2 = square(num2);
	printf("> %d * %d + %d * %d = %d.\n", num1, num1, num2, num2, snum1 + snum2);
}