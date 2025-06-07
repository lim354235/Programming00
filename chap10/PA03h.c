#include <stdio.h>
#include <string.h>
#include "pa03.h"

int check(char id[], char password[])
{
    for (int i = 0; i < user; i++)
    {
        if (strcmp(users[i].id, id) == 0 && strcmp(users[i].password, password) == 0)
        {
            printf("로그인 성공\n");
            return 1;
        }
    }
    printf("로그인 실패\n");
    return 0;
}