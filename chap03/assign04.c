//���ϸ�:Assignment04.c
//����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-04
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign04(void)
{
	double N, m = 0;

	printf("��(N)?");
	scanf("%lf", &N);
	printf("�̵��Ÿ�(m)?");
	scanf("%lf", &m);

	printf("���� ��: %.2lf J", N * m);

	return;

}

int main()
{
	assign04();
	return 0;
}