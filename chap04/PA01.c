/*
���ϸ�: PA01
����: ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ kg ����, �ӷ��� m/s ������ �Է¹޴´�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
�Լ���: getMotionEnergy
���(å��): ������ �ӷ��� �Է¹޾� ��������� ����Ͽ� ��ȯ��.
�Է�: ����(kg), �ӷ�(m/s)
��ȯ: �������(J)
*/
double getMotionEnergy(double weight, double velocity)
{
	double motionEnergy = 0.0;
	motionEnergy = 0.5 * weight * velocity * velocity;
	return motionEnergy;
}

/*
�Լ���: assignment0401
���(å��): ����, �ӷ��� �Է¹���, ��������� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� �����.
�Է�: ����
��ȯ: �����̸� 0�̸� ����, �� �� ���� �����̴�.
*/
int assignment0401(void)
{
	//1. ������ �ӷ��� �Է¹޾� ����
	double weight = 0.0;
	double velocity = 0.0;
	printf("����(kg)? ");
	scanf("%lf", &weight);
	printf("�ӷ�(m/s)? ");
	scanf("%lf", &velocity);

	//2. ������� ���
	double result = getMotionEnergy(weight, velocity);

	//3. ���� ������� ���
	printf("�������(J)? %.2lf\n", result);

	return 0;
}

int main(void)
{
	assignment0401();
	return 0;
}