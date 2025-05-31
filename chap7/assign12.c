/* ���ϸ�: assign0712.c
* ����: ����ǥ ���� ���α׷� �ۼ��ϱ�. �¼��� ��� 10��, ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ�.
*       O�̸� ���Ű���, X�� ���� �Ұ���.
* �ۼ���: ������
* ��¥: 2025.05.31.
* ����: v1.0
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
        printf("\n���� �¼�: [");
        for (int i = 0; i < size; i++)
        {
            printf("%c", seats[i]);
        }
        printf("]\n");

        printf("������ �¼���? ");
        scanf("%d", &SeatsNum);

        reserveSeats(seats, size, SeatsNum);
    }
}

void reserveSeats(char seats[], int size, int SeatsNum)
{
    int reserved = 0;

    printf("���ŵ� �¼�: ");

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
    printf("�� �¼��� �����߽��ϴ�.\n");
}