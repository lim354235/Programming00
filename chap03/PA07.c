/*
파일명: PA05
내용: 실수값을 입력받아 그 값의 제곱과 세ㅔㅈ곱을 출력하는 프로그램을 작성하시오. 실수값을 입력받을 때는 12.34처럼 소수 표기
방법이나 1.23e2처럼지수 표기 방법을 둘 다 사용할 수 있게 하고 제곱과 세제곱을 출력할 떄는 지수 표기 바업으로 출력하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 03
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void tlfrn()
{
	double num;
	printf("실수? ");
	scanf("%lf", &num);
	printf("제곱: %e\n세제곱: %e", num * num, num * num * num);
	return;
}

int main()
{
	tlfrn();
	return 0;
}