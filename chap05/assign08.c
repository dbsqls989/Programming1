/* 파일명: assign08.c
* 내용: 비트 연산을 수행하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.04.29.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0508();

int assign0508()
{
	unsigned int num1, num2 = 0;
	char operator;

	printf("비트 연산식?");
	scanf("%x %c %x", &num1, &operator,&num2);

	if (operator=='&')
	{
		printf("%x %c %%x = %x\n", num1, operator,num2, num1 & num2);
	}
	else if (operator=='|')
	{
		printf("%x %c %%x = %x\n", num1, operator,num2, num1 | num2);
	}
	else if (operator=='^')
	{
		printf("%x %c %%x = %x\n", num1, operator,num2, num1 ^ num2);
	}
	
}
int main(void)
{
	assign0508();
	return 0;
}