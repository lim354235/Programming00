/*
���ϸ�: PA10
����: 3x3 ����� ���� ���ϴ� ���α׷��� �м��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 30
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define size 3

int printArray();

int main()
{
	printArray();
	return 0;
}

int printArray()
{
	int arr1[size][size] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
	int arr2[size][size] = { {9, 8, 7}, {6, 5, 4},{3, 2, 1} };

	printf("x ���:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	printf("y ���:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}


	printf("x+y ���:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
}