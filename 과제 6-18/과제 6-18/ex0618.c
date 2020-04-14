/* -----------------------------------------------------------------------------
* 파일 : ex0618.c
* 기능 :6장 실습 과제 문항 #18- Caesar-Cipher Encryption
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-11
* 개발 종료 : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

//Caesar_Cipher 함수
void Caesar_Cipher_Encryption(char n[],int key)
{
	int i;
	//각 배열 전체에 각각 key만큼 아스키 값을 증가시킴
	//아스키 값은 0~127이므로 전체 결과에 127로 나머지 연산
	for (i = 0; i < strlen(n); i++)
	{
		n[i] = (n[i] + key) % 127;
	}
	//암호화 결과 출력
	printf("> %s", n);
}


int main() 
{
	char sentence[100];
	int key;

	printf("> Enter the key\n> ");
	scanf("%d", &key);

	printf("> Enter the text\n> ");
	//입력 버퍼 비움
	getchar();
	//공백문자도 입력받기 위해 스킨셋 사용
	scanf("%[^\n]s", sentence);

	//암호화를 위한 함수 호출
	Caesar_Cipher_Encryption(sentence, key);

}