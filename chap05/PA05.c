/*
���ϸ�: PA05
����: �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
"27C" �Ǵ� "27F"ó�� �µ��� �Է¹��� �� �������� ȭ������ ������ �� �ִ� ���ڸ� �Բ� �Է¹޴´�.
�Բ� �Էµ� ���ڰ� 'C'�� ���� �µ��̹Ƿ� ȭ�� �µ��� ���ؤ��� ����ϰ�, �Էµ� ���ڰ� 'F'��
ȭ�� �µ��̹Ƿ� ���� �µ��� ���� ����Ѵ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ghk(float celcius)
{
	return (9 * celcius) / 5 + 32;
}

double tjq(float fahrenheit)
{
	return (fahrenheit - 32) * 5 / 9;
}

int assignment05()
{
	char c;
	float temperature;
	printf("�µ�? ");
	scanf("%f %c", &temperature, &c);

	if (c == 'C')
	{
		printf("%.2f C = %.2f F\n", temperature, ghk(temperature));
	}
	else if (c == 'F')
	{
		printf(" %.2f F = %.2f C \n", temperature, tjq(temperature));
	}
	else
	{
		printf("�߸��� �Է��Դϴ�.\n");
	}

	return 0;
}

int main()
{
	assignment05();
	return 0;
}
