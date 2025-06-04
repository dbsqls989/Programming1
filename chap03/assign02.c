//파일명:Assignment02.c
//내용: 직사각형의 넓이와 둘레 구하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-03
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment02(void)
{
	int w, h = 0;

	printf("가로의 길이?");
	scanf("%d", &w);
	printf("세로의 길이?");
	scanf("%d", &h);

	printf("직사각형의 넓이:%d\n", w * h);
	printf("직사각형의 둘레:%d\n", (w + h) * 2);
	return;
}
int main()
{
	assignment02();
	return 0;
}