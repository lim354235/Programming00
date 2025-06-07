#pragma once
#include <stdio.h>

struct song
{
	char title[30];
	char artist[20];
	char genre[10];
	char time[10];
};


typedef struct song SONG;

extern SONG songs[9];
extern SONG playlist[5];

int play();