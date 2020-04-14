/* -----------------------------------------------------------------------------
* ���� : buble sort.c
* ��� :buble sort
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-13
* ���� ���� : 2020-04-13 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
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
void buble_sort(int* n[],int array_size)
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

int main()
{
	int size, num_array[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };

	//�迭�� ũ�⿡ int�� ��ŭ ������� ĭ���� ����
	size = sizeof(num_array)/sizeof(int);
	//�������� �Լ� ȣ��
	buble_sort(num_array, size);

	//���� ��� ���
	for (int i = 0; i < size; i++)
	{
		printf(" %d", num_array[i]);
	}
	
}
.