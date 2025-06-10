//파일명:Assingnment02.c
//내용:학생의 번호와 학점을 입력받아 출력하는 프로그램 작성. 번호-정수,학점-실수로 입력받음.
//작성자: 김윤빈
//날짜: 2025-03-27
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void student(void);
int main(void)
{
	student();
	return 0;
}

void student(void)
{
	int num;
	double grade;

	printf("번호?");
	scanf("%d", &num);
	printf("학점?");
	scanf("%6lf", &grade);

	printf("%d 번 학생의 학점은 %.6f 입니다", num, grade);
	return;

}