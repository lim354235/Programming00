/*
���ϸ�: PA09
����: red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ��� �����Ͻÿ�. �տ��� ������ get_red, get_green, get_blue �Լ���
�Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 05. 23
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

    printf("RGB ����? ");
    scanf("%x", &rgb);

    inverse_rgb = make_rgb(
        255 - get_red(rgb),
        255 - get_green(rgb),
        255 - get_blue(rgb)
    );

    printf("RGB %06X�� ����: %06X\n", rgb, inverse_rgb);

    return 0;
}