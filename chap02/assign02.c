//���ϸ�:Assingnment02.c
//����:�л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷� �ۼ�. ��ȣ-����,����-�Ǽ��� �Է¹���.
//�ۼ���: ������
//��¥: 2025-03-27
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void student(void);
int main(void)
{
	student();
	return 0;
}

void student(void)
{
	int num;
	double grade;

	printf("��ȣ?");
	scanf("%d", &num);
	printf("����?");
	scanf("%6lf", &grade);

	printf("%d �� �л��� ������ %.6f �Դϴ�", num, grade);
	return;

}