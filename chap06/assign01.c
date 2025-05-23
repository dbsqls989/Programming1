/* 파일명: assign01.c
* 내용: 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter함수 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.05.19.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int width, int length);
int assign01();

int main(void)
{
	assign01();
	return 0;
}

int assign01()
{
	int width, length = 0;

	printf("가로? ");
	scanf("%d", &width);

	printf("세로?");
	scanf("%d", &length);

	int result = get_perimeter(width, length);

	printf("직사각형의 둘레:%d ", result);
}

int get_perimeter(int width, int length)
{
	int perimeter = 0;

	perimeter = 2 * (width + length);

	return perimeter;
}