//파일명:Assingnment05.c
//내용:몸무게를 입력받아서 출력하는 프로그램 작성. 몸무게는 실수, 소수점 이하 2자리만 출력하기.
//작성자: 김윤빈
//날짜: 2025-03-27
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void weight(void);

int main(void)
{
	weight();
	return 0;
}

void weight(void)
{
	double weight;

	printf("몸무게?");
	scanf("%2lf", &weight);

	printf("입력한 몸무게는 %.2fKG 입니다.", weight);

	return;
}