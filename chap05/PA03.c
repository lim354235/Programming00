/*
파일명: PA03
내용: 거스름돈의 금액을 입력받아 오만원, 만원, 오천원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력하시오.
십원 미만 단위는 절사한다.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ehs(int money)
{
	int fiftythousand, tenthousand, fivethousand, thousand, hundred, ten;

	fiftythousand = money / 50000;


	if (money > 50000)
	{
		printf("50000원 %d장\n", fiftythousand);
	}

	money = money % 50000;

	tenthousand = money / 10000;


	if (money > 10000)
	{
		printf("10000원 %d장\n", tenthousand);
	}

	money = money % 10000;
	fivethousand = money / 5000;


	if (money > 5000)
	{
		printf("5000원 %d장\n", fivethousand);
	}

	money = money % 5000;
	thousand = money / 1000;


	if (money > 1000)
	{
		printf("1000원 %d장\n", thousand);
	}

	money = money % 1000;
	hundred = money / 100;

	if (money > 100)
	{
		printf("100원 %d장\n", hundred);
	}

	money = money % 100;
	ten = money / 10;


	if (money > 10)
	{
		printf("10원 %d장\n", ten);
	}

	money = money % 10;
	return 0;
}

int assignment()
{
	int money;

	printf("거스름돈? ");
	scanf("%d", &money);
	money -= money % 10;
	printf("거스름돈 (10원미만 절사): %d\n", money);
	ehs(money);

	return 0;
}

int main()
{
	assignment();

	return 0;
}