/*
���ϸ�: PA01
����: ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��Ͻÿ�. get_perimeter �Լ��� �̿��ؼ� �Է¹���
����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 20
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int get_perimeter(int x, int y)
{
	int perimeter;
	perimeter = x * 2 + y * 2;

	return perimeter;
}

int input()
{
	int x;
	int y;
	int result;

	printf("����? ");
	scanf("%d", &x);
	printf("����? ");
	scanf("%d", &y);

	get_perimeter(x, y);
	result = get_perimeter(x, y);

	printf("���簢���� �ѷ�: %d\n", result);

	return 0;
}

int main()
{
	input();

	return 0;
}