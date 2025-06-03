/*파일명: PA05.c
*내용: PA05. 몸무게를 입력받아서 출력하는 프로그램을 작성하시오. 몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력한다.
*작성자:임재연
*날짜: 2025.3.23
*버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void anrp()
{
	float anrp;

	printf("몸무게를 입력해주세요.\n");
	scanf("%f", &anrp);

	printf("몸무게? %.2f\n", anrp);
	printf("입력한 몸무게는 %.2fKG입니다.", anrp);
}

int main()
{
	anrp();
	return 0;
}