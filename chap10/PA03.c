/*
���ϸ�: PA03
����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�. ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� 
�н������ ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�. LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ 
�ʱ�ȭ�ؼ� ����Ѵ�.
����: v1.0
�ۼ���: ���翬
��¥: 2025. 06. 05
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


