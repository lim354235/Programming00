/*
���ϸ�: PA13
����: ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 06. 07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pa13.h"

int Rect();

int main()
{
	Rect();
	return 0;
}



int Rect()
{
	leftBot bot = { 0 };
	rightTop top = { 0 };
	printf("���簢���� ���ϴ���(x,y)? ");
	scanf("%d %d", &bot.x, &bot.y);
	printf("���簢���� ������(x,y)? ");
	scanf("%d %d", &top.x, &top.y);

	printRect(bot, top);

	return 0;
}

