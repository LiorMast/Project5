#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void q3_1() {
	int num1, num2; //init vars for user input
	
	//getting user input - taking two ints
	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > 0 && num2 < 0 || num2 > 0 && num1 < 0) //if the first number is greater than zero and the other isn't or vice versa prints opposite signs, otherwise prints identical signs
	{
		puts("opposite signs\n"); //printing opposite signs
	}
	else
	{
		puts("identical signs\n"); //printing identical signs
	}
}
