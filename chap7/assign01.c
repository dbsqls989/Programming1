/* 파일명: assign0701.c
* 내용: 크기가 10인 정수형 배열에 대하여 등차수열로 값 채우기. 
		첫 번째 항의 값과 공차를 입력 받아 배열을 채우고 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.05.30.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0701();
void fillCommonDifference(int num[], int start, int gongcha);

int main(void)
{
	assign0701();

	return 0;
}

int assign0701()
{
	int num[10];
	int start, gongcha = 0;

	printf("첫 번째 항?");
	scanf("%d", &start);
	printf("공차?");
	scanf("%d", &gongcha);

	fillCommonDifference(num, start, gongcha);

	printf("등차수열: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}

void fillCommonDifference(int num[], int start, int gongcha)
{
	num[0] = start;

	for (int i = 1; i < 10; i++)
	{
		num[i] = num[i - 1] + gongcha;
	}
}