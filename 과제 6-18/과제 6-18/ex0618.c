/* -----------------------------------------------------------------------------
* ���� : ex0618.c
* ��� :6�� �ǽ� ���� ���� #18- Caesar-Cipher Encryption
* ������ : [F003], 202020678 �赿��
* ���� ���� : 2020-04-11
* ���� ���� : 2020-04-11 (Pass)
*-------------------------------------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#pragma warning (disable:4996)

//Caesar_Cipher �Լ�
void Caesar_Cipher_Encryption(char n[],int key)
{
	int i;
	//�� �迭 ��ü�� ���� key��ŭ �ƽ�Ű ���� ������Ŵ
	//�ƽ�Ű ���� 0~127�̹Ƿ� ��ü ����� 127�� ������ ����
	for (i = 0; i < strlen(n); i++)
	{
		n[i] = (n[i] + key) % 127;
	}
	//��ȣȭ ��� ���
	printf("> %s", n);
}


int main() 
{
	char sentence[100];
	int key;

	printf("> Enter the key\n> ");
	scanf("%d", &key);

	printf("> Enter the text\n> ");
	//�Է� ���� ���
	getchar();
	//���鹮�ڵ� �Է¹ޱ� ���� ��Ų�� ���
	scanf("%[^\n]s", sentence);

	//��ȣȭ�� ���� �Լ� ȣ��
	Caesar_Cipher_Encryption(sentence, key);

}