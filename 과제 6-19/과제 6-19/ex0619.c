/* -----------------------------------------------------------------------------
* ���� : ex0619.c
* ��� :6�� �ǽ� ���� ���� #19- ���� ���� Ƚ�� Ž��
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-11
* ���� ���� : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable :4996)

int vowel_check(char n[])
{
	int i, count = 0;
	//for ������ �迭�� �������� Ž��
	for (i = 0; i < strlen(n); i++)
	{
		if (n[i] == 'a'|| n[i] == 'A'|| n[i] == 'e'|| n[i] == 'E'|| n[i] == 'i'|| n[i] == 'I'|| n[i] == 'o'|| n[i] == 'O'|| n[i] == 'u'|| n[i] == 'U')
			count++;
	}
	//Ž���� ��ȯ
	return count;
}


int main()
{
	char sentence[100];

	printf("> Enter a sentence.\n> ");
	//scanf�Լ��� ������ ���� ���� ���� �ʵ��� ��Ų�� ���� ���
	scanf("%[^\n]s", sentence);

	printf("> Vowel appears %d times. \n", vowel_check(sentence));
	
}