/*
���ϸ�: PA15
����: ȯ������������ 1.75%�� ������ �ִٰ� �����ϰ� ��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾� �޷��� �� ��
����Ǵ� ȯ���� �����ϰ�, �����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ghksdbf(double aoao, double ghkswjs)
{
	double ghks = 0.0;
	ghks = aoao * (1.75 / 100) * (1.0 - (ghkswjs / 100));

	return ghks;
}

int assignment0415(void)
{
	//1. ��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾� ����
	double aoao = 0.0;
	double ghkswjs = 0.0;
	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &aoao);
	printf("ȯ�������(0~100%%)? ");
	scanf("%lf", &ghkswjs);

	//2. �޷��� �� �� ����Ǵ� ȯ�� ���
	double result = ghksdbf(aoao, ghkswjs);

	double qq = 0.0;
	qq = aoao + result;
	printf("�޷� �� �� ����Ǵ� ȯ���� %lf\n", qq);

	//3. �����ϰ��� �ϴ� �޷��� �Է¹޾� ����
	double qkqk = 0.0;
	printf("�����ϰ��� �ϴ� �޷�? ");
	scanf("%lf", &qkqk);

	//4. �� ���� �ش��ϴ��� ���
	double q = qq * qkqk;

	//5. ���� ����� ���
	printf("%.2lf�޷��� %.2lf���Դϴ�.\n", qkqk, q);
	return 0;
}

int main(void)
{
	assignment0415();
	return 0;
}