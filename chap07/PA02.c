/*
���ϸ�: PA02
����: ù ��° ���� ���� ���� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 09
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

	// �Է�
	printf("ù��° ��? ");
	scanf("%lf", &start);
	printf("����? ");
	scanf("%lf", &diff);
	
	fill(arr, start, diff);
	printf("������: ");
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