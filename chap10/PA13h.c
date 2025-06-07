#include <stdio.h>
#include "pa13.h"

int printRect(leftBot bot, rightTop top)
{
	printf("[RECT 좌하단점: (%d, %d), 우상단점: (%d, %d)]\n", bot.x, bot.y, top.x, top.y);
	return 0;
}