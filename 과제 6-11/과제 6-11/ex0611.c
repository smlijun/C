/* -----------------------------------------------------------------------------
* ���� : ex0611.c
* ��� :6�� �ǽ� ���� ���� #15 -���μ� �Ǻ�
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-12
* ���� ���� : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable :4996)

//���μ� �Ǻ��Լ� ���ϰ�� 'y' ��ȯ �����ΰ�� 'n' ��ȯ
char mutally_prime(int a, int b)
{
	int i,min,count=0;
	min = a > b ? b : a;
	
	//a,b��� ����������� �ϳ� �̻��� ����� ���� 
	for (i = 2; i < +min; i++)
	{
		if (a % i == 0 && b % i == 0)
			count++;
	}
	if (count == 0)
		return 'y';
	else
		return 'n';
}


int main()
{
	int num1, num2;
	printf("> Enter two number.\n> ");
	scanf("%d %d", &num1, &num2);

	//���μ� �Ǻ� �Լ� ȣ��
	if (mutally_prime(num1, num2) == 'y')
		printf("> They are mutually prime.\n");
	else
		printf("> They are mutually prime.\n");
}