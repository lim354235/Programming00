/*
���ϸ�: PA06
����: ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 30
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10
int array();

int main()
{
	array();
	return 0;
}

int array()
{
	double arr[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
	int i;

	printArray(arr, SIZE);

	reverseArray(arr);

	return 0;
}

int printArray(double arr[], int size)
{
	int i;
	printf("�迭: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%.1f ", arr[i]);
	}
	printf("\n");
}

int reverseArray(double arr[])
{
	int i;
	printf("����: ");
	for (i = 9; i >= 0; i--)
	{
		printf("%.1f ", arr[i]);
	}
	printf("\n");
}
