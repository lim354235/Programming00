/*
���ϸ�: PA06
����: ������ ���� �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� choose_menu �Լ��� �ۼ��Ͻÿ�. �߸��� ��ȣ�� �����ϸ� �ùٸ� ��ȣ�� ������ ������
��� �޴��� ����ϰ� �ٽ� ���ù޾ƾ��Ѵ�. �� choose_menu �Լ��� �ݵ�� 0~3������ ���� �����ؾ� �Ѵ�. choose_menu �� ���ϰ��� ���� � �޴���
���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 20
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu()
{
	int menu;
	while (1)
	{
		printf("[1.���� ����  2.���� ����  3. �μ�  0.����] ����? ");
		scanf("%d", &menu);

		switch (menu)
		{
		case 0:
			printf("�����մϴ�.\n");
			break;
		case 1:
			printf("���� ���⸦ �����մϴ�.\n");
			break;
		case 2:
			printf("���� ������ �����մϴ�.\n");
			break;
		case 3:
			printf("�μ⸦ �����մϴ�.\n");
			break;
		default:
			printf("�߸��� ��ȣ�Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (menu == 0)
			break;
	}

	return menu;
}

int assignment()
{
	int menu;
	menu = choose_menu();
	if (menu == 0)
		return 0;
	else
		return 1;
}

int main()
{
	assignment();
	return 0;
}