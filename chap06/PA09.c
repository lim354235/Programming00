/*
파일명: PA09
내용: red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 정의하시오. 앞에서 정의한 get_red, get_green, get_blue 함수를
함께 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.
버전: v1.0
작성자: 임재연
날짜: 2025. 05. 23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int make_rgb(int red, int green, int blue);
int get_red(int rgb);
int get_green(int rgb);
int get_blue(int rgb);
int assignment();

int main(void)
{
    assignment();
    return 0;
}

int make_rgb(int red, int green, int blue)
{
    return (red << 16) | (green << 8) | blue;
}

int get_red(int rgb)
{
    return (rgb >> 16) & 0xFF;
}

int get_green(int rgb)
{
    return (rgb >> 8) & 0xFF;
}

int get_blue(int rgb)
{
    return rgb & 0xFF;
}

int assignment()
{
    unsigned int rgb;
    unsigned int inverse_rgb;

    printf("RGB 색상? ");
    scanf("%x", &rgb);

    inverse_rgb = make_rgb(
        255 - get_red(rgb),
        255 - get_green(rgb),
        255 - get_blue(rgb)
    );

    printf("RGB %06X의 보색: %06X\n", rgb, inverse_rgb);

    return 0;
}