/*
파일명: PA01
내용: 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다. 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 25
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

    //입력
    printf("첫번째 항? ");
    scanf("%d", &start);
    printf("공차? ");
    scanf("%d", &diff);

    //계산 
    fillCD(result, 10, start, diff);

    //출력
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