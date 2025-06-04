//파일명:Assingnment01.c
//내용: printf문을 한번만 사용하여 다음과 같이 출력하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-03-22
//버전:v1.0

#include <stdio.h>

void Printf(void);

void Printf(void)
{
	printf("int main(void)\{\    return 0;\}");
	return;
}

int main()
{
	Printf();
	return 0;
}