/* -----------------------------------------------------------------------------
* 파일 : ex0621.c
* 기능 :6장 실습 과제 문항 #21- 2진수를 10진수로 변환
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-10
* 개발 종료 : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#pragma warning (disable :4996)

int bin_to_dec(long long n) {
    char arr[20];
    int size = 0;
    double  dec_num = 0;

    //배열에 문자형식으로 입력받은 2진수 저장
    size = sprintf(arr, "%lld", n);
    for (int i = 0; i < size; i++)
        //배열에 아스키코드로 저장됨으로 48만큼 뺴줌
        dec_num += (arr[i] - 48) * pow(2, size - 1 - i);

    return dec_num;
}

int main()
{
    long long bin_num;

    printf("> Enter a bianry number\n> ");
    scanf("%lld", &bin_num);
    printf("> The decimal value of binary %lld is %d.", bin_num, (int)bin_to_dec(bin_num));
}