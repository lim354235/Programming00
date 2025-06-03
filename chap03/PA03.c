/*
파일명: PA03
내용: 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위로, 높이는 m 단위로 입력받는다.
void assignment0303(void), double clacPositionEnergy(int weight, int height)함수를 사용
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 03
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



double clacPositionEnergy(int weight, int height)
{
	double g = 9.8;
	double dnlcl = weight * g * height;
	return dnlcl;
}

void assignment0303(void)
{
	int weight = 0;
	int height = 0;
	printf("질량(kg)? ");
	scanf("%d", &weight);
	printf("높이(m)? ");
	scanf("%d", &height);
	printf("위치 에너지: %lf J", clacPositionEnergy(weight, height));

}



int main(void)
{
	assignment0303();
	return 0;
}