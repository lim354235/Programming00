/*���ϸ�: PA02.c
*����: PA02. �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.
*�ۼ���:���翬
*��¥: 2025.3.23
*����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void qjsgh(void);

int main(void)
{
	qjsgh();

	return 0;
}

void qjsgh(void)
{
	int number;
	float hakjum;

	printf("�л��� ��ȣ�� ������ �Է����ּ���");
	scanf("%d %f", &number, &hakjum);

	printf("��ȣ? %d\n����? %f\n 12�� �л��� ������ %f�Դϴ�.", number, hakjum, hakjum);

	return;
}