/* ---------------------------------------------------------------------------- -
* ���� : Q1.c
* ��� : ���̾Ƹ�� ���
* ������ : [F003] , 202020678 �赿��
* ���� ���� : 2020 - 05 - 08
* ���� ���� : 2020 - 05 - 08 (Pass)
* ------------------------------------------------------------------------------ - */

#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
    int n;
    int line, space, star;
    //�ݺ��� ���� do-while �����
    do
    {
        printf("*** Diamond ****\n");
    back:
        printf("Enter N (1~9): ");
        scanf("%d", &n);//�Է�
        //�Է°� �˻�
        if (n < 1 || n>9)
        {
            printf("�߸��� �Է�\n");

            goto back;
        }
        //n�� 0�� ��� ���� ���� Ż��
        else if (n == 0)
            break;
        //��� ���̾Ƹ�� ���(�ﰢ��)
        for (line = 0; line < n; line++)//line: 0~n-1
        {
            for (space = 0; space < (n - line - 1); space++)//���� n-line-1��
            {
                putchar(' ');
            }
            for (star = 0; star < (2 * line + 1); star++)//�� 2*line +1��
            {
                putchar('*');
            }
            //����
            putchar('\n');
        }
        //�Ϻ� ���̾Ƹ�� ���(���ﰢ��)
        for (line = n - 2; line >= 0; line--)//line:n-2 ~ 0
        {
            for (space = 0; space < (n - line - 1); space++)//���� n-line-1��
            {
                putchar(' ');
            }
            for (star = 0; star < (2 * line + 1); star++)//�� 2*line +1��
            {
                putchar('*');
            }
            //����
            putchar('\n');
        }


    } while (1);
    //���� �ݺ�
}