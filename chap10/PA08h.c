#include <stdio.h>
#include "pa08.h"

int printProduct(PRODUCT product)
{
	printf("[%s %d�� ���:%d]", product.name, product.price, product.stock);

	return 0;
}