/* -----------------------------------------------------------------------------
* ���� : Q3.c
* ��� :�⸻��� Q3 - ��� �ö󰡱�
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-06-26
* ���� ���� : 2020-06-26 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning(disable:4996)



int stair_result(int n)
{                   
    // ��� ������ ������ ������ ���� ��ȭ�� f(n) = f(n - 1) + f(n - 2) 
    //��� �Լ� ���
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1 + stair_result(1);
    else
       return stair_result(n - 2) + stair_result(n - 1);
}

int main() 
{
    int n;
    back:
    printf("* ��� �� (�Է�): ");
    scanf("%d", &n);
    do 
    {
        if (n == 0)
            break;
        //�Լ� ȣ�� �� ��� ���
        printf("������ ��� ������: %d \n", stair_result(n));
        goto back;
    } while (1);
}