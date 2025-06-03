/*
���ϸ�: PA09
����: �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�. �ܹ��Ŵ� 4000�� �ݶ�� 1500�� ����Ƣ���� 2000���̰�
�� ������ ��Ʈ�� �ֹ��ϸ� 6500���̶�� ����  �ܹ��� �ݶ� ����Ƣ���� ������ �Է¹޾Ƽ� �ִ��� ��Ʈ�� �����ϰ�
�������� ��ǰ���� ����ϵ��� �Ѵ�. ���� ��� �ܹ��� 2, �ݶ� 1, ����Ƣ�� 3�� �ֹ��ϸ� ����� ��Ʈ 1, �ܹ��� 1,
����Ƣ�� 2�� �ؾ� �Ѵ�. ����� ����϶�
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 21
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int set(int* a, int* b, int* c)
{
	int set_count = *a;
	if (*b < set_count) set_count = *b;
	if (*c < set_count) set_count = *c;

	*a -= set_count;
	*b -= set_count;
	*c -= set_count;

	return set_count;
}

int assignment()
{
	int a, b, c;
	int setCount = 0;
	int burger = 4000;
	int cola = 1500;
	int fries = 2000;

	printf("�ܹ��� ����? ");
	scanf("%d", &a);
	printf("����Ƣ�� ����? ");
	scanf("%d", &c);
	printf("�ݶ� ����? ");
	scanf("%d", &b);

	setCount = set(&a, &b, &c);  // �����ͷ� ���� <-- �ſ��߿�

	printf("\n");
	printf("��ǰ��		�ܰ�	����	�ݾ�\n");
	if (setCount > 0)
	{
		printf("��Ʈ		6500	 %d	%d\n", setCount, setCount * 6500);
	}
	if (a > 0)
	{
		printf("�ܹ���		4000	 %d	%d\n", a, a * burger);
	}
	if (c > 0)
	{
		printf("����Ƣ��	2000	 %d	%d\n", c, c * fries);
	}
	if (b > 0)
	{
		printf("�ݶ�		1500	 %d	%d\n", b, b * cola);
	}
	int total = (setCount * 6500) + (a * burger) + (b * cola) + (c * fries);
	printf("--------------------------------------\n");
	printf("�հ�				%d\n", total);

	return 0;
}

int main()
{
	assignment();

	return 0;
}
