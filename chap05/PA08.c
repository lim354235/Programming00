/*
파일명: PA08
내용: 비트 연산을 수행하는 계산기를 프로그램하시오. &는 비트 AND, |는 비트 OR, ^는 비트 XOR 연산을 처리한다.
"0xAB & 0xCC"처럼 연산식을 입력해서 연산 결과를 구한다. 비트 연산이므로 연산식을 입력받을 때 10진수
8진수, 16진수를 사용할 수 있게 하고, 연산의 결과는 16진수로 출력한다.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bit()
{
	char c;
	unsigned int a, b;

	printf("비트 연산식? ");
	scanf("%i %c %i", &a, &c, &b);

	switch (c)
	{
	case '&':
		printf("%X & %X = %X\n", a, b, a & b);
		break;

	case '|':
		printf("%X | %X = %X\n", a, b, a | b);
		break;

	case '^':
		printf("%X ^ %X = %X\n", a, b, a ^ b);
		break;
	}

	return 0;
}

int main()
{
	bit();

	return 0;
}