/* -----------------------------------------------------------------------------
* 파일 : Q2.c
* 기능 :삼각형 넓이 출력
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-05-08
* 개발 종료 : 2020-05-08 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

//값을 교환해주는 함수
// 실제 값을 변경하기 위해 포인터 사용
void swap2(double* a, double* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//선택정렬 함수
void selection_sort2(double n[], int array_size)
{
	for (int i = 0; i < array_size - 1; i++)
	{
		for (int j = i + 1; j < array_size; j++)
		{
			//오름차순
			if (n[i] > n[j])
			{
				//값 교환을 위한 swap 함수 호출
				swap2(&n[i], &n[j]);
			}
		}
	}
}
// 삼각형 판별함수
int triangle_judge(double array[])
{
	if (array[0] + array[1] > array[2])
		//삼각형이 존재 할 경우 1 반환
		return 1;
	else
		//아닌경우 0 반환
		return 0;
}
double triangle_size(double arr[])
{
	double s, size;
	s = (arr[0] + arr[1] + arr[2]) / 2;
	size = s * (s - arr[0]) * (s - arr[1]) * (s - arr[2]);
	size = sqrt(size);
	return size;
}
int main()
{
	int tmp;
	double length[3];

	printf("*** Triangle ****\n");
	do
	{
	//goto문을 통해 돌아올 지점 저장
	back:
		printf("Enter three side lenght: ");
		//배열에 실수 입력
		for (int i = 0; i < 3; i++)
		{
			scanf("%lf", &length[i]);
		}
		//만약 0이 하나 이상 입력될 경우 break로 실행 종료
		if (length[0] == 0 || length[1] == 0 || length[2] == 0)
		{
			printf("Bye!!\n");
			break;
		}
			
		//배열 정렬을 위한 선택정렬 함수 호출
		selection_sort2(length, 3);
		//tmp에 triangle_judge 결과 값저장
		tmp = triangle_judge(length);
		//0이 반환 되었을 경우 에러 메서지 출력 후 초기 저장한 지점을 점프
		if (tmp == 0)
		{
			printf("Not a triangle!\n");
			goto back;
		}
		//triangle_size함수를 호출해 결과를 소수 두번째 자리 까지만 출력
		printf("Area = %.2lf\n", triangle_size(length));

		//무한 루프
	} while (1);
}