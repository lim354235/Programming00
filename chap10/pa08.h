#pragma once


struct product {
	char name[20];
	int price;
	int stock;
};

typedef struct product PRODUCT;

extern PRODUCT product;

int printProduct(PRODUCT product);