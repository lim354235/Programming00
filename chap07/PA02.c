/*
파일명: PA02
내용: 첫 번째 항의 값과 공비를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10

double fill(double arr[], double start, double diff);
int printArr(double arr[]);
int assignment();

int main()
{
	assignment();
	return 0;
}

int assignment()
{
	double start = 0;
	double diff = 0;
	double arr[size];

	// 입력
	printf("첫번째 항? ");
	scanf("%lf", &start);
	printf("공비? ");
	scanf("%lf", &diff);
	
	fill(arr, start, diff);
	printf("등비수열: ");
	printArr(arr);

	return 0;
}

double fill(double arr[], double start, double diff)
{
	arr[0] = start;
	for (int i = 1; i < size; i++)
	{
		arr[i] = arr[i - 1] * diff;
	}
	return 0;
}

int printArr(double arr[])
{
	for (int i = 0; i < size; i++)
	{
		printf("%.0lf ", arr[i]);
	}
	return 0;
}