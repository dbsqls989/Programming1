/* ���ϸ�: assign05.c
* ����: ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������ �˻��ϴ� is_odd �Լ��� �ۼ��Ͻÿ�.
* �ۼ���: ������
* ��¥: 2025.05.19.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign03();
int is_even(int num);
int is_odd(int num);

int main(void)
{
	assign03();
	return 0;
}

int assign03()
{
	int num = 0;
	int even_count = 0;
	int odd_count = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
			break;

		if (is_even(num))
			even_count++;
		else if (is_odd(num))
			odd_count++;
	}

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d�� �Դϴ�.", even_count, odd_count);

	return 0;
}
int is_even(int num)
{
	return num % 2 == 0;
}
int is_odd(int num)
{
	return num % 2 != 0;
}