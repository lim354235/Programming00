/*
���ϸ�: PA01
����: ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�. ���̵�� �н������ ���� �ִ� 20���ڱ���
�Է��� �� �ִ�. LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �н����带 ����� ����
�н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 06. 05
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pa01.h"

int assignement();


int main()
{
	assignement();
	return 0;
}

int assignement()
{
	LOGIN ct = { 0 };
	char pass[20];

	printf("ID? ");
	scanf("%s", ct.id);
	printf("Password? ");
	scanf("%s", ct.password);
	printf("ID: %s\n", ct.id);
	printf("PW: ");
	printID(ct, ct.password);

	return 0;
}