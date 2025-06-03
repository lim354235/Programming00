/*
파일명: PA08
내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오. 이때 파이는 3.141592라고 하자.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double qnvl(double qkswlfma)
{
	double dnjsqnvl = 0.0;

	dnjsqnvl = 4.0 / 3.0 * 3.141592 * qkswlfma * qkswlfma * qkswlfma;
	return dnjsqnvl;
}

int assignment0408(void)
{
	//1. 반지름의 길이를 입력받아 저장
	double qkswlfma = 0.0;
	printf("반지름의 길이? ");
	scanf("%lf", &qkswlfma);

	//2. 구의 부피 계산
	double result = qnvl(qkswlfma);

	//3. 계산된 구의 부피 출력
	printf("구의 부피? %lf\n", result);
	return 0;
}

int main(void)
{
	assignment0408();
	return 0;
}