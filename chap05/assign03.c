/* ���ϸ�: assign03.c
* ����: �Ž������� �ݾ��� �Է¹޾� ������,����,õ��,���,�ʿ�¥���� ���� � �ʿ����� ���ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.04.29
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0503();

int assign0503()
{
	int money = 0;
	int fiftyThousand, tenThousand, fiveThousand, oneThousand, oneHundred, ten = 0;

	printf("�Ž�����?");
	scanf("%d", &money);

	if (money >= 50000)
	{
		fiftyThousand = money / 50000;
		money %= 50000;
	}
	if (money >= 10000)
	{
		tenThousand = money / 10000;
		money %= 10000;
	}
	if (money >= 5000)
	{
		fiveThousand = money / 5000;
		money %= 5000;
	}
	if (money >= 1000)
	{
		oneThousand = money / 1000;
		money %= 1000;
	}
	if (money >= 100)
	{
		oneHundred = money / 100;
		money %= 100;
	}
	if (money >= 10)
	{
		ten = money / 10;
	}
	printf("50000��: %d��\n", fiftyThousand);
	printf("10000��: %d��\n", tenThousand);
	printf("5000��: %d��\n", fiveThousand);
	printf("1000��: %d��\n", oneThousand);
	printf("100��: %d��\n", oneHundred);
	printf("10��: %d��\n", ten);
}

int main()
{
	assign0503();
	return 0;
}