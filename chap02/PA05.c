/*���ϸ�: PA05.c
*����: PA05. �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ����Ѵ�.
*�ۼ���:���翬
*��¥: 2025.3.23
*����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void anrp()
{
	float anrp;

	printf("�����Ը� �Է����ּ���.\n");
	scanf("%f", &anrp);

	printf("������? %.2f\n", anrp);
	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", anrp);
}

int main()
{
	anrp();
	return 0;
}