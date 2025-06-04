//파일명:Assignnment06.c
//내용: 아파트의 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-05
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign06(void)
{
	double m = 0;

	printf("아파트의 면적(제곱미터)?");
	scanf("%lf", &m);

	printf("%.2lf제곱미터=%.2lf", m, 0.3025 * m);

}

int main()
{
	assign06();
	return 0;
}