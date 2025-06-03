/*
파일명: PA15
내용: 환전수수료율은 1.75%로 정해져 있다고 가정하고 원-달러 매매기준율과 환전우대율(%)를 입력받아 달러를 살 때
적용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ghksdbf(double aoao, double ghkswjs)
{
	double ghks = 0.0;
	ghks = aoao * (1.75 / 100) * (1.0 - (ghkswjs / 100));

	return ghks;
}

int assignment0415(void)
{
	//1. 원-달러 매매기준율과 환전우대율(%)을 입력받아 저장
	double aoao = 0.0;
	double ghkswjs = 0.0;
	printf("원/달러 매매기준율? ");
	scanf("%lf", &aoao);
	printf("환전우대율(0~100%%)? ");
	scanf("%lf", &ghkswjs);

	//2. 달러를 살 때 적용되는 환율 계산
	double result = ghksdbf(aoao, ghkswjs);

	double qq = 0.0;
	qq = aoao + result;
	printf("달러 살 때 적용되는 환율은 %lf\n", qq);

	//3. 구입하고자 하는 달러를 입력받아 저장
	double qkqk = 0.0;
	printf("구입하고자 하는 달러? ");
	scanf("%lf", &qkqk);

	//4. 몇 원에 해당하는지 계산
	double q = qq * qkqk;

	//5. 계산된 결과를 출력
	printf("%.2lf달러는 %.2lf원입니다.\n", qkqk, q);
	return 0;
}

int main(void)
{
	assignment0415();
	return 0;
}