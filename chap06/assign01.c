/* ���ϸ�: assign01.c
* ����: ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter�Լ� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.05.19.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int width, int length);
int assign01();

int main(void)
{
	assign01();
	return 0;
}

int assign01()
{
	int width, length = 0;

	printf("����? ");
	scanf("%d", &width);

	printf("����?");
	scanf("%d", &length);

	int result = get_perimeter(width, length);

	printf("���簢���� �ѷ�:%d ", result);
}

int get_perimeter(int width, int length)
{
	int perimeter = 0;

	perimeter = 2 * (width + length);

	return perimeter;
}