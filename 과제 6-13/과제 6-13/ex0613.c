/* -----------------------------------------------------------------------------
* ���� : ex0613.c
* ��� :6�� �ǽ� ���� ���� #13 �ھƵ��� �� �Ǻ�
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-11
* ���� ���� : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#pragma warning (disable:4996)

//return 1 if narcissistic number
int narciss(int n)
{
	char num_array[10];
	int i,size = 0,result=0;

	//�迭�� �ƽ�Ű �ڵ� �������� ���ڸ��� ����
	size = sprintf(num_array, "%d", n);

	//�� �迭�� ����� ���� �ڸ�����ŭ �ŵ�����
	for (i = 0; i < size; i ++)
	{
		result += pow(num_array[i]-48, size);
	}
	if (result == n)
		return 1;
	else
		return 0;
}

int main()
{
	int num;
	printf("> Enter a number.\n> ");
	scanf("%d", &num);

	//narciss�Լ� ȣ���� ���� ��,���� �б�
	if (narciss(num) == 1)
		printf("> Yes, %d is a narcissistic number,\n", num);
	else
		printf("> No, %d is a not narcissistic number,\n", num);
}