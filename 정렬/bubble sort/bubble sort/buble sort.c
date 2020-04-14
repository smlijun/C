/* -----------------------------------------------------------------------------
* 파일 : buble sort.c
* 기능 :buble sort
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-13
* 개발 종료 : 2020-04-13 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning(disable:4996)

//값을 교환해주는 함수
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//버블정렬 함수
void buble_sort(int* n[],int array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		for (int j = 0; j < array_size - 1; j++)
		{
			//오름차순으로 정렬
			if (n[j] > n[j + 1])
			{
				//swap함수 호출 
				swap(&n[j], &n[j + 1]);
			}
		}
	}
}

int main()
{
	int size, num_array[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };

	//배열의 크기에 int값 만큼 나누어야 칸수가 나옴
	size = sizeof(num_array)/sizeof(int);
	//버블정렬 함수 호출
	buble_sort(num_array, size);

	//정렬 결과 출력
	for (int i = 0; i < size; i++)
	{
		printf(" %d", num_array[i]);
	}
	
}
.