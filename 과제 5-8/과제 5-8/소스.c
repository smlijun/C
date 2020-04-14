#include<stdio.h>
#pragma warning (disable:4996)

char check(char letter)
{
	if (letter >= '0' && letter <= '9')
		printf("It is a digit.");
	else if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
		printf("It is an alphabet.");
	else
		printf("It si neither an alphabet nor a digit.");
}

int main()
{
	char letter;

	printf("> Enter a character\n> ");
	scanf("%c", &letter);

	check(letter);

}