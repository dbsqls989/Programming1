/* ���ϸ�: assign08.c
* ����: ��Ʈ ������ �����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.04.29.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0508();

int assign0508()
{
	unsigned int num1, num2 = 0;
	char operator;

	printf("��Ʈ �����?");
	scanf("%x %c %x", &num1, &operator,&num2);

	if (operator=='&')
	{
		printf("%x %c %%x = %x\n", num1, operator,num2, num1 & num2);
	}
	else if (operator=='|')
	{
		printf("%x %c %%x = %x\n", num1, operator,num2, num1 | num2);
	}
	else if (operator=='^')
	{
		printf("%x %c %%x = %x\n", num1, operator,num2, num1 ^ num2);
	}
	
}
int main(void)
{
	assign0508();
	return 0;
}