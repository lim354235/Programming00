/*
���ϸ�: PA09
����: �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int assignment0409(void)
{
	//1. �������� ����ð��� �� ������ �Է¹޾� ����
	int totalSeconds = 0;
	printf("�������� ����ð�(��)? ");
	scanf("%d", &totalSeconds);

	//2. �� �ð� �� �� �� ������ ���
	int hours = totalSeconds / 3600;
	int minutes = (totalSeconds % 3600) / 60;
	int seconds = totalSeconds % 60;

	//3. ���� ����� ���
	printf("%d�ð� %d�� %d��\n", hours, minutes, seconds);
	return 0;
}


int main(void)
{
	assignment0409();
	return 0;
}