/*
파일명: PA02
내용: 화씨 온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환해서 출력하는 프로그램을 작성하시오. 화씨 온도를 섭씨 온도로 변환하는 공식은
다음과 같다.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double tjqTl(double ghkTl)
{
	double C = 0.0;

	C = (ghkTl - 32) * 5.0 / 9.0;

	return C;
}

int assignment0402()
{
	double ghkTl = 0.0;

	printf("화씨 온도(F)? ");
	scanf("%lf", &ghkTl);

	double q = tjqTl(ghkTl);
	printf("%.2lf F = %.2lf C", ghkTl, q);

	return 0;

}

int main()
{
	assignment0402();
	return 0;
}