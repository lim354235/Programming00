/*
���ϸ�: PA17
����: ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ����� ����
30���� 2000��, �� ���Ĵ� 10�д� 1000�������� ����ϸ�, �Ϸ� �ִ� 25000���� ���� �� ����. ���� �ð��� 24�ð���
���� ���� ���ٰ� �����Ѵ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int parking(int time)
{
	int fee = 0;
	int day = 0;
	if (time > 1440)
	{
		day = time / 1440;
		time = time % 1440;
	}
	if (time <= 30)
	{
		fee = 2000;
	}
	else
	{
		time -= 30;
		fee = 2000 + (time / 10) * 1000;
	}
	if (fee > 25000)
	{
		fee = 25000;
	}
	return fee + (day * 25000);
}

int assignment()
{
	int time;
	int fee;

	printf("���� �ð�(��)? ");
	scanf("%d", &time);
	fee = parking(time);
	printf("���� ����� %d���Դϴ�.\n", fee);

	return 0;
}

int main()
{
	assignment();

	return 0;
}