/* -----------------------------------------------------------------------------
* 파일 : ex0614.c
* 기능 :6장 실습 과제 문항 #14 - 자리수 역순 출력
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-12
* 개발 종료 : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable:4996)

//배열을 역순으로 저장하는 함수
void reverseArrayInt(char* array, int size)
{
	//임시로 값을 저장할 변수
	int temp;

	for (int i = 0; i < size / 2; i++)
	{
		temp = array[i];
		array[i] = array[(size - 1) - i];
		array[(size - 1) - i] = temp;
	}
}


void reverse_it(int num)
{
	int i,size;
	char number[10];

	//배열애 한자리씩 저장
	size = sprintf(number, "%d", num);

	//역순 배열을 위한 함수 호출
	reverseArrayInt(number, size);
	//결과 값 출력
	printf("> %s\n", number);
}


int main()
{
	int num;
	//반복을 위한 while문 구성

	do
	{
		printf("> Enter a natural.\n> ");
		scanf("%d", &num);
		//입력이 0보다 작으면 프로그램 종료
		if (num <= 0)
			break;

		//역순 출력 함수 호출
		reverse_it(num);
		
	} while (1);

}