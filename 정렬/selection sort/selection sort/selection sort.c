/* -----------------------------------------------------------------------------
* 파일 : selection sort.c
* 기능 :selection sort
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-13
* 개발 종료 : 2020-04-13 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable:4996)


//값을 교환해주는 함수
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//선택정렬 함수
void selection_sort(int n[], int array_size)
{
	for (int i = 0; i < array_size - 1; i++)
	{
		for (int j = i + 1; j < array_size; j++)
		{
			if (n[i] > n[j]) 
			{
				//값 교환을 위한 swap 함수 호출
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
