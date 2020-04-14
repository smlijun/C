/* -----------------------------------------------------------------------------
* 파일 : ex0307.c
* 기능 :3장 실습 과제 문항 #07 -거스름돈 문제
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-01
* 개발 종료 : 2020-04-01 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable:4996)

int ex0307()

{
	//배열에 동전 단위 입력
	int coin[4] = { 500,100,50,10 };
	

	int change, i, count[4];

	printf("> Enter the amout of change.\n> ");
	//잔돈 입력받기
	scanf("%d", &change);


	for (i = 0; i < 4; i++)
	{
		//나눈 몫을 count배열에 넣고 나머지만 다시 change 변수에 넣어 더작은단위의 동전까지 탐색
		count[i] = change / coin[i];
		change = change % coin[i];
	}

	printf("> 500원: %d개, 100원: %d개, 50원: %d개, 10원: %d개.\n", count[0], count[1], count[2], count[3]);

}