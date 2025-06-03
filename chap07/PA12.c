/*
파일명: PA12
내용: 기차효 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고 하자. 예매할 좌석수를 입력받아 빈 자리를 할당한다.
예매할 때마다 각 좌석의 상태를 출력한다. O이면 예매가능, X이면 예매불가를 의미한다. 더 이상 예매할 수 없으면 프로그램을 종료한다.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 31
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define size 10

int printSeats(char seats[]);
int reserveSeats(char seats[], int count);
int seat();

int main()
{
	seat();
	return 0;
}

int seat()
{
	char seats[size] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' }; // 좌석 상태 초기화
	int count = 0;


	while (1)
	{
		int a = 1;


		for (int i = 0; i < size; i++) // 'O'가 존재하면 거짓(0), 'X'가 존재하면 참(1)으로 판단
		{
			if (seats[i] == 'O')
			{
				a = 0;
				break;
			}
		}

		if (a) // 참(1)이면 반복종료
		{
			break;
		}


		reserveSeats(seats, count);


	}

	return 0;
}

int printSeats(char seats[])
{
	printf("현재 좌석: [");
	for (int i = 0; i < size; i++)
	{
		printf("%c ", seats[i]);
	}
	printf("]\n");

	return 0;
}

int reserveSeats(char seats[], int count)
{
	int min = 0;

	printSeats(seats); // 현재 좌석 상태 출력
	printf("예매할 좌석수? ");
	scanf("%d", &count);

	for (int i = 0; i < size && count > min; i++)
	{
		if (seats[i] == 'O')
		{
			seats[i] = 'X';
			min++;
			printf("%d ", i + 1); // 예매한 좌석 출력
		}
	}
	printf("번 좌석을 예매했습니다.\n");

	return count; // 남은 좌석 수 반환
}