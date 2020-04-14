#include<stdio.h>
#pragma warning (disable:4996)

char to_upper_case(char sh)
{
	sh=sh - 32;
	return sh;
}

int main()
{
	char small, big;

	printf(">알파벳 소문자를 입력하시오.\n> ");
	scanf("%c", &small);

	big = to_upper_case(small);
	printf(">소문자 %c의 대문자는 %c입니다.", small, big);
}
