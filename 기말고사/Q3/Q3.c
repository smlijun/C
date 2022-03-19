/* -----------------------------------------------------------------------------
* 파일 : Q3.c
* 기능 :기말고사 Q3 - 계단 올라가기
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-06-26
* 개발 종료 : 2020-06-26 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning(disable:4996)



int stair_result(int n)
{                   
    // 계단 오르기 가짓수 구현을 위한 점화식 f(n) = f(n - 1) + f(n - 2) 
    //재귀 함수 사용
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1 + stair_result(1);
    else
       return stair_result(n - 2) + stair_result(n - 1);
}

int main() 
{
    int n;
    back:
    printf("* 계단 수 (입력): ");
    scanf("%d", &n);
    do 
    {
        if (n == 0)
            break;
        //함수 호출 및 결과 출력
        printf("오르는 방법 가짓수: %d \n", stair_result(n));
        goto back;
    } while (1);
}