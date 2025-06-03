/*
파일명: PA01
내용: 점의 좌표(x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.
스크린 상의 선택영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점에 의해서 결정된다
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int whkvy(int x, int y, int left, int top, int right, int bottom)
{
	if (x >= left && x <= right && y >= top && y <= bottom)
		return 1;
	else
		return 0;
}

int assignment01()
{
	int x, y;
	int left, top, right, bottom;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (whkvy(x, y, left, top, right, bottom))
		printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
	else
		printf("직사각형 모양의 선택 영역 내의 점이 아닙니다..\n");

	return 0;
}

int main()
{
	assignment01();
	return 0;
}