/*
파일명: PA05
내용: 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오.
"27C" 또는 "27F"처럼 온도를 입력받을 때 섭씨인지 화씨인지 구분할 수 있는 문자를 함께 입력받는다.
함께 입력된 문자가 'C'면 섭씨 온도이므로 화씨 온도를 구해ㅐ서 출력하고, 입력된 문자가 'F'면
화씨 온도이므로 섭씨 온도를 구해 출력한다.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ghk(float celcius)
{
	return (9 * celcius) / 5 + 32;
}

double tjq(float fahrenheit)
{
	return (fahrenheit - 32) * 5 / 9;
}

int assignment05()
{
	char c;
	float temperature;
	printf("온도? ");
	scanf("%f %c", &temperature, &c);

	if (c == 'C')
	{
		printf("%.2f C = %.2f F\n", temperature, ghk(temperature));
	}
	else if (c == 'F')
	{
		printf(" %.2f F = %.2f C \n", temperature, tjq(temperature));
	}
	else
	{
		printf("잘못된 입력입니다.\n");
	}

	return 0;
}

int main()
{
	assignment05();
	return 0;
}
