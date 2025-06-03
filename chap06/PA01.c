/*
파일명: PA01
내용: 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하시오. get_perimeter 함수를 이용해서 입력받은
가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 20
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int get_perimeter(int x, int y)
{
	int perimeter;
	perimeter = x * 2 + y * 2;

	return perimeter;
}

int input()
{
	int x;
	int y;
	int result;

	printf("가로? ");
	scanf("%d", &x);
	printf("세로? ");
	scanf("%d", &y);

	get_perimeter(x, y);
	result = get_perimeter(x, y);

	printf("직사각형의 둘레: %d\n", result);

	return 0;
}

int main()
{
	input();

	return 0;
}