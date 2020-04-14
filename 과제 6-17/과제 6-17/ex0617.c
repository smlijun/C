/* -----------------------------------------------------------------------------
* 파일 : ex0617.c
* 기능 :6장 실습 과제 문항 #17- in 출현횟수 탐색
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-11
* 개발 종료 : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

int Text_in_Search(char sentence[])
{
	int i, count = 0;
	//배열에 in 을 탐색하기 위한 for,if 문
	for (i = 0; i < strlen(sentence); i++)
	{
		if (sentence[i]==' '&& sentence[i+1] == 'i' && sentence[i + 2] == 'n' && sentence[i + 3] == ' ')
			count++;
	}
	//count 횟수 반환
	return count;
}
	


int main()
{
	int result=0;
	char sentence[200];

	printf("> Enter a sentence.\n> ");
	//공백까지 읽어들이기위세 스킨셋 사용
	scanf("%[^\n]s", sentence);

	//in 탐색 함수 호출
	result = Text_in_Search(sentence);
	printf("> The preposition 'in' appears %d time.\n",result);
}