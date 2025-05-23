/* 파일명: assign19.c
* 내용: 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수 작성하기.
*		0~9999 사이의 임의의 숫자 3개를 생성하고 스케일 100으로 그래프로 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.05.19.
* 버전: v1.0
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SCALE 100 

void assign19();
void graph(int r);

int main()
{
	srand(time(NULL)); 
	assign19();
	return 0;
}

void assign19()
{
	int random1 = rand() % 10000;
	graph(random1);

	int random2 = rand() % 10000;
	graph(random2);

	int random3 = rand() % 10000;
	graph(random3);
}

void graph(int r)
{
	int n = r / SCALE;
	printf("%d:", r);
	for (int i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");
}