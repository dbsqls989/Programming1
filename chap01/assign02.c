//파일명:assingnment01.c
//작성자: 김윤빈
//날짜: 2025-03-22
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	student();
	return 0;
}

void student(void)
{
	int num;
	float grade;

	printf("번호?");
	scanf("%d", &num);
	printf("학점?");
	scanf("%6lf", &grade);

	printf("%d번 학생의 학점은 %.6f입니다.",num,grade);
	
	return;
}

