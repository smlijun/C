/* -----------------------------------------------------------------------------
* ���� : ex0402.c
* ��� :4�� �ǽ� ���� ���� #02 - �Ǽ����� ���� x,y ��ǥ�� �Է¹޾� �������� �Ÿ� ���ϴ� �Լ� ����
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-10
* ���� ���� : 2020-04-10 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

double distance(double i, double j, double k, double n)
{
	double xcor, ycor, temp, result;
	//pow �Լ��� ������ ����
	xcor = pow(i - k, 2);
	ycor = pow(j - n, 2);
	//������ ���� ���ϱ� ���� sqrt�Լ� ���
	result = sqrt(xcor + ycor);

	printf("Distance between the points is %lf.\n", result);
}

int ex0402()
{
	double p1, p2, q1, q2;
	printf("> Enter the coordinates of point p.\n> ");
	scanf("%lf %lf", &p1, &p2);

	printf("> Enter the coordinates of point q.\n> ");
	scanf("%lf %lf", &q1, &q2);
	//distance �Լ� ȣ��
	distance(p1, p2, q1, q2);
}

