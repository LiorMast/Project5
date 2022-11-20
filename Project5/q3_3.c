#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void q3_3() {
	//init vars - ptype for product type, pprice for prooduct price, q for quantity and discount for choosing discount amount based on product type
	int ptype, pprice, q;
	float discount;

	//getting product type from user

		printf("Please enter product type: ");
		scanf("%d", &ptype);

		if (ptype >= 1 && ptype <= 8) //if product type is between 1-8 it's considered valid
		{
			// getting from user product price and quantity
			printf("Please enter product price: ");
			scanf("%d", &pprice);
			printf("Please enter quantity: ");
			scanf("%d", &q);

			if (q > 35) //checks if user is eligible for discount based on item quantity, if not it gives the price without the discount
			{
				//in case user is eligible for discount. checks how much discount to give based on product type.
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
				printf("Final price after discount: %.2f\n", (pprice - (pprice * discount)) * q); //calculates price after discount and prints to screen
				
			}
			else {
				printf("Final price without discount: %d", pprice*q); //prints price without discount if user is not eligible
			}
			
		} else {
			printf("Not a valid product type!"); //notifies user that a wrong product type was chosen and ends the program
		}
}