/* ���ϸ�: assign18.c
* ����: ���ڷ� ���޵� ������ ����� ���ؼ� divisors �Լ��� �ۼ��ϰ�, 
        0~999 ������ ������ ���� 3���� ����, divisors �Լ��� �̿��� ������ ����� ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.05.19.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int n)
{
    int count = 0;

    if (n == 0) {
        printf("0�� ���: ���� => �� 0��\n");
        return;
    }

    printf("%d�� ���:", n);
    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0) 
        {
            printf(" %d", i);
            count++;
        }
    }
    printf(" => �� %d��\n", count);
}

int main() {
    int numbers[3];

    srand(time(NULL));

    for (int i = 0; i < 3; i++) 
    {
        numbers[i] = rand() % 1000;
    }

    for (int i = 0; i < 3; i++)
    {
        divisors(numbers[i]);
    }

    return 0;
}