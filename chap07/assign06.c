/* 파일명: assign0706.c
* 내용: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.05.30.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0706();
void reverseArray(double arr[], int size);

int main(void)
{
    assign0706();
    return 0;
}

void assign0706()
{
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("배열: ");
    for (int i = 0; i < size; i++)
    {
        printf("%.1f ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\n역순: ");
    for (int i = 0; i < size; i++)
    {
        printf("%.1f ", arr[i]);
    }

    return 0;
}

void reverseArray(double arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        double temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

}
