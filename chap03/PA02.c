/*
���ϸ�: PA02
����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ۼ���: ���翬
��¥:2025. 04. 03
����: v1.0
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ehgud()
{
	int rkfh;
	int tpfh;
	printf("������ ����? ");
	scanf("%d", &rkfh);
	printf("������ ����? ");
	scanf("%d", &tpfh);
	printf("���簢���� ����:%d\n", rkfh * tpfh);
	printf("���簢���� �ѷ�:%d", (rkfh + tpfh) * 2);


	return;
}

int main()
{
	ehgud();
	return 0;
}