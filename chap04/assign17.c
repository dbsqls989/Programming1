//���ϸ�:Assignment17.c
//����: 7��° ��Ʈ�� 1�ΰ�, 15��° ��Ʈ�� 1�ΰ�, 23��° ��Ʈ�� 1�ΰ�, 31��° ��Ʈ�� 1�ΰ��� ���ؼ�
//	16�μ��� 10������ ����ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-14
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0417();

int main()
{
	assign0417();
	return 0;
}

void assign0417()
{
	int bit7 = 0x80;
	int bit15 = 0x8000;
	int bit23 = 0x800000;
	int bit31 = 0x80000000;

	printf("7�� ��Ʈ�� 1�� ��: %08x %d\n", bit7, bit7);
	printf("15�� ��Ʈ�� 1�� ��: %08x %d\n", bit15, bit15);
	printf("23�� ��Ʈ�� 1�� ��: %08x %d\n", bit23, bit23);
	printf("31�� ��Ʈ�� 1�� ��: %08x %d\n", bit31, bit31);

	return 0;

}