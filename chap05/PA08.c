/*
���ϸ�: PA08
����: ��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�. &�� ��Ʈ AND, |�� ��Ʈ OR, ^�� ��Ʈ XOR ������ ó���Ѵ�.
"0xAB & 0xCC"ó�� ������� �Է��ؼ� ���� ����� ���Ѵ�. ��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����
8����, 16������ ����� �� �ְ� �ϰ�, ������ ����� 16������ ����Ѵ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bit()
{
	char c;
	unsigned int a, b;

	printf("��Ʈ �����? ");
	scanf("%i %c %i", &a, &c, &b);

	switch (c)
	{
	case '&':
		printf("%X & %X = %X\n", a, b, a & b);
		break;

	case '|':
		printf("%X | %X = %X\n", a, b, a | b);
		break;

	case '^':
		printf("%X ^ %X = %X\n", a, b, a ^ b);
		break;
	}

	return 0;
}

int main()
{
	bit();

	return 0;
}