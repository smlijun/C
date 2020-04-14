#include<stdio.h>
#pragma warning (disable :4996)

int is_vowel(char c)
{
	if (c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == ' u')
		printf("Vowel");
	else
		printf("Consonant");
}

int main()
{
	char c;
	printf("소문자를 입력해주세요\n");
	scanf("%c", &c);

	is_vowel(c);

}