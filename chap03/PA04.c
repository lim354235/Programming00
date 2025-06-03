/*
파일명: PA04
내용: 물체에 작용한 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오. 힘의 크리는 N 단위로 입력받고,
이동한 거리는 m 단위로 입력받는다.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 03
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ehgud()
{
	float force;
	float distance;
	printf("힘(N)? ");
	scanf("%f", &force);
	printf("거리(m)? ");
	scanf("%f", &distance);
	printf("일의 양: %.2f J\n", force * distance);
	return;
}

int main()
{
	ehgud();
	return 0;
}