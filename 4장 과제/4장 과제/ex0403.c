/* -----------------------------------------------------------------------------
* ���� : ex0403.c
* ��� :4�� �ǽ� ���� ���� #03 - ������ ���ϴ� �Լ��� ������ �� ȣ���Ͽ� a^2+b^2 �� ����ϱ�
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-10
* ���� ���� : 2020-04-10 (Pass)
*-------------------------------------------------------------------------------*/


#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

int square(int n)
{
	n = n * n;
	return n;
	//����� ��ȯ
}

int ex0403()
{
	int num1, num2, snum1, snum2;
	printf("> Enter a, b.\n> ");
	scanf("%d %d", &num1, &num2);

	//square�Լ� ȣ��
	snum1 = square(num1);
	snum2 = square(num2);
	printf("> %d * %d + %d * %d = %d.\n", num1, num1, num2, num2, snum1 + snum2);
}