/* ���ϸ�: assign17.c
* ����: ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.04.29.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0517();

void assignment0517()
{
	int time = 0;
	int fee = 0;

	printf("���� �ð�(��)? ");
	scanf("%d", &time);

	if (time >= 30)
	{
		fee = 2000;
		time -= 30;
	}

	if (time > 0)
	{
		fee += (time / 10) * 1000;
		time -= (time / 10) * 10;
	}
	if (time > 0)
	{
		fee += 1000;
	}
	printf("�������: %d��", fee);
}

int main(void)
{
	assignment0517();
	return 0;
}