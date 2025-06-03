/*
파일명: PA06
내용: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 30
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
	printf("배열: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%.1f ", arr[i]);
	}
	printf("\n");
}

int reverseArray(double arr[])
{
	int i;
	printf("역순: ");
	for (i = 9; i >= 0; i--)
	{
		printf("%.1f ", arr[i]);
	}
	printf("\n");
}
