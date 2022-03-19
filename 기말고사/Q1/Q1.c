/* -----------------------------------------------------------------------------
* 파일 : Q1.c
* 기능 :기말고사 Q1 - 직사각형 좌표
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-06-26
* 개발 종료 : 2020-06-26 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning(disable:4996)

//좌표형태(x,y)의 구조체선언
typedef struct point 
{
	int x;
	int y;
} PointType;
//변수 선언
PointType V[4];

//xor 연산을 사용해 x,y 좌표를 찾아 반환한다
//x좌표 연산을 위한 함수
int x_location(PointType V[])
{
	int  x;
	x = V[0].x ^ V[1].x ^ V[2].x;
	return x;
}
//y좌표 연산을 위한 함수
int y_location(PointType V[])
{
	int  y;
	y = V[0].y ^ V[1].y ^ V[2].y;
	return y;
}


int main()
{
	int x1, y1;
	printf("* 직사각형 3 개의 꼭지점 좌표 (입력): ");
	scanf("%d,%d %d,%d %d,%d", &V[0].x, &V[0].y, &V[1].x, &V[1].y, &V[2].x, &V[2].y);

	//x,y값 연산을 위해 함수 호출
	x1 = x_location(V);
	y1 = y_location(V);
	//결과 출력
	printf("3 개의 꼭지점: [%d, %d], [%d, %d], [%d, %d] --> 4 번째 꼭지점: [%d, %d]", V[0].x, V[0].y, V[1].x, V[1].y, V[2].x, V[2].y, x1, y1);


}