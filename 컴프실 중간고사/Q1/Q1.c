/* ---------------------------------------------------------------------------- -
* 파일 : Q1.c
* 기능 : 다이아몬드 출력
* 개발자 : [F003] , 202020678 김동준
* 개발 시작 : 2020 - 05 - 08
* 개발 종료 : 2020 - 05 - 08 (Pass)
* ------------------------------------------------------------------------------ - */

#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
    int n;
    int line, space, star;
    //반복을 위해 do-while 문사용
    do
    {
        printf("*** Diamond ****\n");
    back:
        printf("Enter N (1~9): ");
        scanf("%d", &n);//입력
        //입력값 검사
        if (n < 1 || n>9)
        {
            printf("잘못된 입력\n");

            goto back;
        }
        //n이 0일 경우 무한 루프 탈출
        else if (n == 0)
            break;
        //상부 다이아몬드 출력(삼각형)
        for (line = 0; line < n; line++)//line: 0~n-1
        {
            for (space = 0; space < (n - line - 1); space++)//공백 n-line-1개
            {
                putchar(' ');
            }
            for (star = 0; star < (2 * line + 1); star++)//별 2*line +1개
            {
                putchar('*');
            }
            //개행
            putchar('\n');
        }
        //하부 다이아몬드 출력(역삼각형)
        for (line = n - 2; line >= 0; line--)//line:n-2 ~ 0
        {
            for (space = 0; space < (n - line - 1); space++)//공백 n-line-1개
            {
                putchar(' ');
            }
            for (star = 0; star < (2 * line + 1); star++)//별 2*line +1개
            {
                putchar('*');
            }
            //개행
            putchar('\n');
        }


    } while (1);
    //루프 반복
}