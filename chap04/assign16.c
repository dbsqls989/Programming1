//���ϸ�:Assignment16.c
//����: 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ���� ����ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-14
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	color();
	return 0;
}
int color()
{
	int red = 0, green = 0, blue = 0;

	printf("red?");
	scanf("%d", &red);

	printf("green?");
	scanf("%d", &green);

	printf("blue?");
	scanf("%d", &blue);

	if (red > 255) red = 0;
	if (green > 255) green = 0;
	if (blue > 255)blue = 0;
	
	int RGB= (red) | (green) << 8 | (blue) << 16;

	printf("RGB Ʈ���÷�: %06X\n",RGB);
}