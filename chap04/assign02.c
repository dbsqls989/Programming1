//파일명:Assignment02.c
//내용: 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램 작성.
//작성자: 김윤빈
//날짜: 2025-04-14
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int temperature(void)
{
	double h, s = 0;

	printf("화씨온도?");
	scanf("%lf", &h);

	s = (h - 32) * 5.0 / 9.0;

	printf("%.2f F = %.2f C", h, s);

	return 0;
}

int main(void)
{

	temperature();

	return 0;
}
