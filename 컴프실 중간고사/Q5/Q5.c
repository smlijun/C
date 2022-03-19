/* -----------------------------------------------------------------------------
* ���� : Q5.c
* ��� :���� ����
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-05-08
* ���� ���� : 2020-05-08 (Pass)
*-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
    //2����Ʈ ��ŭ ���� �޸� �Ҵ�
    char* a = malloc(2), * b = 0, * x = 0, c;
    int cnt, len = 1, i = 1, lim, s;
    printf("*** Look & Say Sequence***\n");
    do
    {
    back:
        lim = 0; s = 0;
        //������ ����� �������� �ʱ⿡ i���� 0���� �ʱ�ȭ �Ѵ�.
        i = 0;
        printf("* Enter Base Number [1-9] & Depth [1-9]: ");
        //base nuber �Է�
        scanf("%d", &s);
        //depth �Է�
        scanf("%d", &lim);
        //�Է°� ����
        if (lim > 9 || lim < 1 || s>9 || s < 1)
        {
            printf("�߸��� �Է�\n");
            goto back;
        }
        else if (lim == 0)
        {
            printf("Bye!!");
            break;
        }

        //sprintf�� ���� a�� 10���� ���·� s�� ���� 
        for (sprintf(a, "%d", s); (b = realloc(b, len * 2 + 1)); a = b, b = x)
        {
            //���� ���
            printf("Level %d: %s ", i, a);
            printf("\n");
            for (len = 0, cnt = 1; (c = *a); )
            {
                if (c == *++a)
                    cnt++;
                // c�� 0�� �ƴҰ��
                else if (c)
                {
                    //sprintf�� �迭�� ���̸� ��ȯ��
                    len += sprintf(b + len, "%d%c", cnt, c);
                    cnt = 1;

                }

            }
            //������ �ɵ����� �����ϸ� break�� Ż��
            if (i == lim)
                break;
            //���� ȸ�� ����
            i++;
        }
    } while (1);
    return 0;
}