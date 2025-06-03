/*
파일명: PA06
내용: 다음과 같이 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 choose_menu 함수를 작성하시오. 잘못된 번호를 선택하면 올바른 번호를 선택할 때까지
계속 메뉴를 출력하고 다시 선택받아야한다. 즉 choose_menu 함수는 반드시 0~3사이의 값을 리턴해야 한다. choose_menu 의 리턴값에 따라 어떤 메뉴가
선택되었는지 간단히 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 20
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu()
{
	int menu;
	while (1)
	{
		printf("[1.파일 열기  2.파일 저장  3. 인쇄  0.종료] 선택? ");
		scanf("%d", &menu);

		switch (menu)
		{
		case 0:
			printf("종료합니다.\n");
			break;
		case 1:
			printf("파일 열기를 수행합니다.\n");
			break;
		case 2:
			printf("파일 저장을 수행합니다.\n");
			break;
		case 3:
			printf("인쇄를 수행합니다.\n");
			break;
		default:
			printf("잘못된 번호입니다. 다시 선택하세요.\n");
		}

		if (menu == 0)
			break;
	}

	return menu;
}

int assignment()
{
	int menu;
	menu = choose_menu();
	if (menu == 0)
		return 0;
	else
		return 1;
}

int main()
{
	assignment();
	return 0;
}