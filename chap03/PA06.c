/*
���ϸ�: PA06
����: ����Ʈ�� ������ ��������(m^2)�� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 1m^2�� 0.3025�� �ش��Ѵ�.
���α׷��� �ۼ��� �� �̸� �ִ� ����� �̿��غ���.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 03
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void apt()
{
	double APT = 0.3025;
	double area;
	printf("����Ʈ ����(��������)? ");
	scanf("%lf", &area);
	printf("%.2f �������� = %.2f ��\n", area, area * APT);
	return;
}

int main()
{
	apt();

	return 0;
}