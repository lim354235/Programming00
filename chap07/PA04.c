/*
���ϸ�: PA04
����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ�
���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 25
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
	printf("�迭: ");
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

	printf("\n�ִ�: %d, �ε���: %d\n", max, maxindex);
	printf("�ּڰ�: %d, �ε���: %d\n", min, minindex);

	return 0;
}
