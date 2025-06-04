//파일명:Assignment01.c
//내용: 정사각형의 넓이와 둘레 구하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-03
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main();

int main()
{
	Main();
	return 0;
}

void Main()
{
	int area = 0;

	printf("한 변의 길이?");
	scanf("%d", &area);

	printf("정사각형의 넓이: %d\n", area * area);
	printf("정사각형의 둘레: %d", area * 4);

	return;
}