#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0110();

void assign0110()
{
	 number = 0;

	printf("정수? ");
	scanf("%i", &number);

	printf("8진수: %i");
	printf("10진수: %d");
	printf("16진수: %x");

}

int main(void)
{
	assign0110;
	return 0;
}