/* -----------------------------------------------------------------------------
* ���� : Q2.c
* ��� :�⸻��� Q2 - ��������
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-06-26
* ���� ���� : 2020-06-26 (Pass)
*-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int arr[3][101];

int main()
{
    
    for (int i = 1; i < 101; i++)
        arr[1][i] = i;
    int temp, min = 99999;
    for (int i = 1; i < 101; i++) {
        min = 9999;
        for (int j = 1; j <= i; j++) {
            temp = arr[1][j - 1] > arr[2][i - j] ? arr[1][j - 1] : arr[2][i - j];
            temp++;
            if (min > temp)
                min = temp;
        }
        arr[2][i] = min;
    }
    /*
    for(int i = 1; i < 101; i++){
        if(i%10 == 1)
            printf("\n");
        printf("%d ",arr[2][i]);
    }*/
    int run = 1;
    while (run) {
        run = 0;
        int n;
        printf("�� �� (�Է�) : ");
        scanf("%d", &n);
        if (n == 0)
            break;
        printf("�ְ��� ã�� ������ Ƚ��: %d\n", arr[2][n]);
        run = 1;
    }
}