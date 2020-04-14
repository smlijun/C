/* -----------------------------------------------------------------------------
* 파일 : ex0616.c
* 기능 :6장 실습 과제 문항 #16 - 숫자를 문자로 받은후 정수로 변환
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-12
* 개발 종료 : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

int main()
{
	char ch; int sum = 0;
	int value;                                //문자 하나를 0..9사이의 숫사로 변환하여 저장하는 변수
	printf("> Enter a natural number.\n> ");
	while(1)
	{
		scanf("%c", &ch);
		if (ch == '\n')
			break;                           //ch가 엔터키('\n')과 같으면 빠져 나감
		value = ch - 48;					 //value 값 설정, 아스키값 48('0')이 숫자 0
		sum = sum * 10 + value;              //sum 값 설정, 이전 sum에 10을 곱한후 value를 더함
	}
	printf("> You entered %d in decimal. \n", sum);
	return 0;
}