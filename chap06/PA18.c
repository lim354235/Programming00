/*
���ϸ�: PA18
����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��Ͻÿ�. 0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ�
������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 23
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int divisors(int num);
int random_number();
int get_random_number(int min, int max);
int get_divisor(int num, int i);

int main()
{
    srand(time(NULL));

    random_number();
    return 0;
}

int get_divisor(int num, int i)
{
    if (num % i == 0)
        return i;
    else
        return 0;
}

int divisors(int num)
{
    int i;
    int divisor = 0;
    printf("%d�� ���: ", num);
    for (i = 1; i <= num; i++)
    {
        divisor = get_divisor(num, i);
        if (divisor != 0)
            printf("%d ", divisor);
    }
    printf("\n");
    return 0;
}

int random_number()
{
    int num1 = get_random_number(1, 999);
    int num2 = get_random_number(1, 999);
    int num3 = get_random_number(1, 999);

    divisors(num1);
    divisors(num2);
    divisors(num3);
    return 0;
}

int get_random_number(int min, int max)
{
    int num = rand() % (max - min + 1) + min;
    return num;
}