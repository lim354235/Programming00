/*
파일명: PA03
내용: 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오. distance 함수를 이용해서 입력받은
시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 20
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double pita(int x, int y, int x1, int y1)
{
	double distance;
	distance = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));

	return distance;
}

int assignment()
{
	int x;
	int y;
	int x1;
	int y1;
	double result;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x, &y);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x1, &y1);

	result = pita(x, y, x1, y1);
	printf("(%d, %d)~(%d, %d) 직선의 길이: %f\n", x, y, x1, y1, result);

	return 0;
}

int main()
{
	assignment();

	return 0;
}