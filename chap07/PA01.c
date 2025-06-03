/*
���ϸ�: PA01
����: ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�. ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 25
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment();
void printArray(int arr[], int size);
void fillCD(int arr[], int size, int start, int diff);

int main()
{
    return assignment();
}

#define APR_size 10

int assignment()
{
    int result[APR_size] = { 0 };

    int start = 0;
    int diff = 0;

    //�Է�
    printf("ù��° ��? ");
    scanf("%d", &start);
    printf("����? ");
    scanf("%d", &diff);

    //��� 
    fillCD(result, 10, start, diff);

    //���
    printArray(result, APR_size);

    return 0;
}

void printArray(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void fillCD(int arr[], int size, int start, int diff)
{
    int i;

    arr[0] = start;
    for (i = 1; i < size; i++)
    {
        arr[i] = arr[i - 1] + diff;
    }

}