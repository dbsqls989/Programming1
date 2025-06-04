// 파일명: Assignment08.c
// 내용: 커피숍에서 판매되는 정보를 나타내는 PRODUCT 구조체를 정의하기.
// 작성자: 김윤빈
// 날짜: 2025-06-06
// 버전: v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct 
{
    char name[20];
    int price;      
    int stock;      
} PRODUCT;

void input_product(PRODUCT* p) 
{
    printf("제품명? ");
    scanf("%s", p->name);
    printf("가격? ");
    scanf("%d", &p->price);
    printf("재고? ");
    scanf("%d", &p->stock);
}
void print_product(PRODUCT p) 
{
    printf("[%s %d원 재고: %d]\n", p.name, p.price, p.stock);
}

int main()
{
    PRODUCT item;
    
    // 제품 정보 입력
    input_product(&item);

    // 제품 정보 출력
    print_product(item);

    return 0;
}