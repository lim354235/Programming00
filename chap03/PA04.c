/*
���ϸ�: PA04
����: ��ü�� �ۿ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ũ���� N ������ �Է¹ް�,
�̵��� �Ÿ��� m ������ �Է¹޴´�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 03
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ehgud()
{
	float force;
	float distance;
	printf("��(N)? ");
	scanf("%f", &force);
	printf("�Ÿ�(m)? ");
	scanf("%f", &distance);
	printf("���� ��: %.2f J\n", force * distance);
	return;
}

int main()
{
	ehgud();
	return 0;
}