#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1(void);
int f3(int a, int b);

int main()
{
	f1();
	int result = f3(2,3);

	return 1;
}


void f1(void)
{
	// 1. hello ���
	printf("�ȳ�! ���� �� �Ҿƹ�����\n");

	return;
}
/*
* �Լ���: int f3 (int a, int b)
* ���: 
*/
int f3(int a, int b)
{
	int result = 0;

	// �� ���� ���ؼ� ��ȯ
	result = a + b;

	return result;
}

