//���ϸ�:assingnment10.c
//����:������ 8����,10����,16���� �� �ϳ��� �Է¹޾� ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷� �ۼ�.
//�ۼ���: ������
//��¥: 2025-03-27
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void processInput(void)
{
    int num = 0;
    printf("8������ �Է��Ϸ��� '012', 16������ �Է��Ϸ��� '0x12'ó�� �Է��ϼ���.\n");
    printf("����? ");
    scanf("%i", &num);

    printf("8����: %#o\n", num);
    printf("10����: %d\n", num);
    printf("16����: %#x\n", num);
}

int main(void)
{
    processInput();
    return 0;
}