/*
���ϸ�: PA03
����: �Ž������� �ݾ��� �Է¹޾� ������, ����, ��õ��, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ� ����Ͻÿ�.
�ʿ� �̸� ������ �����Ѵ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ehs(int money)
{
	int fiftythousand, tenthousand, fivethousand, thousand, hundred, ten;

	fiftythousand = money / 50000;


	if (money > 50000)
	{
		printf("50000�� %d��\n", fiftythousand);
	}

	money = money % 50000;

	tenthousand = money / 10000;


	if (money > 10000)
	{
		printf("10000�� %d��\n", tenthousand);
	}

	money = money % 10000;
	fivethousand = money / 5000;


	if (money > 5000)
	{
		printf("5000�� %d��\n", fivethousand);
	}

	money = money % 5000;
	thousand = money / 1000;


	if (money > 1000)
	{
		printf("1000�� %d��\n", thousand);
	}

	money = money % 1000;
	hundred = money / 100;

	if (money > 100)
	{
		printf("100�� %d��\n", hundred);
	}

	money = money % 100;
	ten = money / 10;


	if (money > 10)
	{
		printf("10�� %d��\n", ten);
	}

	money = money % 10;
	return 0;
}

int assignment()
{
	int money;

	printf("�Ž�����? ");
	scanf("%d", &money);
	money -= money % 10;
	printf("�Ž����� (10���̸� ����): %d\n", money);
	ehs(money);

	return 0;
}

int main()
{
	assignment();

	return 0;
}