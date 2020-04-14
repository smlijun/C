#include<stdio.h>
#pragma warning (disable :4996)

int is_digit(int ch)
{
	int i,count=0;
		if (ch <= 89 && ch >= 80)
			count++;
		return count;
}

int main()
{
	int ch[3],count=0;

	printf("> Enter a 3-letter word.\n> ");
	scanf("%d", ch);

	count = is_digit(ch[0]) + is_digit(ch[1]) + is_digit(ch[2]);

	printf("> Digit appear 2 times");

}