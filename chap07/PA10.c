/*
파일명: PA10
내용: 3x3 행렬의 합을 구하는 프로그램을 학성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 30
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

	printf("x 행렬:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	printf("y 행렬:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}


	printf("x+y 행렬:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
}