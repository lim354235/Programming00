/*
파일명: PA04
내용: 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 월소를 찾아서 인덱스와 값을 함께 출력하는
프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 25
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int assign();

int main()
{
	assign();
	return 0;
}

int assign()
{
	int i;
	int arr[SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	printf("배열: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}

	int maxindex = 0;
	int minindex = 0;
	int max = arr[0];
	int min = arr[0];

	for (i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxindex = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			minindex = i;
		}
	}

	printf("\n최댓값: %d, 인덱스: %d\n", max, maxindex);
	printf("최솟값: %d, 인덱스: %d\n", min, minindex);

	return 0;
}
