/*
파일명: PA08
내용: 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체를 정의하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 06. 07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pa08.h"

int assignement();
PRODUCT product = { 0 };

int main()
{
	assignement();
	return 0;
}

int assignement()
{
	printf("제품명? ");
	scanf("%s", product.name);
	printf("가격? ");
	scanf("%d", &product.price);
	printf("재고? ");
	scanf("%d", &product.stock);

	printProduct(product);
	

	return 0;
}

