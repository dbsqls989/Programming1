//���ϸ�:Assignment08.c
//����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-14
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int sphere(void)
{
	int r = 0;
	double v = 0.0;
	
	printf("�������� ����?");
	scanf("%d", &r);

	v = (4.0 / 3.0) * PI * pow(r, 3);

	printf("���� ����: %f", v);

	return 0;

}

int main(void)
{
	sphere();
	return 0;
}