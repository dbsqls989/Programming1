#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0108();

void assign0108()
{
	double plus, minus = 0;

	printf("½Ç¼ö 2°³?");
	scanf("%lf %lf", &plus, &minus);

	printf("%lf + %lf = %lf\n", plus, minus, plus + minus);
	printf("%lf - %lf = %lf", plus, minus, plus - minus);
}

int main(void)
{
	assign0108();
	return 0;
}