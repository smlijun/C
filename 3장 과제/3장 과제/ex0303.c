/* -----------------------------------------------------------------------------
* 파일 : ex0303.c
* 기능 :3장 실습 과제 문항 #03 - 세게의 정수를 입력받아 평균 출력하기
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-01
* 개발 종료 : 2020-04-01 (Pass)
*-------------------------------------------------------------------------------*/

#include <stdio.h>
#pragma warning(disable:4996)

int ex0303()
{
	int num1, num2, num3;

	printf(">Enter three integers.\n> ");
	//정수 3개 입력
	scanf("%d %d %d", &num1, &num2, &num3);

	//double 형으로 출력해야하므로 (double)을 사용해 강제 형변환
	printf("> The average of %d, %d, %d is %.3lf.\n", num1, num2, num3, (double)(num1 + num2 + num3) / 3);
}