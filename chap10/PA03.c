/*
파일명: PA03
내용: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오. 아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 
패스워드와 등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다. LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 
초기화해서 사용한다.
버전: v1.0
작성자: 임재연
날짜: 2025. 06. 05
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "pa03.h"


LOGIN users[user] = {
    {"user1", "pass1"},
    {"user2", "pass2"},
    {"user3", "pass3"},
    {"user4", "pass4"},
    {"user5", "pass5"}
};

int login();

int main()
{
    login();
    return 0;
}

int login()
{
   
    printf("ID? ");
    scanf("%s", users[0].id);
    printf("PW? ");
    scanf("%s", users[0].password);

    check(users[0].id, users[0].password);

    return 0;
}


