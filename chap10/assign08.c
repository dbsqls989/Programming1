// ���ϸ�: Assignment08.c
// ����: Ŀ�Ǽ󿡼� �ǸŵǴ� ������ ��Ÿ���� PRODUCT ����ü�� �����ϱ�.
// �ۼ���: ������
// ��¥: 2025-06-06
// ����: v1.0

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
    printf("��ǰ��? ");
    scanf("%s", p->name);
    printf("����? ");
    scanf("%d", &p->price);
    printf("���? ");
    scanf("%d", &p->stock);
}
void print_product(PRODUCT p) 
{
    printf("[%s %d�� ���: %d]\n", p.name, p.price, p.stock);
}

int main()
{
    PRODUCT item;
    
    // ��ǰ ���� �Է�
    input_product(&item);

    // ��ǰ ���� ���
    print_product(item);

    return 0;
}