//���ϸ�:Assignment10.c
//����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-07
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign10(void)
{
	double USD, KRW = 0;

	printf("USD?");
	scanf("%lf", &USD);
	printf("��/�޷� ȯ��?");
	scanf("%lf", &KRW);

	printf("USD %.2f = KRW %.2f", USD, USD * KRW);
}
int main()
{
	assign10();
	return 0;
}