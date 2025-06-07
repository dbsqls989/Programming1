// ���ϸ�: Assignment13.c
// ����: ���簢�� ������ ��Ÿ���� RECT ����ü�� �����ϱ�, ���簢���� ���ϴ����� ����������
//      ����, ���� ��ǥ�� RECT �Լ��� �̿��ؼ� ��Ÿ����.
// �ۼ���: ������
// ��¥: 2025-06-06
// ����: v1.0

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
    printf("���簢���� ���ϴ���(x, y)? ");
    scanf("%d %d", &r->bottom_left.x, &r->bottom_left.y);

    printf("���簢���� ������(x, y)? ");
    scanf("%d %d", &r->top_right.x, &r->top_right.y);
}
void print_rect(RECT r) 
{
    printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]\n",
        r.bottom_left.x, r.bottom_left.y, r.top_right.x, r.top_right.y);
}

int main() 
{
    RECT rect;
    input_rect(&rect);
    print_rect(rect);

    return 0;
}