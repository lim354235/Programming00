/*
파일명: PA17
내용: 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다. 7번째 비트만 1인 값,
15번째 비트만 1인 값, 23번째 비트만 1인 값, 31번째 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Bit()
{
	unsigned int bit = 0;
	unsigned int dnlcl = 0;

	dnlcl = 1 << 7;
	bit = dnlcl;
	printf("7번째 비트: %08X, %d\n", bit, bit);
	dnlcl = 1 << 15;
	bit = dnlcl;
	printf("15번째 비트: %08X, %d\n", bit, bit);
	dnlcl = 1 << 23;
	bit = dnlcl;
	printf("23번째 비트: %08X, %d\n", bit, bit);
	dnlcl = 1 << 31;
	bit = dnlcl;
	printf("31번째 비트: %08X, %d\n", bit, bit);
	return 0;
}


int main()
{
	Bit();
	return 0;
}