/*
���ϸ�: PA02
����: ȭ�� �µ�(F)�� �Ǽ��� �Է¹޾� ���� �µ�(C)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ������
������ ����.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double tjqTl(double ghkTl)
{
	double C = 0.0;

	C = (ghkTl - 32) * 5.0 / 9.0;

	return C;
}

int assignment0402()
{
	double ghkTl = 0.0;

	printf("ȭ�� �µ�(F)? ");
	scanf("%lf", &ghkTl);

	double q = tjqTl(ghkTl);
	printf("%.2lf F = %.2lf C", ghkTl, q);

	return 0;

}

int main()
{
	assignment0402();
	return 0;
}