/*
���ϸ�: PA08
����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. �̶� ���̴� 3.141592��� ����.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double qnvl(double qkswlfma)
{
	double dnjsqnvl = 0.0;

	dnjsqnvl = 4.0 / 3.0 * 3.141592 * qkswlfma * qkswlfma * qkswlfma;
	return dnjsqnvl;
}

int assignment0408(void)
{
	//1. �������� ���̸� �Է¹޾� ����
	double qkswlfma = 0.0;
	printf("�������� ����? ");
	scanf("%lf", &qkswlfma);

	//2. ���� ���� ���
	double result = qnvl(qkswlfma);

	//3. ���� ���� ���� ���
	printf("���� ����? %lf\n", result);
	return 0;
}

int main(void)
{
	assignment0408();
	return 0;
}