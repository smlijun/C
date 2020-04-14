/* -----------------------------------------------------------------------------
* ���� : ex0620.c
* ��� :6�� �ǽ� ���� ���� #20 - ID ���� ��ġ����ġ �Ǻ�
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-11
* ���� ���� : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

//���ڿ� ���� üũ�� ���� �Լ�
int lenght_check(char ID[])
{
	int lenght;
	//���ڿ��� ���̸� ���ϱ����� strlen�Լ� ȣ��
	lenght = strlen(ID); 
	//����Ȯ���� ���� if�� ���ϰ�� 1��ȯ �ƴϸ� 0 ��ȯ
	if (lenght <= 8)
		return 1;
	else
		return 0;
}

//�����ϳ��� ���ԵǾ��ִ��� Ȯ���ϴ� �Լ�
int num_check(char ID[])
{
	int i,count=0;
	char ID_array[10];

	
	//�迭�� ����Ȱ��� ������ ���� Ž��
	for (i = 0; i < strlen(ID); i++)
	{
		if (ID_array[i] <= 0 && ID_array[i] >= 9)
			count++;
	}

	//����Ȯ���� ���� if�� ���� ��� 1 ��ȯ �ƴϸ� 0 ��ȯ
	if (count >= 1)
		return 1;
	else
		return 0;
}

int lower_case_check(char ID)
{
	//���� Ȯ���� ���� if�� ���� ��� 1 ��ȯ �ƴϸ� 0 ��ȯ
	if (ID <= 122 && ID >= 97)
		return 1;
	else
		return 0;
}

int main()
{
	char ID[20] = {0,};

	printf("> Enter an identifier.\n> ");
	scanf("%s", ID);

	//�� 3���� �Լ��� ȣ���Ͽ� ID�� ���� ��ġ ����ġ �Ǻ�
	if (lenght_check(ID) == 1 && num_check(ID) == 0 && lower_case_check(ID) == 0)
		printf("> It's legal ID.\n");
	else
		printf("> it's unlegal ID.\n");
	
}