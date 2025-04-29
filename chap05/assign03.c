/* 파일명: assign03.c
* 내용: 거스름돈의 금액을 입력받아 오만원,만원,천원,백원,십원짜리가 각각 몇개 필요한지 구하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.04.29
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0503();

int assign0503()
{
	int money = 0;
	int fiftyThousand, tenThousand, fiveThousand, oneThousand, oneHundred, ten = 0;

	printf("거스름돈?");
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
	printf("50000원: %d개\n", fiftyThousand);
	printf("10000원: %d개\n", tenThousand);
	printf("5000원: %d개\n", fiveThousand);
	printf("1000원: %d개\n", oneThousand);
	printf("100원: %d개\n", oneHundred);
	printf("10원: %d개\n", ten);
}

int main()
{
	assign0503();
	return 0;
}