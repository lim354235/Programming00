/*
파일명: PA19
내용: 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph함수를 작성하시오. 예를 들어 graph(1200, 100); 은 100마다 *를 하나씩 출력하므로
*을 12개 출력하고, graph(1200, 10);은 10마다 *을 하나씩 출력하므로 *을 120개 출력한다. 0~9999사이의 임의의 숫자 3개를 생성하고 스케일 100으로
그래프로 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 23
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

    printf("데이터 1: ");
    graph(num1, scale);
    printf("데이터 2: ");
    graph(num2, scale);
    printf("데이터 3: ");
    graph(num3, scale);

    return 0;
}
