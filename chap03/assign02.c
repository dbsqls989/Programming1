//���ϸ�:Assignment02.c
//����: ���簢���� ���̿� �ѷ� ���ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-03
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment02(void)
{
	int w, h = 0;

	printf("������ ����?");
	scanf("%d", &w);
	printf("������ ����?");
	scanf("%d", &h);

	printf("���簢���� ����:%d\n", w * h);
	printf("���簢���� �ѷ�:%d\n", (w + h) * 2);
	return;
}
int main()
{
	assignment02();
	return 0;
}