/* -----------------------------------------------------------------------------
* ���� : ex0405.c
* ��� :4�� �ǽ� ���� ���� #05 -����� ���ϴ� �Լ��� ǥ�������� ���ϴ� �Լ� �����ϱ�
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-10
* ���� ���� : 2020-04-10 (Pass)
*-------------------------------------------------------------------------------*/


#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

double average(double a, double b, double c)
{
	//������� ������ ���� ����
	double result;
	result = (a + b + c) / 3;
	return result;
}

double std_deviation(double a, double b, double c)
{
	double result;
	//average �Լ��� math.h�� ���Ե� pow�Լ��� ȣ���� �ʿ��� ������ �����ϹǷ� ���� ������ �������
	result = pow(average(a, b, c) - a, 2) + pow(average(a, b, c) - b, 2) + pow(average(a, b, c) - c, 2);
	result = result / 3;
	//�������� ���ϱ� ���� sqrt�Լ� ���
	result = sqrt(result);

	return result;
}

int ex0405()
{
	double num1, num2, num3;
	printf("> Enter a three real numbers\n> ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	//std_deviation�Լ� ȣ��
	printf("> The standard deviation is %lf\n", std_deviation(num1, num2, num3));
}