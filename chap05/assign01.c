/* 파일명: assign17.c
* 내용: 점의 좌표(x,y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.04.29.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0501();

int main()
{
	assign0501();
	return 0;
}

void assign0501()
{
	int left, right, top, bottom = 0;
	int x, y = 0;

	printf("선택 영역의 좌상단점(left,top)?");
	scanf("%d %d", &left, &top);

	printf("선택 영역의 우하단점(right, bottom)?");
	scanf("%d %d", &right, &bottom);

	printf("점의 좌표(x,y)?");
	scanf("%d %d", &x, &y);

	if (x >= left && x <= right && y >= top && y <= bottom)
	{
		printf("점은 선택 영역 안에 있습니다.\n");
	}
	else
	{
		printf("점은 선택 영역 밖에 있습니다.\n");
	}
}