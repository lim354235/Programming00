/*
파일명: PA01
내용: 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위, 속력은 m/s 단위로 입력받는다.
버전: v1.0
작성자: 임재연
날짜: 2025. 04. 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
함수명: getMotionEnergy
기능(책임): 질량과 속력을 입력받아 운동에너지를 계산하여 반환함.
입력: 질량(kg), 속력(m/s)
반환: 운동에너지(J)
*/
double getMotionEnergy(double weight, double velocity)
{
	double motionEnergy = 0.0;
	motionEnergy = 0.5 * weight * velocity * velocity;
	return motionEnergy;
}

/*
함수명: assignment0401
기능(책임): 질량, 속력을 입력받음, 운동에너지를 계산하도록 함수호출, 그 결과를 콘솔에 출력함.
입력: 없음
반환: 정수이며 0이면 성공, 그 외 값은 에러이다.
*/
int assignment0401(void)
{
	//1. 질량과 속력을 입력받아 저장
	double weight = 0.0;
	double velocity = 0.0;
	printf("질량(kg)? ");
	scanf("%lf", &weight);
	printf("속력(m/s)? ");
	scanf("%lf", &velocity);

	//2. 운동에너지 계산
	double result = getMotionEnergy(weight, velocity);

	//3. 계산된 운동에너지 출력
	printf("운동에너지(J)? %.2lf\n", result);

	return 0;
}

int main(void)
{
	assignment0401();
	return 0;
}