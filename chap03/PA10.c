/*
���ϸ�: PA10
����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 03
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ghksbdf()
{
	float won;
	float dollar;
	printf("USD ");
	scanf("%f", &dollar);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &won);

	printf("USD %.2f = KRM %.2f", dollar, won * dollar);
	return;
}

int main()
{
	ghksbdf();
	return 0;
}