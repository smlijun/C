/* -----------------------------------------------------------------------------
* ���� : ex0614.c
* ��� :6�� �ǽ� ���� ���� #14 - �ڸ��� ���� ���
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-12
* ���� ���� : 2020-04-12 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#pragma warning (disable:4996)

//�迭�� �������� �����ϴ� �Լ�
void reverseArrayInt(char* array, int size)
{
	//�ӽ÷� ���� ������ ����
	int temp;

	for (int i = 0; i < size / 2; i++)
	{
		temp = array[i];
		array[i] = array[(size - 1) - i];
		array[(size - 1) - i] = temp;
	}
}


void reverse_it(int num)
{
	int i,size;
	char number[10];

	//�迭�� ���ڸ��� ����
	size = sprintf(number, "%d", num);

	//���� �迭�� ���� �Լ� ȣ��
	reverseArrayInt(number, size);
	//��� �� ���
	printf("> %s\n", number);
}


int main()
{
	int num;
	//�ݺ��� ���� while�� ����

	do
	{
		printf("> Enter a natural.\n> ");
		scanf("%d", &num);
		//�Է��� 0���� ������ ���α׷� ����
		if (num <= 0)
			break;

		//���� ��� �Լ� ȣ��
		reverse_it(num);
		
	} while (1);

}