/*
���ϸ�: PA01
����: ���� ��ǥ(x, y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
��ũ�� ���� ���ÿ����� ���簢�� ����� �������� ���簢���� �»������ ���ϴ����� ���ؼ� �����ȴ�
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int whkvy(int x, int y, int left, int top, int right, int bottom)
{
	if (x >= left && x <= right && y >= top && y <= bottom)
		return 1;
	else
		return 0;
}

int assignment01()
{
	int x, y;
	int left, top, right, bottom;

	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (whkvy(x, y, left, top, right, bottom))
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	else
		printf("���簢�� ����� ���� ���� ���� ���� �ƴմϴ�..\n");

	return 0;
}

int main()
{
	assignment01();
	return 0;
}