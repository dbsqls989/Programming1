/* ���ϸ�: assign0701.c
* ����: ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� �� ä���. 
		ù ��° ���� ���� ������ �Է� �޾� �迭�� ä��� ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.05.30.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0701();
void fillCommonDifference(int num[], int start, int gongcha);

int main(void)
{
	assign0701();

	return 0;
}

int assign0701()
{
	int num[10];
	int start, gongcha = 0;

	printf("ù ��° ��?");
	scanf("%d", &start);
	printf("����?");
	scanf("%d", &gongcha);

	fillCommonDifference(num, start, gongcha);

	printf("��������: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}

void fillCommonDifference(int num[], int start, int gongcha)
{
	num[0] = start;

	for (int i = 1; i < 10; i++)
	{
		num[i] = num[i - 1] + gongcha;
	}
}