/* 파일명: assign0712.c
* 내용: 기차표 예매 프로그램 작성하기. 좌석은 모두 10개, 예매할 좌석수를 입력받아 빈 자리를 할당.
*       O이면 예매가능, X는 예매 불가능.
* 작성자: 김윤빈
* 날짜: 2025.05.31.
* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign0712();
void reserveSeats(char seats[], int size, int SeatsNum);

int main(void)
{
    assign0712();
    return 0;
}

void assign0712()
{
    char seats[10] = { '0', '0', '0', '0', '0', '0', '0', '0', '0', '0' };
    int size = sizeof(seats) / sizeof(seats[0]);
    int SeatsNum;

    while (1)
    {
        printf("\n현재 좌석: [");
        for (int i = 0; i < size; i++)
        {
            printf("%c", seats[i]);
        }
        printf("]\n");

        printf("예매할 좌석수? ");
        scanf("%d", &SeatsNum);

        reserveSeats(seats, size, SeatsNum);
    }
}

void reserveSeats(char seats[], int size, int SeatsNum)
{
    int reserved = 0;

    printf("예매된 좌석: ");

    for (int i = 0; i < size; i++)
    {
        if (seats[i] == '0')
        {
            seats[i] = 'X';
            reserved++;
            printf("%d ", i + 1);

            if (reserved == SeatsNum)
                break;
        }
    }
    printf("번 좌석을 예매했습니다.\n");
}