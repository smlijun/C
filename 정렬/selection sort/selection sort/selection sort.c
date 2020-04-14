/* -----------------------------------------------------------------------------
* ���� : selection sort.c
* ��� :selection sort
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-13
* ���� ���� : 2020-04-13 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable:4996)


//���� ��ȯ���ִ� �Լ�
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//�������� �Լ�
void selection_sort(int n[], int array_size)
{
	for (int i = 0; i < array_size - 1; i++)
	{
		for (int j = i + 1; j < array_size; j++)
		{
			if (n[i] > n[j]) 
			{
				//�� ��ȯ�� ���� swap �Լ� ȣ��
				swap(&n[i], &n[j]);
			}
		}
	}
}
int main()
{
	int size, num_array[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };

	size = sizeof(num_array) / sizeof(int);
	selection_sort(num_array, size);

	for (int i = 0; i < size; i++)
	{
		printf(" %d", num_array[i]);
	}


}
