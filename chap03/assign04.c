//파일명:Assignment04.c
//내용: 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-04
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign04(void)
{
	double N, m = 0;

	printf("힘(N)?");
	scanf("%lf", &N);
	printf("이동거리(m)?");
	scanf("%lf", &m);

	printf("일의 양: %.2lf J", N * m);

	return;

}

int main()
{
	assign04();
	return 0;
}