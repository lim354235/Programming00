/*
파일명: PA04
내용: 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오. 윤년이 되는 조건은 다음과 같다.
1. 4로 나누어 떨어지는 해는 윤년이다.
2. 4로 나누어 떨어지는 해 중 100으로 나누어 떨어지는 해는 윤년이 아니다.
3. 100으로 나누어 떨어지는 해 중 400으로 나누어 떨어지는 해는 윤년이다.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dbssus(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0)
		return 1;
	else
		return 0;

}

int assignment04()
{
	int year;

	printf("연도? ");
	scanf("%d", &year);

	if (dbssus(year))
		printf("%d년은 윤년입니다.", year);
	else
		printf("%d년은 윤년이 아닙니다.", year);

	return 0;
}

int main()
{
	assignment04();
	return 0;
}
