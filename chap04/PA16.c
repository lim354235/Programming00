/*
���ϸ�: PA16
����: 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
RGB ������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����Ѵ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double RGB()
{
	unsigned char red = 0;
	unsigned char green = 0;
	unsigned char blue = 0;
	int rgb_color = 0;

	printf("red? ");
	scanf("%hhu", &red);
	printf("green? ");
	scanf("%hhu", &green);
	printf("blue? ");
	scanf("%hhu", &blue);

	rgb_color = red | green << 8 | blue << 16;
	printf("RGB Ʈ���÷�: %06X\n", rgb_color);

	return 0;
}

int main()
{
	RGB();
	return 0;
}