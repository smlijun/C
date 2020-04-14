/* -----------------------------------------------------------------------------
* ���� : ex0612.c
* ��� :6�� �ǽ� ���� ���� #12 - �Է¼��� ���� ���� ���ڿ� ���
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-12
* ���� ���� : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable:4996)

//���� �ﰢ�� ���� �� ���
void star_print1(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
//���� �ﰢ�� ���� ���� �Ƕ�̵� ���
void number_print(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j <= i)
				printf("%d", j);
			else
				printf(" ");
		}
		printf("\n");
	}
}
//�Ƕ�̵� ���� �� ���
void star_print2(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--) 
		{
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int num;
	printf("Enter the number.\n");
	scanf("%d", &num);

	//���� ����� ���� �Լ� ȣ��
	star_print1(num);
	number_print(num);
	star_print2(num/2+1);
}