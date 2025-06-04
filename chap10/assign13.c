// 파일명: Assignment13.c
// 내용: 직사각형 정보를 나타내는 RECT 구조체를 정의하기, 직사각형은 좌하단점과 우상단점으로
//      구성, 점의 좌표는 RECT 함수를 이용해서 나타내기.
// 작성자: 김윤빈
// 날짜: 2025-06-06
// 버전: v1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct {
    int x;
    int y;
} POINT;

typedef struct {
    POINT bottom_left;
    POINT top_right;
} RECT;

void input_rect(RECT* r) {
    printf("직사각형의 좌하단점(x, y)? ");
    scanf("%d %d", &r->bottom_left.x, &r->bottom_left.y);

    printf("직사각형의 우상단점(x, y)? ");
    scanf("%d %d", &r->top_right.x, &r->top_right.y);
}
void print_rect(RECT r) 
{
    printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n",
        r.bottom_left.x, r.bottom_left.y, r.top_right.x, r.top_right.y);
}

int main() 
{
    RECT rect;
    input_rect(&rect);
    print_rect(rect);

    return 0;
}