/* -----------------------------------------------------------------------------
* 파일 : main.c
* 기능 : 3,4장 실습 과제 통합 Project (ProjectCh03) 진입 main 함수
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-010
* 개발 종료 : 2020-04-10(Pass)
*-------------------------------------------------------------------------------*/


#include<stdio.h>


//과제 문항 별 함수 선언 (prototype)
int ex0303();
int ex0304();
int ex0305();
int ex0306();
int ex0307();

int ex0402();
int ex0403();
int ex0404();
int ex0405();
int ex0406();

//상기 함수 포인터-주소들의 배열
int (*pex1[])() = { ex0303, ex0304, ex0305, ex0306, ex0307 };
int (*pex2[])() = { ex0402, ex0403, ex0404, ex0405, ex0406 };

int main() {

	int nex = 5; // 문항 갯수
	for (int i = 0; i < nex; i++) {
		printf("/***** Excise 03%02d *****/\n", i + 3); //각 문항 별 시작 알림
		pex1[i](); // 각 문항 코드 실행
	}


	for (int i = 0; i < nex; i++) {
		printf("/***** Excise 04%02d *****/\n", i + 2); //각 문항 별 시작 알림
		pex2[i](); // 각 문항 코드 실행
	}

	return 0;
}