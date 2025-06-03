/*
���ϸ�: PA19
����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph�Լ��� �ۼ��Ͻÿ�. ���� ��� graph(1200, 100); �� 100���� *�� �ϳ��� ����ϹǷ�
*�� 12�� ����ϰ�, graph(1200, 10);�� 10���� *�� �ϳ��� ����ϹǷ� *�� 120�� ����Ѵ�. 0~9999������ ������ ���� 3���� �����ϰ� ������ 100����
�׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 23
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graph(int data, int scale)
{
    int count = data / scale;
    for (int i = 0; i < count; i++)
    {
        printf("*");
    }
    printf(" (%d)\n", data);
}

int main()
{
    int num1, num2, num3;
    int scale = 100;

    srand(time(NULL));

    num1 = rand() % 10000;
    num2 = rand() % 10000;
    num3 = rand() % 10000;

    printf("������ 1: ");
    graph(num1, scale);
    printf("������ 2: ");
    graph(num2, scale);
    printf("������ 3: ");
    graph(num3, scale);

    return 0;
}
