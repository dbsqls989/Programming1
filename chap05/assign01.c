/* ���ϸ�: assign17.c
* ����: ���� ��ǥ(x,y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.04.29.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0501();

int main()
{
	assign0501();
	return 0;
}

void assign0501()
{
	int left, right, top, bottom = 0;
	int x, y = 0;

	printf("���� ������ �»����(left,top)?");
	scanf("%d %d", &left, &top);

	printf("���� ������ ���ϴ���(right, bottom)?");
	scanf("%d %d", &right, &bottom);

	printf("���� ��ǥ(x,y)?");
	scanf("%d %d", &x, &y);

	if (x >= left && x <= right && y >= top && y <= bottom)
	{
		printf("���� ���� ���� �ȿ� �ֽ��ϴ�.\n");
	}
	else
	{
		printf("���� ���� ���� �ۿ� �ֽ��ϴ�.\n");
	}
}