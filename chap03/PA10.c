/*
파일명: PA10
내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 03
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ghksbdf()
{
	float won;
	float dollar;
	printf("USD ");
	scanf("%f", &dollar);
	printf("원/달러 환율? ");
	scanf("%f", &won);

	printf("USD %.2f = KRM %.2f", dollar, won * dollar);
	return;
}

int main()
{
	ghksbdf();
	return 0;
}