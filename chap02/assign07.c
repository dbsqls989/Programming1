//���ϸ�:Assingnment07.c
//����:Ŀ�� ������� �ֹ����� �Է¹޾Ƽ� ����ϴ� ���α׷� �ۼ�. Ŀ�� ������� ����(S,T,G)�� �Է¹���.
//�ۼ���: ������
//��¥: 2025-03-27
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void coffee(void);

void coffee(void)
{
	char coffee;
	int size;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����?");
	scanf(" %c %d", &coffee, &size);
	printf("%c ������ %d���� �ֹ��մϴ�.", coffee, size);

}

int main(void)
{
	coffee();
	return 0;
}