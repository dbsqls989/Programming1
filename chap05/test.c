#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1(void);
int f3(int a, int b);

int main()
{
	f1();
	int result = f3(2,3);

	return 1;
}


void f1(void)
{
	// 1. hello 출력
	printf("안녕! 나는 네 할아버지야\n");

	return;
}
/*
* 함수명: int f3 (int a, int b)
* 기능: 
*/
int f3(int a, int b)
{
	int result = 0;

	// 두 수를 더해서 반환
	result = a + b;

	return result;
}