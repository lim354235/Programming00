/*
���ϸ�: PA03
����: �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��Ͻÿ�. distance �Լ��� �̿��ؼ� �Է¹���
���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 20
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double pita(int x, int y, int x1, int y1)
{
	double distance;
	distance = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));

	return distance;
}

int assignment()
{
	int x;
	int y;
	int x1;
	int y1;
	double result;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x, &y);
	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &x1, &y1);

	result = pita(x, y, x1, y1);
	printf("(%d, %d)~(%d, %d) ������ ����: %f\n", x, y, x1, y1, result);

	return 0;
}

int main()
{
	assignment();

	return 0;
}