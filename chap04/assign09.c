//파일명:Assignment09.c
//내용: 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램 작성하기.
//작성자: 김윤빈
//날짜: 2025-04-14
//버전:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0409();
int Time(int x);


int main()
{
	assignment0409();
	return 0;
}

void assignment0409()
{

	int second = 0;

	printf("재생시간(초)? ");
	scanf("%d", &second);

	Time(second);

}

int Time(int x)
{
	int h = x / 3600;
	int m = (x % 3600) / 60;
	int s = x % 60;

	printf("재생시간은 ");
	h ? printf("%d시간 ", h) : 0;
	m ? printf("%d분 ", m) : 0;
	s ? printf("%d초 ", s) : (h == 0 && m == 0 ? printf("0초") :0);
	printf("입니다.\n");

	return 0;

}