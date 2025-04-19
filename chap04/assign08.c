//파일명:Assignment08.c
//내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-14
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int sphere(void)
{
	int r = 0;
	double v = 0.0;
	
	printf("반지름의 길이?");
	scanf("%d", &r);

	v = (4.0 / 3.0) * PI * pow(r, 3);

	printf("구의 부피: %f", v);

	return 0;

}

int main(void)
{
	sphere();
	return 0;
}