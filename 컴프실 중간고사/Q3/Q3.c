/* -----------------------------------------------------------------------------
* ���� : Q3.c
* ��� :����
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-05-08
* ���� ���� : 2020-05-08 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

//���� ��ȯ���ִ� �Լ�
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//�������� �Լ�
void buble_sort(int* n[], int array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		for (int j = 0; j < array_size - 1; j++)
		{
			//������������ ����
			if (n[j] > n[j + 1])
			{
				//swap�Լ� ȣ�� 
				swap(&n[j], &n[j + 1]);
			}
		}
	}
}
//�迭�� ������ ������ �ֱ� ���� �Լ�
void getData(int data[], int size)
{
	// array[size] of random value in [1, 100]
	srand(1);
	for (int i = 0; i < size; i++) {
		data[i] = (rand() % 100) + 1;
	}
}

int main()
{
	int arr[20];
	int min, max;
	double med, ave = 0;
	printf("*** Sorting ****\n");
	printf("** Given Data **\n");
	//�迭�� ������ ���� ����
	getData(arr, 20);
	//0������ 9�� �迭���� ���
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", arr[i]);
	}
	//����
	printf("\n");
	//10������ 19�� �迭 ���
	for (int i = 10; i < 20; i++)
	{
		printf(" %d ", arr[i]);
	}

	printf("\n** Sorted Data **\n");
	//������ ���� ���� ���� �Լ� ȣ��
	buble_sort(arr, 20);
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", arr[i]);
	}
	//����
	printf("\n");
	for (int i = 10; i < 20; i++)
	{
		printf(" %d ", arr[i]);
	}
	//�������� �����̹Ƿ� min ������ max���� ����
	min = arr[0]; max = arr[19];
	//�迭�� int���̹Ƿ� double�� ����ȯ
	med = ((double)arr[9] + (double)arr[10]) / 2;
	//����� ���ϱ� ���� �迭 ��ü��Ҹ� ����
	for (int i = 0; i < 20; i++)
	{
		ave += (double)arr[i];
	}
	(double)ave = (double)ave / 20;
	//��� �� ���
	printf("\nMin = %d, Max = %d, Med = %.2lf, Ave = %.2lf\n", min, max, med, ave);
}