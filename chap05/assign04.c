/* 파일명: assign04.c
* 내용: 연도를 입력받아 윤년인지 검사하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.04.29.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0504();

int assign0504()
{
	int year = 0;

	printf("연도? ");
	scanf("%d", &year);

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		printf("%d년은 윤년입니다", year);
	}
	else
	{
		printf("평년");
	}
}

int main(void)
{
	assign0504();
	return 0;
}