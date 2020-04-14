/* -----------------------------------------------------------------------------
* 파일 : ex0615.c
* 기능 :6장 실습 과제 문항 #15 - 지속적으로 평균 출력
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-12
* 개발 종료 : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
    double num = 1, sum = 0, result = 0;
    int count = 1;
    //무한루프 진입
    do
    {
        printf("> Enter a natural number.\n> ");
        scanf("%lf", &num);

        //입력값이 0이하이면 루프 종료
        if (num <= 0)
            break;
        //총합 입력값만큼 증가
        sum += num;
        result = sum / count;
        printf("> Current average is %lf.\n", result);
        //반복횟차 증가
        count++;  

    } while (1);
}