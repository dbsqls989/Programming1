/* 파일명: assign0710.c
* 내용: 3x3 행렬의 합을 구하는 프로그램 작성하기. 
* 작성자: 김윤빈
* 날짜: 2025.05.31.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0710();
void addxy(int x[][3], int y[][3], int result[][3]);
void printxy(int num[][3]);

int main(void)
{
    assign0710();
    return 0;
}

void assign0710()
{
    int x[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[3][3];

    addxy(x, y, result);

    printf("x 행렬:\n");
    printxy(x);

    printf("\ny 행렬:\n");
    printxy(y);

    printf("\nx + y 행렬:\n");
    printxy(result);
}

void addxy(int x[][3], int y[][3], int result[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = x[i][j] + y[i][j];
        }
    }
}

void printxy(int num[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
}
