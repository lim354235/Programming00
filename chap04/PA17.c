/*
���ϸ�: PA17
����: 32��Ʈ ũ���� ������(��ȣ ���� ������)���� 0~31�� ��Ʈ�� �����Ѵ�. 7��° ��Ʈ�� 1�� ��,
15��° ��Ʈ�� 1�� ��, 23��° ��Ʈ�� 1�� ��, 31��° ��Ʈ�� 1�� ���� ���ؼ� 16������ 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Bit()
{
	unsigned int bit = 0;
	unsigned int dnlcl = 0;

	dnlcl = 1 << 7;
	bit = dnlcl;
	printf("7��° ��Ʈ: %08X, %d\n", bit, bit);
	dnlcl = 1 << 15;
	bit = dnlcl;
	printf("15��° ��Ʈ: %08X, %d\n", bit, bit);
	dnlcl = 1 << 23;
	bit = dnlcl;
	printf("23��° ��Ʈ: %08X, %d\n", bit, bit);
	dnlcl = 1 << 31;
	bit = dnlcl;
	printf("31��° ��Ʈ: %08X, %d\n", bit, bit);
	return 0;
}


int main()
{
	Bit();
	return 0;
}