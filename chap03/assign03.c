//���ϸ�:Assignment03.c
//����: ������ ���̸� �Է� �޾� ��ġ������ ���ϴ� ���α׷� �ۼ�. ����-kg, ����-m�� �Է� ����.
//��¥: 2025-04-04
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double kg, m = 0;

void mass(void)
{
	printf("����(kg)?");
	scanf("%lf", &kg);
}

void meter(void)
{
	printf("����(m)?");
	scanf("%lf", &m);
}

void energy(void)
{
	double E = 9.8 * kg * m;
	printf("��ġ������: %lf J", E);
}
int main()
{
	mass();
	meter();
	energy();
	return 0;

}