/*
���ϸ�: PA03
����: ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ kg ������, ���̴� m ������ �Է¹޴´�.
void assignment0303(void), double clacPositionEnergy(int weight, int height)�Լ��� ���
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 03
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



double clacPositionEnergy(int weight, int height)
{
	double g = 9.8;
	double dnlcl = weight * g * height;
	return dnlcl;
}

void assignment0303(void)
{
	int weight = 0;
	int height = 0;
	printf("����(kg)? ");
	scanf("%d", &weight);
	printf("����(m)? ");
	scanf("%d", &height);
	printf("��ġ ������: %lf J", clacPositionEnergy(weight, height));

}



int main(void)
{
	assignment0303();
	return 0;
}