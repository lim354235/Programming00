/*
���ϸ�: PA01
����:�� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ۼ���: ���翬
��¥:2025. 04. 03
����: v1.0
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void ehgud()
{
	int num;
	printf("�� ���� ���� ?");
	scanf("%d", &num);
	printf("���簢���� ����:%d\n", num * num);
	printf("���簢���� �ѷ�:%d", num * 4);

	return;
}

int main()
{
	ehgud();

	return 0;
}