//파일명:Assingnment11.c
//내용:원주율 파이 값을 여러가지 방법으로 출력하는 프로그램 작성.
//작성자: 김윤빈
//날짜: 2025-03-27
//버전:v1.0

#include<stdio.h>

void Pi(void)
{
	double pi=3.141592;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);

}

int main(void)
{
	Pi();
	return 0;
}