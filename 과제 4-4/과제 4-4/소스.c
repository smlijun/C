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

	printf(">���ĺ� �ҹ��ڸ� �Է��Ͻÿ�.\n> ");
	scanf("%c", &small);

	big = to_upper_case(small);
	printf(">�ҹ��� %c�� �빮�ڴ� %c�Դϴ�.", small, big);
}
