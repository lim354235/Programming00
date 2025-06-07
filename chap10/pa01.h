#pragma once

struct login
{
	char id[20];
	char password[20];
};

typedef struct login LOGIN;

int printID(LOGIN ct, char pass[]);