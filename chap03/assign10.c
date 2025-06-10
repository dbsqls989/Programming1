//파일명:Assignment10.c
//내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-07
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign10(void)
{
	double USD, KRW = 0;

	printf("USD?");
	scanf("%lf", &USD);
	printf("원/달러 환율?");
	scanf("%lf", &KRW);

	printf("USD %.2f = KRW %.2f", USD, USD * KRW);
}
int main()
{
	assign10();
	return 0;
}