//���ϸ�:Assignment07.c
//����: �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷� �ۼ��ϱ�. �Ǽ����� �Է¹��� ���� 12.34,1.234e2 �� �� ����, 
//����,������ ��½� ���� ǥ�� ������� ���.
//�ۼ���: ������
//��¥: 2025-04-07
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign07(void)
{
	double a = 0;

	printf("�Ǽ�?");
	scanf("%lf", &a);

	printf("����: %e\n", a * a);
	printf("������: %e", a * a * a);
}

int main()
{
	assign07();
	return 0;
}