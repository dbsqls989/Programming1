//파일명:Assingnment07.c
//내용:커피 사이즈와 주문수량 입력받아서 출력하는 프로그램 작성. 커피 사이즈는 문자(S,T,G)로 입력받음.
//작성자: 김윤빈
//날짜: 2025-03-27
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void coffee(void);

void coffee(void)
{
	char coffee;
	int size;

	printf("커피 사이즈(S,T,G)와 주문 수량?");
	scanf(" %c %d", &coffee, &size);
	printf("%c 사이즈 %d잔을 주문합니다.", coffee, size);

}

int main(void)
{
	coffee();
	return 0;
}