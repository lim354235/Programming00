/*
���ϸ�: PA18
����: ���� ����Ʈ�� �÷��̸���Ʈ ����� �����Ϸ��� �Ѵ�. �̹� ��ϵ� SONG ����ü �迭�� ���� ��, ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ��
�߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�. �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ� ��ü ��� �ð��� �������� ����Ѵ�.
�÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 06. 07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pa18.h"

int assignement();
SONG songs[9] = {
	{"����", "��Ƽ��Ʈ", "�帣", "����ð�"},
	{"Song1", "Artist1", "pop", "208��"},
	{"Song2", "Artist2", "pop", "211��"},
	{"Song3", "Artist3", "ballad", "316��"},
	{"Song4", "Artist4", "pop", "198��"},
	{"Song5", "Artist5", "hiphop", "209��"},
	{"Song6", "Artist6", "hiphop", "274��"},
	{"Song7", "Artist7", "ballad", "226��"},
	{"Song8", "Artist8", "hiphop", "241��"}
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


