/*
파일명: PA01
내용:한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
작성자: 임재연
날짜:2025. 04. 03
버전: v1.0
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void ehgud()
{
	int num;
	printf("한 변의 길이 ?");
	scanf("%d", &num);
	printf("정사각형의 넓이:%d\n", num * num);
	printf("정사각형의 둘레:%d", num * 4);

	return;
}

int main()
{
	ehgud();

	return 0;
}