#include <stdio.h>
#include <string.h>
#include "pa03.h"

int check(char id[], char password[])
{
    for (int i = 0; i < user; i++)
    {
        if (strcmp(users[i].id, id) == 0 && strcmp(users[i].password, password) == 0)
        {
            printf("�α��� ����\n");
            return 1;
        }
    }
    printf("�α��� ����\n");
    return 0;
}