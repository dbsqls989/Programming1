/* 파일명: assign18.c
* 내용: 인자로 전달된 정수의 약수를 구해서 divisors 함수를 작성하고, 
        0~999 사이의 임의의 정수 3개를 형성, divisors 함수를 이용해 각각의 약수를 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.05.19.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int n)
{
    int count = 0;

    if (n == 0) {
        printf("0의 약수: 없음 => 총 0개\n");
        return;
    }

    printf("%d의 약수:", n);
    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0) 
        {
            printf(" %d", i);
            count++;
        }
    }
    printf(" => 총 %d개\n", count);
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