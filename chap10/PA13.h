#pragma once
#include <stdio.h>

struct rect
{
	int x;
	int y;
};

typedef struct rect leftBot;
typedef struct rect rightTop;

int printRect(leftBot bot, rightTop top);