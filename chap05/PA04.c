/*
���ϸ�: PA04
����: ������ �Է¹޾� �������� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ �Ǵ� ������ ������ ����.
1. 4�� ������ �������� �ش� �����̴�.
2. 4�� ������ �������� �� �� 100���� ������ �������� �ش� ������ �ƴϴ�.
3. 100���� ������ �������� �� �� 400���� ������ �������� �ش� �����̴�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 04. 21
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dbssus(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0)
		return 1;
	else
		return 0;

}

int assignment04()
{
	int year;

	printf("����? ");
	scanf("%d", &year);

	if (dbssus(year))
		printf("%d���� �����Դϴ�.", year);
	else
		printf("%d���� ������ �ƴմϴ�.", year);

	return 0;
}

int main()
{
	assignment04();
	return 0;
}
