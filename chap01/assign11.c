#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0111()
{
	double pi = 3.14159265;

	printf("pi = %.2lf\n",pi);
	printf("pi = %.4lf\n",pi);
	printf("pi = %lf\n",pi);
	printf("pi = %.8lf\n",pi);
	printf("pi = %e\n",pi);
}

int main(void)
{
	assign0111();
	return 0;

}