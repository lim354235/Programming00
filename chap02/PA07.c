/*���ϸ�: PA07.c
*����: PA07. Ŀ�ǻ�����(S,T,G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.
*�ۼ���:���翬
*��¥: 2025.3.23
*����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void coffee();

int main()
{
	coffee();

	return 0;

}


void coffee()
{
	char size;
	int tnfid;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����?\n");
	scanf("%c %d", &size, &tnfid);

	printf("%c ������ %d���� �ֹ��մϴ�.", size, tnfid);

	return 0;

}
