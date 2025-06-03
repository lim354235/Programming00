/*
���ϸ�: PA12
����: ����ȿ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10����� ����. ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�.
������ ������ �� �¼��� ���¸� ����Ѵ�. O�̸� ���Ű���, X�̸� ���źҰ��� �ǹ��Ѵ�. �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 31
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
	char seats[size] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' }; // �¼� ���� �ʱ�ȭ
	int count = 0;


	while (1)
	{
		int a = 1;


		for (int i = 0; i < size; i++) // 'O'�� �����ϸ� ����(0), 'X'�� �����ϸ� ��(1)���� �Ǵ�
		{
			if (seats[i] == 'O')
			{
				a = 0;
				break;
			}
		}

		if (a) // ��(1)�̸� �ݺ�����
		{
			break;
		}


		reserveSeats(seats, count);


	}

	return 0;
}

int printSeats(char seats[])
{
	printf("���� �¼�: [");
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

	printSeats(seats); // ���� �¼� ���� ���
	printf("������ �¼���? ");
	scanf("%d", &count);

	for (int i = 0; i < size && count > min; i++)
	{
		if (seats[i] == 'O')
		{
			seats[i] = 'X';
			min++;
			printf("%d ", i + 1); // ������ �¼� ���
		}
	}
	printf("�� �¼��� �����߽��ϴ�.\n");

	return count; // ���� �¼� �� ��ȯ
}