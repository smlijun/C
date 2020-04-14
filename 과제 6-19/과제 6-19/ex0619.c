/* -----------------------------------------------------------------------------
* 파일 : ex0619.c
* 기능 :6장 실습 과제 문항 #19- 영어 모음 횟수 탐색
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-11
* 개발 종료 : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable :4996)

int vowel_check(char n[])
{
	int i, count = 0;
	//for 문으로 배열의 모음개수 탐색
	for (i = 0; i < strlen(n); i++)
	{
		if (n[i] == 'a'|| n[i] == 'A'|| n[i] == 'e'|| n[i] == 'E'|| n[i] == 'i'|| n[i] == 'I'|| n[i] == 'o'|| n[i] == 'O'|| n[i] == 'u'|| n[i] == 'U')
			count++;
	}
	//탐색값 반환
	return count;
}


int main()
{
	char sentence[100];

	printf("> Enter a sentence.\n> ");
	//scanf함수가 공백을 만나 종료 되지 않도록 스킨셋 문자 사용
	scanf("%[^\n]s", sentence);

	printf("> Vowel appears %d times. \n", vowel_check(sentence));
	
}