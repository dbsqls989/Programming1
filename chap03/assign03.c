//파일명:Assignment03.c
//내용: 질량과 높이를 입력 받아 위치에너지 구하는 프로그램 작성. 질량-kg, 높이-m로 입력 받음.
//날짜: 2025-04-04
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double kg, m = 0;

void mass(void)
{
	printf("질량(kg)?");
	scanf("%lf", &kg);
}

void meter(void)
{
	printf("높이(m)?");
	scanf("%lf", &m);
}

void energy(void)
{
	double E = 9.8 * kg * m;
	printf("위치에너지: %lf J", E);
}
int main()
{
	mass();
	meter();
	energy();
	return 0;

}