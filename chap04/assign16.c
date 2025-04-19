//파일명:Assignment16.c
//내용: 0~255사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-14
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	color();
	return 0;
}
int color()
{
	int red = 0, green = 0, blue = 0;

	printf("red?");
	scanf("%d", &red);

	printf("green?");
	scanf("%d", &green);

	printf("blue?");
	scanf("%d", &blue);

	if (red > 255) red = 0;
	if (green > 255) green = 0;
	if (blue > 255)blue = 0;
	
	int RGB= (red) | (green) << 8 | (blue) << 16;

	printf("RGB 트루컬러: %06X\n",RGB);
}