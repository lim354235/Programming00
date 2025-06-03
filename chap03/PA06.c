/*
파일명: PA06
내용: 아파트의 면적을 제곱미터(m^2)로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오. 1m^2는 0.3025평에 해당한다.
프로그램을 작성할 때 이름 있는 상수를 이용해보자.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 03
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void apt()
{
	double APT = 0.3025;
	double area;
	printf("아파트 면적(제곱미터)? ");
	scanf("%lf", &area);
	printf("%.2f 제곱미터 = %.2f 평\n", area, area * APT);
	return;
}

int main()
{
	apt();

	return 0;
}