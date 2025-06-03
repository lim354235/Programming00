/*
파일명: PA09
내용: 햄버거 가게의 계산서 프로그램을 작성하시오. 햄버거는 4000원 콜라는 1500원 감자튀김은 2000원이고
세 가지를 세트로 주문하면 6500원이라고 하자  햄버거 콜라 감자튀김의 수량을 입력받아서 최대한 세트로 구성하고
나머지는 단품으로 계산하도록 한다. 예를 들어 햄버거 2, 콜라 1, 감자튀김 3을 주문하면 계산은 세트 1, 햄버거 1,
감자튀김 2로 해야 한다. 제어문을 사용하라
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 21
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

	printf("햄버거 개수? ");
	scanf("%d", &a);
	printf("감자튀김 개수? ");
	scanf("%d", &c);
	printf("콜라 개수? ");
	scanf("%d", &b);

	setCount = set(&a, &b, &c);  // 포인터로 전달 <-- 매우중요

	printf("\n");
	printf("상품명		단가	수량	금액\n");
	if (setCount > 0)
	{
		printf("세트		6500	 %d	%d\n", setCount, setCount * 6500);
	}
	if (a > 0)
	{
		printf("햄버거		4000	 %d	%d\n", a, a * burger);
	}
	if (c > 0)
	{
		printf("감자튀김	2000	 %d	%d\n", c, c * fries);
	}
	if (b > 0)
	{
		printf("콜라		1500	 %d	%d\n", b, b * cola);
	}
	int total = (setCount * 6500) + (a * burger) + (b * cola) + (c * fries);
	printf("--------------------------------------\n");
	printf("합계				%d\n", total);

	return 0;
}

int main()
{
	assignment();

	return 0;
}
