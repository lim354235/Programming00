/*
파일명: PA17
내용: 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오. 주차 요금은 최초
30분은 2000원, 그 이후는 10분당 1000원씩으로 계산하며, 하루 최대 25000원을 넘을 수 없다. 주차 시간은 24시간을
넘을 수는 없다고 가정한다.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int parking(int time)
{
	int fee = 0;
	int day = 0;
	if (time > 1440)
	{
		day = time / 1440;
		time = time % 1440;
	}
	if (time <= 30)
	{
		fee = 2000;
	}
	else
	{
		time -= 30;
		fee = 2000 + (time / 10) * 1000;
	}
	if (fee > 25000)
	{
		fee = 25000;
	}
	return fee + (day * 25000);
}

int assignment()
{
	int time;
	int fee;

	printf("주차 시간(분)? ");
	scanf("%d", &time);
	fee = parking(time);
	printf("주차 요금은 %d원입니다.\n", fee);

	return 0;
}

int main()
{
	assignment();

	return 0;
}