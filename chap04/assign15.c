//파일명:Assignment15.c
//내용: 환전수수료율이 1.75%로 정해져 있다고 가정하고 구입하고자 하는 달러가 얼마인지
// 입력받아서 몇 원에 해당하는지 출력하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-14
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0415();

int main()
{
	assignment0415();
	return 0;
}

void assignment0415()
{
	double standard_rate, preference_rate, buyUSD = 0;
	double fee_rate = 0.0175;

	printf("원/달러 매매기준율?");
	scanf("%lf", &standard_rate);

	printf("환율우대율(0~100%)?");
	scanf("%lf", &preference_rate);

	double exchange_rate = standard_rate + (standard_rate * fee_rate * (1 - preference_rate / 100.0));
	printf("달러 살 때 환율은 %lf원 입니다.\n", exchange_rate);

	printf("구입할 달러(USD)?");
	scanf("%lf", &buyUSD);
	
	double totalKRW = exchange_rate * buyUSD;
	printf("USD %.2f 살 때 => KRW %.2f 원 입니다.",buyUSD, totalKRW);

	return 0;
}