//파일명:Assignment17.c
//내용: 7번째 비트만 1인값, 15번째 비트만 1인값, 23번째 비트만 1인값, 31번째 비트만 1인값을 구해서
//	16인수와 10진수로 출력하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-14
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0417();

int main()
{
	assign0417();
	return 0;
}

void assign0417()
{
	int bit7 = 0x80;
	int bit15 = 0x8000;
	int bit23 = 0x800000;
	int bit31 = 0x80000000;

	printf("7번 비트만 1인 값: %08x %d\n", bit7, bit7);
	printf("15번 비트만 1인 값: %08x %d\n", bit15, bit15);
	printf("23번 비트만 1인 값: %08x %d\n", bit23, bit23);
	printf("31번 비트만 1인 값: %08x %d\n", bit31, bit31);

	return 0;

}