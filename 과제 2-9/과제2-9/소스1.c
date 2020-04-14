#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char name[50], purp[50], grade;

	printf("이름을 입력하시오: ");
	scanf("%s", name);														//문자열 입력

	printf("수강목적을 입력하시오: ");
	scanf("%s", purp);														//문자열 입력

	printf("희망 학점을 입력하시오: ");
	getchar();																//버퍼에 \n 비우기
	scanf("%c", &grade);
	
	printf("\n이름: %s\n수강목적: %s\n희망학점: %c ", name, purp, grade);   //결과 출력
}