/*
���ϸ�: PA08
����: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 06. 07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pa08.h"

int assignement();
PRODUCT product = { 0 };

int main()
{
	assignement();
	return 0;
}

int assignement()
{
	printf("��ǰ��? ");
	scanf("%s", product.name);
	printf("����? ");
	scanf("%d", &product.price);
	printf("���? ");
	scanf("%d", &product.stock);

	printProduct(product);
	

	return 0;
}

