/* -----------------------------------------------------------------------------
* 파일 : ex0515.c
* 기능 :5장 실습 과제 문항 #15 -제품 단가 개수 급행 총 운송료 계산
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-09
* 개발 종료 : 2020-04-09 (Pass)
*-------------------------------------------------------------------------------*/
#include<stdio.h>
#pragma warning (disable :4996)

int main()
{
	int price, amount, fast;

	printf("> 단가를 입력하세요.\n> ");
	scanf("%d", &price);

	printf("> 개수를 입력하세요.\n> ");
	scanf("%d", &amount);

	printf("> 급행 여부를 입력하세요. (1: 급행, 0: 아님)\n> ");
	scanf("%d", &fast);

	if (fast == 1&&price*amount>=20000)
		printf("> 지불해야 할 총금액은 %d입니다", price * amount + 1000+1500);
	else if (fast == 1 && price * amount <20000)
		printf("> 지불해야 할 총금액은 %d입니다", price * amount+1000+2000);
	else if (fast==0 && price * amount < 20000)
		printf("> 지불해야 할 총금액은 %d입니다", price * amount + 2000);
	else
		printf("> 지불해야 할 총금액은 %d입니다", price * amount + 1500);
}