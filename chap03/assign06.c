//���ϸ�:Assignnment06.c
//����: ����Ʈ�� ������ �������ͷ� �Է¹޾� �� ������ ����ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-05
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign06(void)
{
	double m = 0;

	printf("����Ʈ�� ����(��������)?");
	scanf("%lf", &m);

	printf("%.2lf��������=%.2lf", m, 0.3025 * m);

}

int main()
{
	assign06();
	return 0;
}