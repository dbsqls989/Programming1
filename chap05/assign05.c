/* 파일명: assign05.c
* 내용: 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.04.29.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0505();

int assign0505()
{
	float temp = 0;
	float converted = 0;
	char type = 0;

	printf("온도? ");
	scanf("%f %c", &temp, &type);

	if (type == 'C')
	{
		converted = temp * 9.0 / 5.0 + 32;
		printf("%.2f C => %.2f F", temp, converted);
	}
	else if (type == 'F')
	{
		converted = (temp - 32) * 5.0 / 9.0;
		printf("%.2f F => %.2f C", temp, converted);
	}
}
int main(void)
{
	assign0505();
	return 0;
}