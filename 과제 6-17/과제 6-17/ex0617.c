/* -----------------------------------------------------------------------------
* ���� : ex0617.c
* ��� :6�� �ǽ� ���� ���� #17- in ����Ƚ�� Ž��
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-11
* ���� ���� : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

int Text_in_Search(char sentence[])
{
	int i, count = 0;
	//�迭�� in �� Ž���ϱ� ���� for,if ��
	for (i = 0; i < strlen(sentence); i++)
	{
		if (sentence[i]==' '&& sentence[i+1] == 'i' && sentence[i + 2] == 'n' && sentence[i + 3] == ' ')
			count++;
	}
	//count Ƚ�� ��ȯ
	return count;
}
	


int main()
{
	int result=0;
	char sentence[200];

	printf("> Enter a sentence.\n> ");
	//������� �о���̱����� ��Ų�� ���
	scanf("%[^\n]s", sentence);

	//in Ž�� �Լ� ȣ��
	result = Text_in_Search(sentence);
	printf("> The preposition 'in' appears %d time.\n",result);
}