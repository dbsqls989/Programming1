//���ϸ�:Assignment01.c
//����: ���簢���� ���̿� �ѷ� ���ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-03
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();

int main()
{
	Main();
	return 0;
}

void Main()
{
	int area = 0;

	printf("�� ���� ����?");
	scanf("%d", &area);

	printf("���簢���� ����: %d\n", area * area);
	printf("���簢���� �ѷ�: %d", area * 4);

	return;
}