/*���ϸ�: PA09.c
*����: PA09. 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*�ۼ���:���翬
*��¥: 2025.3.23
*����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void wlstn()
{
	int num;

	printf("16���� ����?\n");
	scanf("%x", &num);

	printf("16���� %x�� 10���� %d�Դϴ�.", num, num);
}

int main()
{
	wlstn();

	return 0;

}