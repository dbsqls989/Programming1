#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0110();

void assign0110()
{
	 number = 0;

	printf("����? ");
	scanf("%i", &number);

	printf("8����: %i");
	printf("10����: %d");
	printf("16����: %x");

}

int main(void)
{
	assign0110;
	return 0;
}