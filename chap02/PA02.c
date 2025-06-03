/*파일명: PA02.c
*내용: PA02. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로, 학점을 실수로 입력받는다.
*작성자:임재연
*날짜: 2025.3.23
*버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void qjsgh(void);

int main(void)
{
	qjsgh();

	return 0;
}

void qjsgh(void)
{
	int number;
	float hakjum;

	printf("학생의 번호와 학점을 입력해주세요");
	scanf("%d %f", &number, &hakjum);

	printf("번호? %d\n학점? %f\n 12번 학생의 학점은 %f입니다.", number, hakjum, hakjum);

	return;
}