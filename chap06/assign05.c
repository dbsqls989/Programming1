/* 파일명: assign05.c
* 내용: 인자로 전달받은 정수가 짝수인지 검사하는 is_even 함수와 홀수인지 검사하는 is_odd 함수를 작성하시오.
* 작성자: 김윤빈
* 날짜: 2025.05.19.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign03();
int is_even(int num);
int is_odd(int num);

int main(void)
{
	assign03();
	return 0;
}

int assign03()
{
	int num = 0;
	int even_count = 0;
	int odd_count = 0;

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
			break;

		if (is_even(num))
			even_count++;
		else if (is_odd(num))
			odd_count++;
	}

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개 입니다.", even_count, odd_count);

	return 0;
}
int is_even(int num)
{
	return num % 2 == 0;
}
int is_odd(int num)
{
	return num % 2 != 0;
}