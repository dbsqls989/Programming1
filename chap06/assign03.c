/* ���ϸ�: assign03.c
* ����: �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.05.19.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(start1, start2, end1, end2);
int assign03();

int main(void)
{
	assign03();
	return 0;
}

int assign03()
{
	int start1, start2 = 0;
	int end1, end2 = 0;

	printf("������ ������ ��ǥ?");
	scanf("%d %d", &start1, & start2);

	printf("������ ���� ��ǥ?");
	scanf("%d %d", &end1, & end2);

	double result = distance(start1, start2, end1, end2);

	printf("(%d,%d)~(%d,%d) ������ ����: %lf", start1, start2, end1, end2, result);

}
double distance(int start1,int start2,int end1,int end2)
{
	double Distance = 0;
	Distance= sqrt((end1 - start1) * (end1 - start1) + (end2 - start2) * (end2 - start2));

	return Distance;
}