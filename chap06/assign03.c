/* 파일명: assign03.c
* 내용: 두 점 사이의 직선 거리를 구하는 distance 함수 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.05.19.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(start1, start2, end1, end2);
int assign03();

int main(void)
{
	assign03();
	return 0;
}

int assign03()
{
	int start1, start2 = 0;
	int end1, end2 = 0;

	printf("직선의 시작점 좌표?");
	scanf("%d %d", &start1, & start2);

	printf("직선의 끝점 좌표?");
	scanf("%d %d", &end1, & end2);

	double result = distance(start1, start2, end1, end2);

	printf("(%d,%d)~(%d,%d) 직선의 길이: %lf", start1, start2, end1, end2, result);

}
double distance(int start1,int start2,int end1,int end2)
{
	double Distance = 0;
	Distance= sqrt((end1 - start1) * (end1 - start1) + (end2 - start2) * (end2 - start2));

	return Distance;
}