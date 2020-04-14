/* -----------------------------------------------------------------------------
* 파일 : ex0406.c
* 기능 :4장 실습 과제 문항 #06 - 반올림함수 구현하기
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-10
* 개발 종료 : 2020-04-10 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

double round_up(double n)
{
	//초기 값에서 0.5를 뺏을때 정수형으로 변환한값과 크거나 같으면 반올림했을때 올림이 되고
	//초기 값에서 0.5를 뺏을때 정수형으로 변환된값 보다 작으면 반올림했을때 내림이 된다.
	if (n - 0.5 >= (int)n)
		//math.h에 포함된 라이브러리함수 ceil함수 사용
		return (int)ceil(n);

	else
		//math.h에 포함된 라이브러리함수 floor함수 사용
		return (int)floor(n);
}

int ex0406()
{
	double num1;

	printf("> Enter a positive real number\n> ");
	scanf("%lf", &num1);
	//round_up 함수 호출
	printf("> The round up value is %d.\n", (int)round_up(num1));

}