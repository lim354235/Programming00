/*
���ϸ�: PA05
����: ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������ �˻��ϴ� is_odd �Լ��� �ۼ��Ͻÿ�. �� �Լ��� �̿��ؼ� 0��
�Էµ� ������ �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 20
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int x)
{
	if (x % 2 == 0)
		return 1;
	else
		return 0;
}

int is_odd(int x)
{
	if (x % 2 != 0)
		return 1;
	else
		return 0;
}

int assignment()
{
	int x;
	int even = 0;
	int odd = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	while (1)
	{
		scanf("%d", &x);

		if (x == 0)
			break;
		if (is_even(x))
			even++;
		else if (is_odd(x))
			odd++;
	}

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", even, odd);

	return 0;
}

int main()
{
	assignment();

	return 0;
}