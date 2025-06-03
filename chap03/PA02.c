/*
파일명: PA02
내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
작성자: 임재연
날짜:2025. 04. 03
버전: v1.0
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ehgud()
{
	int rkfh;
	int tpfh;
	printf("가로의 길이? ");
	scanf("%d", &rkfh);
	printf("세로의 길이? ");
	scanf("%d", &tpfh);
	printf("직사각형의 넓이:%d\n", rkfh * tpfh);
	printf("직사각형의 둘레:%d", (rkfh + tpfh) * 2);


	return;
}

int main()
{
	ehgud();
	return 0;
}