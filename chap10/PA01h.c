#include <stdio.h>
#include "pa01.h"

int printID(LOGIN ct, char pass[])
{
	for (int i = 0; pass[i] != '\0'; i++)
	{
		printf("*");
	}

	return 0;
}