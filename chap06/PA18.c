/*
파일명: PA18
내용: 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오. 0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서
각각의 약수를 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 23
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
    printf("%d의 약수: ", num);
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