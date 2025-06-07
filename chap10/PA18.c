/*
파일명: PA18
내용: 음원 사이트의 플레이리스트 기능을 구현하려고 한다. 이미 등록된 SONG 구조체 배열이 있을 때, 전체 곡 목록을 보여주고 사용자로부터 플레이리스트에
추가할 노래를 번호로 선택하게 한다. 플레이리스트에 노래를 추가할 때마다 플레이리스트의 곡 목록과 전체 재생 시간이 얼마인지를 출력한다.
플레이리스트에는 최대 5곡만 등록할 수 있다.
버전: v1.0
작성자: 임재연
날짜: 2025. 06. 07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pa18.h"

int assignement();
SONG songs[9] = {
	{"제목", "아티스트", "장르", "재생시간"},
	{"Song1", "Artist1", "pop", "208초"},
	{"Song2", "Artist2", "pop", "211초"},
	{"Song3", "Artist3", "ballad", "316초"},
	{"Song4", "Artist4", "pop", "198초"},
	{"Song5", "Artist5", "hiphop", "209초"},
	{"Song6", "Artist6", "hiphop", "274초"},
	{"Song7", "Artist7", "ballad", "226초"},
	{"Song8", "Artist8", "hiphop", "241초"}
};

SONG playlist[5] = {0};

int main()
{
	assignement();
	return 0;
}

int assignement()
{
	printf("   %s		%s	%s	%s\n", songs[0].title, songs[0].artist, songs[0].genre, songs[0].time);
	for (int i = 1; i < 9; i++)
	{
		printf("%d: %s	%s		%s	%s\n", i, songs[i].title, songs[i].artist, songs[i].genre, songs[i].time);
	}
	play();
	return 0;
}


