//���ϸ�:Assingnment11.c
//����:������ ���� ���� �������� ������� ����ϴ� ���α׷� �ۼ�.
//�ۼ���: ������
//��¥: 2025-03-27
//����:v1.0

#include<stdio.h>

void Pi(void)
{
	double pi=3.141592;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);

}

int main(void)
{
	Pi();
	return 0;
}