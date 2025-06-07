/*
파일명: PA13
내용: 직사각형 정보를 나타내는 RECT 구조체를 정의하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 06. 07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pa13.h"

int Rect();

int main()
{
	Rect();
	return 0;
}



int Rect()
{
	leftBot bot = { 0 };
	rightTop top = { 0 };
	printf("직사각형의 좌하단점(x,y)? ");
	scanf("%d %d", &bot.x, &bot.y);
	printf("직사각형의 우상단점(x,y)? ");
	scanf("%d %d", &top.x, &top.y);

	printRect(bot, top);

	return 0;
}

