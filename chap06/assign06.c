/* ���ϸ�: assign06.c
* ����: �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� choose_menu �Լ��� �ۼ��ϰ�,
		choose_menu�� ���ϰ��� ���� � �޴��� ���õǾ����� ������ ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.05.19.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void);
void assign06();

int main(void)
{
	assign06();
	return 0;
}

void assign06()
{
	int choose = 0;
	do
	{
		printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����] ����? ");
		scanf("%d", &choose);

		switch(choose)
		{
		case 1:
			printf("���� ���⸦ �����մϴ�.\n");
			break;
		case 2:
			printf("���� ������ �����մϴ�.\n");
			break;
		case 3:
			printf("�μ⸦ �����մϴ�.\n");
			break;
		} 
	} while (choose != 0);
}