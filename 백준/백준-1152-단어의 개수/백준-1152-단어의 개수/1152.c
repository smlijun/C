/* -----------------------------------------------------------------------------
* ���� : 2577.c
* ��� :����-2577-������ ����
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-14
* ���� ���� : 2020-04-14 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable :4996)


int main()
{
	int count=0;
	char sentence[1000];
	scanf("%[^\n]s",sentence);

	for (int i = 0; i < strlen(sentence); i++)
	{
		if (sentence[i] == 32)
			count++;
	}
	
	printf("%d", count+1);

	return 0;
}