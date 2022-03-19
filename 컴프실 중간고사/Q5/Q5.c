/* -----------------------------------------------------------------------------
* 파일 : Q5.c
* 기능 :개미 수열
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-05-08
* 개발 종료 : 2020-05-08 (Pass)
*-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
    //2바이트 만큼 동적 메모리 할당
    char* a = malloc(2), * b = 0, * x = 0, c;
    int cnt, len = 1, i = 1, lim, s;
    printf("*** Look & Say Sequence***\n");
    do
    {
    back:
        lim = 0; s = 0;
        //루프를 제대로 돌기위해 초기에 i값을 0으로 초기화 한다.
        i = 0;
        printf("* Enter Base Number [1-9] & Depth [1-9]: ");
        //base nuber 입력
        scanf("%d", &s);
        //depth 입력
        scanf("%d", &lim);
        //입력값 검증
        if (lim > 9 || lim < 1 || s>9 || s < 1)
        {
            printf("잘못된 입력\n");
            goto back;
        }
        else if (lim == 0)
        {
            printf("Bye!!");
            break;
        }

        //sprintf를 통해 a에 10진수 형태로 s값 저장 
        for (sprintf(a, "%d", s); (b = realloc(b, len * 2 + 1)); a = b, b = x)
        {
            //수열 출력
            printf("Level %d: %s ", i, a);
            printf("\n");
            for (len = 0, cnt = 1; (c = *a); )
            {
                if (c == *++a)
                    cnt++;
                // c가 0이 아닐경우
                else if (c)
                {
                    //sprintf은 배열의 길이를 반환함
                    len += sprintf(b + len, "%d%c", cnt, c);
                    cnt = 1;

                }

            }
            //루프가 심도까지 도달하면 break로 탈출
            if (i == lim)
                break;
            //루프 회차 증가
            i++;
        }
    } while (1);
    return 0;
}