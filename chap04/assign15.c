//���ϸ�:Assignment15.c
//����: ȯ������������ 1.75%�� ������ �ִٰ� �����ϰ� �����ϰ��� �ϴ� �޷��� ������
// �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-14
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0415();

int main()
{
	assignment0415();
	return 0;
}

void assignment0415()
{
	double standard_rate, preference_rate, buyUSD = 0;
	double fee_rate = 0.0175;

	printf("��/�޷� �Ÿű�����?");
	scanf("%lf", &standard_rate);

	printf("ȯ�������(0~100%)?");
	scanf("%lf", &preference_rate);

	double exchange_rate = standard_rate + (standard_rate * fee_rate * (1 - preference_rate / 100.0));
	printf("�޷� �� �� ȯ���� %lf�� �Դϴ�.\n", exchange_rate);

	printf("������ �޷�(USD)?");
	scanf("%lf", &buyUSD);
	
	double totalKRW = exchange_rate * buyUSD;
	printf("USD %.2f �� �� => KRW %.2f �� �Դϴ�.",buyUSD, totalKRW);

	return 0;
}