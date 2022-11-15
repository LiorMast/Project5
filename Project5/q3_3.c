#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void q3_3() {
	int ptype, pprice, q;
	float discount;

		printf("Please enter product type: ");
		scanf("%d", &ptype);
		printf("Please enter product price: ");
		scanf("%d", &pprice);
		printf("Please enter quantity: ");
		scanf("%d", &q);

		if (ptype >= 1 && ptype <= 8)
		{
			if (q > 35)
			{
				switch (ptype)
				{
				case 1:
				case 4:
				case 6:
					discount = 0.05;
					break;
				case 2:
				case 5:
					discount = 0.1;
					break;
				case 3:
				case 7:
				case 8:
					discount = 0.2;
					break;
				default:
					break;
				}
				printf("Discount: %f", discount);
			}
			else {
				printf("Final price without discount: %d", pprice*q);
			}
			
		} else {
			printf("Not a valid product type!");
		}
}