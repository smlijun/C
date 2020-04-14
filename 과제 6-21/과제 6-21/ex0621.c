/* -----------------------------------------------------------------------------
* ���� : ex0621.c
* ��� :6�� �ǽ� ���� ���� #21- 2������ 10������ ��ȯ
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-10
* ���� ���� : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#pragma warning (disable :4996)

int bin_to_dec(long long n) {
    char arr[20];
    int size = 0;
    double  dec_num = 0;

    //�迭�� ������������ �Է¹��� 2���� ����
    size = sprintf(arr, "%lld", n);
    for (int i = 0; i < size; i++)
        //�迭�� �ƽ�Ű�ڵ�� ��������� 48��ŭ ����
        dec_num += (arr[i] - 48) * pow(2, size - 1 - i);

    return dec_num;
}

int main()
{
    long long bin_num;

    printf("> Enter a bianry number\n> ");
    scanf("%lld", &bin_num);
    printf("> The decimal value of binary %lld is %d.", bin_num, (int)bin_to_dec(bin_num));
}