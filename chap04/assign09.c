//���ϸ�:Assignment09.c
//����: �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷� �ۼ��ϱ�.
//�ۼ���: ������
//��¥: 2025-04-14
//����:v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0409();
int Time(int x);


int main()
{
	assignment0409();
	return 0;
}

void assignment0409()
{

	int second = 0;

	printf("����ð�(��)? ");
	scanf("%d", &second);

	Time(second);

}

int Time(int x)
{
	int h = x / 3600;
	int m = (x % 3600) / 60;
	int s = x % 60;

	printf("����ð��� ");
	h ? printf("%d�ð� ", h) : 0;
	m ? printf("%d�� ", m) : 0;
	s ? printf("%d�� ", s) : (h == 0 && m == 0 ? printf("0��") :0);
	printf("�Դϴ�.\n");

	return 0;

}