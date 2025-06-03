/*
파일명: PA09
내용: 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int assignment0409(void)
{
	//1. 동영상의 재생시간을 초 단위로 입력받아 저장
	int totalSeconds = 0;
	printf("동영상의 재생시간(초)? ");
	scanf("%d", &totalSeconds);

	//2. 몇 시간 몇 분 몇 초인지 계산
	int hours = totalSeconds / 3600;
	int minutes = (totalSeconds % 3600) / 60;
	int seconds = totalSeconds % 60;

	//3. 계산된 결과를 출력
	printf("%d시간 %d분 %d초\n", hours, minutes, seconds);
	return 0;
}


int main(void)
{
	assignment0409();
	return 0;
}