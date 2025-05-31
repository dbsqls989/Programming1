/* ���ϸ�: assign0704.c
* ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� ���� �� �ִ��� ���� ���ҿ� 
		�ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� ����ϴ� ���α׷� �ۼ��ϱ�.
* �ۼ���: ������
* ��¥: 2025.05.30.
* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign0704();
int FindMax(int arr[], int size);
int FindMin(int arr[], int size);

int main(void)
{
	assign0704();
	return 0;
}
int assign0704()
{
	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int MaxIndex, MaxValue, MinIndex, MinValue;

	MaxIndex = FindMax(arr, size);
	MinIndex = FindMin(arr, size);

	MaxValue = arr[MaxIndex];
	MinValue = arr[MinIndex];

	printf("�迭: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("�ִ�: �ε���=%d, ��=%d\n", MaxIndex, MaxValue);
	printf("�ּڰ�: �ε���=%d, ��=%d", MinIndex, MinValue);
}
int FindMax(int arr[], int size)
{
	int maxIndex = 0;
	for (int i = 1; i < size; i++) 
	{
		if (arr[i] > arr[maxIndex]) 
		{
			maxIndex = i;
		}
	}
	return maxIndex;
}
int FindMin(int arr[], int size)
{
	int minIndex = 0;
	for (int i = 1; i < size; i++) 
	{
		if (arr[i] < arr[minIndex]) 
		{
			minIndex = i;
		}
	}
	return minIndex;
}