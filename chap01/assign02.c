//���ϸ�:assingnment01.c
//�ۼ���: ������
//��¥: 2025-03-22
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	student();
	return 0;
}

void student(void)
{
	int num;
	float grade;

	printf("��ȣ?");
	scanf("%d", &num);
	printf("����?");
	scanf("%6lf", &grade);

	printf("%d�� �л��� ������ %.6f�Դϴ�.",num,grade);
	
	return;
}

