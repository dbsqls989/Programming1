/* ���ϸ�: assign05.c
* ����: �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.04.29.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0505();

int assign0505()
{
	float temp = 0;
	float converted = 0;
	char type = 0;

	printf("�µ�? ");
	scanf("%f %c", &temp, &type);

	if (type == 'C')
	{
		converted = temp * 9.0 / 5.0 + 32;
		printf("%.2f C => %.2f F", temp, converted);
	}
	else if (type == 'F')
	{
		converted = (temp - 32) * 5.0 / 9.0;
		printf("%.2f F => %.2f C", temp, converted);
	}
}
int main(void)
{
	assign0505();
	return 0;
}