#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include "pa18.h"

SONG songs[9];
SONG playlist[5];

int play()
{
	int totalTime = 0;
	int choice;

	while (1)
	{
		printf("플레이리스트에 추가할 곡 번호(0 종료)? ");
		scanf("%d", &choice);

		if (choice == 0)
			break;

		if (choice < 1 || choice > 8)
		{
			printf("잘못된 곡 번호입니다.\n");
			continue;
		}

		// playlist에 빈 자리에 곡 추가
		int added = 0;
		for (int i = 0; i < 5; i++)
		{
			if (playlist[i].title[0] == '\0')
			{
				playlist[i] = songs[choice];
				added = 1;
				break;
			}
		}

		if (!added)
		{
			printf("플레이리스트가 가득 찼습니다.\n");
			continue;
		}

		// 재생시간 계산
		int timeSec = atoi(songs[choice].time);
		totalTime += timeSec;

		// 플레이리스트 출력
		printf("<< 플레이리스트 >>\n");
		for (int i = 0; i < 5; i++)
		{
			if (playlist[i].title[0] != '\0')  // 내용이 있으면 출력
			{
				printf("%s\t%s\t%s\t%s\n", playlist[i].title, playlist[i].artist, playlist[i].genre, playlist[i].time);
			}
		}

		printf("총 재생 시간: %d초\n", totalTime);
	}

	return 0;
}
