//���ϸ�:Assignment02.c
//����: ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷� �ۼ�.
//�ۼ���: ������
//��¥: 2025-04-14
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int temperature(void)
{
	double h, s = 0;

	printf("ȭ���µ�?");
	scanf("%lf", &h);

	s = (h - 32) * 5.0 / 9.0;

	printf("%.2f F = %.2f C", h, s);

	return 0;
}

int main(void)
{

	temperature();

	return 0;
}
