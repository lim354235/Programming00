/*
파일명: PA16
내용: 0~255사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오.
RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double RGB()
{
	unsigned char red = 0;
	unsigned char green = 0;
	unsigned char blue = 0;
	int rgb_color = 0;

	printf("red? ");
	scanf("%hhu", &red);
	printf("green? ");
	scanf("%hhu", &green);
	printf("blue? ");
	scanf("%hhu", &blue);

	rgb_color = red | green << 8 | blue << 16;
	printf("RGB 트루컬러: %06X\n", rgb_color);

	return 0;
}

int main()
{
	RGB();
	return 0;
}