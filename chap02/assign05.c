//���ϸ�:Assingnment05.c
//����:�����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷� �ۼ�. �����Դ� �Ǽ�, �Ҽ��� ���� 2�ڸ��� ����ϱ�.
//�ۼ���: ������
//��¥: 2025-03-27
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void weight(void);

int main(void)
{
	weight();
	return 0;
}

void weight(void)
{
	double weight;

	printf("������?");
	scanf("%2lf", &weight);

	printf("�Է��� �����Դ� %.2fKG �Դϴ�.", weight);

	return;
}