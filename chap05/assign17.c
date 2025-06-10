/* 파일명: assign17.c
* 내용: 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.04.29.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0517();

void assignment0517()
{
	int time = 0;
	int fee = 0;

	printf("주차 시간(분)? ");
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
	printf("주차요금: %d원", fee);
}

int main(void)
{
	assignment0517();
	return 0;
}