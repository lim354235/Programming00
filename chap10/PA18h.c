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
		printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ(0 ����)? ");
		scanf("%d", &choice);

		if (choice == 0)
			break;

		if (choice < 1 || choice > 8)
		{
			printf("�߸��� �� ��ȣ�Դϴ�.\n");
			continue;
		}

		// playlist�� �� �ڸ��� �� �߰�
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
			printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");
			continue;
		}

		// ����ð� ���
		int timeSec = atoi(songs[choice].time);
		totalTime += timeSec;

		// �÷��̸���Ʈ ���
		printf("<< �÷��̸���Ʈ >>\n");
		for (int i = 0; i < 5; i++)
		{
			if (playlist[i].title[0] != '\0')  // ������ ������ ���
			{
				printf("%s\t%s\t%s\t%s\n", playlist[i].title, playlist[i].artist, playlist[i].genre, playlist[i].time);
			}
		}

		printf("�� ��� �ð�: %d��\n", totalTime);
	}

	return 0;
}
