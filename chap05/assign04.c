/* ���ϸ�: assign04.c
* ����: ������ �Է¹޾� �������� �˻��ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.04.29.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0504();

int assign0504()
{
	int year = 0;

	printf("����? ");
	scanf("%d", &year);

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		printf("%d���� �����Դϴ�", year);
	}
	else
	{
		printf("���");
	}
}

int main(void)
{
	assign0504();
	return 0;
}