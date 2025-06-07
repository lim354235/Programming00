#pragma once

#define user 5

struct login 
{
    char id[20];
    char password[20];
};

typedef struct login LOGIN;

extern LOGIN users[user];

int check(char id[], char password[]);