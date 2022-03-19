/* -----------------------------------------------------------------------------
* ���� : Q5.c
* ��� :�⸻��� Q5 - ī�����
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-06-26
* ���� ���� : 2020-06-26 (Pass)
*-------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

//���� ���� �Լ�
void bubble_sort(int arr[]) {
    int i, j, temp;

    for (i = 6; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    while (1) 
    {
        int card[7];
        printf("*** Play Game ***\n");
        //�迭�� ������ ī�� ����
        for (int i = 0; i < 7; i++)
            card[i] = rand() % 13 + 1;
        printf("7 Cards received:   ");
       
        for (int i = 0; i < 7; i++)
            printf("%d ", card[i]);
        //���� ���� ����
        bubble_sort(card);

        printf("\n");
        printf("7 Cards sorted:     ");
        for (int i = 0; i < 7; i++)
            printf("%d ", card[i]);

        int run = 1;
        int size = 7;
        int sum = 0;
        while (run)
        {
            run = 0;
            //����� �ٿ����� ���� ���� �ִ��� Ž��
            for (int i = 0; i < size - 1; i++) {
                if (card[i] == card[i + 1]) {
                    card[i + 1]--;
                    for (int j = i; j < size - 1; j++)
                        card[j] = card[j + 1];
                    size--;
                    run = 1;
                    break;
                }
            }
        }
        printf("\n");
        //��Ģ�� ���� ���� ������ ���� ī�� ���
        printf("%d Cards reduced:    ", size);
        for (int i = 0; i < size; i++) {
            if (card[i] == 0)
                continue;
            printf("%d ", card[i]);
            sum += card[i];
        }
        //���� �� ���
        printf("--> sum = %d", sum);

        char c;
        scanf("%c", &c);
        if (c == '\n') {
            printf("\n");
            continue;
        }
        else
            break;
    }
}