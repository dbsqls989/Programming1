/* ���ϸ�: assign0706.c
* ����: ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.05.30.
* ����: v1.0
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
    
    printf("�迭: ");
    for (int i = 0; i < size; i++)
    {
        printf("%.1f ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\n����: ");
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
