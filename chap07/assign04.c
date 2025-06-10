/* 파일명: assign0704.c
* 내용: 특정 값으로 초기화된 정수형 배열에 대하여 원소 중 최댓값을 가진 원소와 
		최솟값을 가진 원소를 찾아서 인덱스와 값을 출력하는 프로그램 작성하기.
* 작성자: 김윤빈
* 날짜: 2025.05.30.
* 버전: v1.0
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

	printf("배열: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("최댓값: 인덱스=%d, 값=%d\n", MaxIndex, MaxValue);
	printf("최솟값: 인덱스=%d, 값=%d", MinIndex, MinValue);
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