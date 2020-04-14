/* -----------------------------------------------------------------------------
* 파일 : ex0620.c
* 기능 :6장 실습 과제 문항 #20 - ID 조건 일치불일치 판별
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-11
* 개발 종료 : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

//문자열 길이 체크를 위한 함수
int lenght_check(char ID[])
{
	int lenght;
	//문자열의 길이를 구하기위해 strlen함수 호출
	lenght = strlen(ID); 
	//조건확인을 위한 if문 참일경우 1반환 아니면 0 반환
	if (lenght <= 8)
		return 1;
	else
		return 0;
}

//숫자하나가 포함되어있는지 확인하는 함수
int num_check(char ID[])
{
	int i,count=0;
	char ID_array[10];

	
	//배열에 저장된값중 숫자의 개수 탐색
	for (i = 0; i < strlen(ID); i++)
	{
		if (ID_array[i] <= 0 && ID_array[i] >= 9)
			count++;
	}

	//조건확인을 위한 if문 참일 경우 1 반환 아니면 0 반환
	if (count >= 1)
		return 1;
	else
		return 0;
}

int lower_case_check(char ID)
{
	//조건 확인을 위한 if문 참일 경우 1 반환 아니면 0 반환
	if (ID <= 122 && ID >= 97)
		return 1;
	else
		return 0;
}

int main()
{
	char ID[20] = {0,};

	printf("> Enter an identifier.\n> ");
	scanf("%s", ID);

	//위 3가지 함수를 호출하여 ID의 조건 일치 불일치 판별
	if (lenght_check(ID) == 1 && num_check(ID) == 0 && lower_case_check(ID) == 0)
		printf("> It's legal ID.\n");
	else
		printf("> it's unlegal ID.\n");
	
}