/* -----------------------------------------------------------------------------
* 파일 : ex0512.c
* 기능 :5장 실습 과제 문항 #12 - BMI 평가 결과 
* 개발자 : [F003], 202020678 김동준
* 개발 시작 : 2020-04-09
* 개발 종료 : 2020-04-09 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

double BMI_calc(double w, double h)
{
	double BMI;
	BMI = w / (pow((h * 0.01), 2));
	return BMI;
}

double BMI_check(double BMI)
{
	if (BMI < 18.5)
		return 0;
	else if (BMI >= 18.5 && BMI < 25)
		return 1;
	else
		return 2;
}

int main()
{
	int temp;
	double weight, height,BMI;

	printf("> Enter your weight.\n>");
	scanf("%lf", &weight);

	printf("> Enter your height.\n>");
	scanf("%lf", &height);

	BMI = BMI_calc(weight, height);
	temp=BMI_check(BMI);

	if (temp == 0)
		printf("> Your BMI is %lf. It is ungerweight", BMI);
	else if (temp == 1)
		printf("> Your BMI is %lf. It is normal.", BMI);
	else
		printf("> your BMI is %lf. It is overweight.", BMI);

}