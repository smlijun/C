/* -----------------------------------------------------------------------------
* 파일 : ex0613.c
* 기능 :6장 실습 과제 문항 #13 자아도취 수 판별
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-11
* 개발 종료 : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning (disable:4996)

//return 1 if narcissistic number
int narciss(int n)
{
	char num_array[10];
	int i,size = 0,result=0;

	//배열에 아스키 코드 형식으로 한자리씩 저장
	size = sprintf(num_array, "%d", n);

	//각 배열에 저장된 값에 자릿수만큼 거듭제곱
	for (i = 0; i < size; i ++)
	{
		result += pow(num_array[i]-48, size);
	}
	if (result == n)
		return 1;
	else
		return 0;
}

int main()
{
	int num;
	printf("> Enter a number.\n> ");
	scanf("%d", &num);

	//narciss함수 호출을 통해 참,거짓 분기
	if (narciss(num) == 1)
		printf("> Yes, %d is a narcissistic number,\n", num);
	else
		printf("> No, %d is a not narcissistic number,\n", num);
}