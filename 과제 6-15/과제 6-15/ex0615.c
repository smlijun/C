/* -----------------------------------------------------------------------------
* ���� : ex0615.c
* ��� :6�� �ǽ� ���� ���� #15 - ���������� ��� ���
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-12
* ���� ���� : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
    double num = 1, sum = 0, result = 0;
    int count = 1;
    //���ѷ��� ����
    do
    {
        printf("> Enter a natural number.\n> ");
        scanf("%lf", &num);

        //�Է°��� 0�����̸� ���� ����
        if (num <= 0)
            break;
        //���� �Է°���ŭ ����
        sum += num;
        result = sum / count;
        printf("> Current average is %lf.\n", result);
        //�ݺ�Ƚ�� ����
        count++;  

    } while (1);
}