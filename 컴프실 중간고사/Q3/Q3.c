/* -----------------------------------------------------------------------------
* 파일 : Q3.c
* 기능 :정렬
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-05-08
* 개발 종료 : 2020-05-08 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
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
void buble_sort(int* n[], int array_size)
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
//배열에 임의의 정수를 넣기 위한 함수
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
	//배열에 임의의 정수 삽입
	getData(arr, 20);
	//0번에서 9번 배열까지 출력
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", arr[i]);
	}
	//개행
	printf("\n");
	//10번에서 19번 배열 출력
	for (int i = 10; i < 20; i++)
	{
		printf(" %d ", arr[i]);
	}

	printf("\n** Sorted Data **\n");
	//정렬을 위한 버블 정렬 함수 호출
	buble_sort(arr, 20);
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", arr[i]);
	}
	//개행
	printf("\n");
	for (int i = 10; i < 20; i++)
	{
		printf(" %d ", arr[i]);
	}
	//오름차순 정렬이므로 min 변수와 max변수 설정
	min = arr[0]; max = arr[19];
	//배열이 int형이므로 double로 형변환
	med = ((double)arr[9] + (double)arr[10]) / 2;
	//평균을 구하기 위해 배열 전체요소를 더함
	for (int i = 0; i < 20; i++)
	{
		ave += (double)arr[i];
	}
	(double)ave = (double)ave / 20;
	//결과 값 출력
	printf("\nMin = %d, Max = %d, Med = %.2lf, Ave = %.2lf\n", min, max, med, ave);
}