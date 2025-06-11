/* ���ϸ�: assign19.c
* ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ� �ۼ��ϱ�.
*		0~9999 ������ ������ ���� 3���� �����ϰ� ������ 100���� �׷����� ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.05.19.
* ����: v1.0
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SCALE 100 

void assign19();
void graph(int r);

int main()
{
	srand(time(NULL)); 
	assign19();
	return 0;
}

void assign19()
{
	int random1 = rand() % 10000;
	graph(random1);

	int random2 = rand() % 10000;
	graph(random2);

	int random3 = rand() % 10000;
	graph(random3);
}

void graph(int r)
{
	int n = r / SCALE;
	printf("%d:", r);
	for (int i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");
}