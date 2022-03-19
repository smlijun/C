/* -----------------------------------------------------------------------------
* 파일 : Q2.c
* 기능 :기말고사 Q2 - 유리구슬
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-06-26
* 개발 종료 : 2020-06-26 (Pass)
*-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int arr[3][101];

int main()
{
    
    for (int i = 1; i < 101; i++)
        arr[1][i] = i;
    int temp, min = 99999;
    for (int i = 1; i < 101; i++) {
        min = 9999;
        for (int j = 1; j <= i; j++) {
            temp = arr[1][j - 1] > arr[2][i - j] ? arr[1][j - 1] : arr[2][i - j];
            temp++;
            if (min > temp)
                min = temp;
        }
        arr[2][i] = min;
    }
    /*
    for(int i = 1; i < 101; i++){
        if(i%10 == 1)
            printf("\n");
        printf("%d ",arr[2][i]);
    }*/
    int run = 1;
    while (run) {
        run = 0;
        int n;
        printf("층 수 (입력) : ");
        scanf("%d", &n);
        if (n == 0)
            break;
        printf("최고층 찾는 최적의 횟수: %d\n", arr[2][n]);
        run = 1;
    }
}