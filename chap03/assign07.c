//파일명:Assignment07.c
//내용: 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램 작성하기. 실수값을 입력받을 때는 12.34,1.234e2 둘 다 가능, 
//제곱,세제곱 출력시 지수 표기 방법으로 출력.
//작성자: 김윤빈
//날짜: 2025-04-07
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign07(void)
{
	double a = 0;

	printf("실수?");
	scanf("%lf", &a);

	printf("제곱: %e\n", a * a);
	printf("세제곱: %e", a * a * a);
}

int main()
{
	assign07();
	return 0;
}