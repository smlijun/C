/* -----------------------------------------------------------------------------
* ���� : Q2.c
* ��� :�ﰢ�� ���� ���
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-05-08
* ���� ���� : 2020-05-08 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

//���� ��ȯ���ִ� �Լ�
// ���� ���� �����ϱ� ���� ������ ���
void swap2(double* a, double* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//�������� �Լ�
void selection_sort2(double n[], int array_size)
{
	for (int i = 0; i < array_size - 1; i++)
	{
		for (int j = i + 1; j < array_size; j++)
		{
			//��������
			if (n[i] > n[j])
			{
				//�� ��ȯ�� ���� swap �Լ� ȣ��
				swap2(&n[i], &n[j]);
			}
		}
	}
}
// �ﰢ�� �Ǻ��Լ�
int triangle_judge(double array[])
{
	if (array[0] + array[1] > array[2])
		//�ﰢ���� ���� �� ��� 1 ��ȯ
		return 1;
	else
		//�ƴѰ�� 0 ��ȯ
		return 0;
}
double triangle_size(double arr[])
{
	double s, size;
	s = (arr[0] + arr[1] + arr[2]) / 2;
	size = s * (s - arr[0]) * (s - arr[1]) * (s - arr[2]);
	size = sqrt(size);
	return size;
}
int main()
{
	int tmp;
	double length[3];

	printf("*** Triangle ****\n");
	do
	{
	//goto���� ���� ���ƿ� ���� ����
	back:
		printf("Enter three side lenght: ");
		//�迭�� �Ǽ� �Է�
		for (int i = 0; i < 3; i++)
		{
			scanf("%lf", &length[i]);
		}
		//���� 0�� �ϳ� �̻� �Էµ� ��� break�� ���� ����
		if (length[0] == 0 || length[1] == 0 || length[2] == 0)
		{
			printf("Bye!!\n");
			break;
		}
			
		//�迭 ������ ���� �������� �Լ� ȣ��
		selection_sort2(length, 3);
		//tmp�� triangle_judge ��� ������
		tmp = triangle_judge(length);
		//0�� ��ȯ �Ǿ��� ��� ���� �޼��� ��� �� �ʱ� ������ ������ ����
		if (tmp == 0)
		{
			printf("Not a triangle!\n");
			goto back;
		}
		//triangle_size�Լ��� ȣ���� ����� �Ҽ� �ι�° �ڸ� ������ ���
		printf("Area = %.2lf\n", triangle_size(length));

		//���� ����
	} while (1);
}