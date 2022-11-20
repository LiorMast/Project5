#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void q3_1() {
	int num1, num2; //init vars - num1 and num2 are user inputs
	
	//getting input from user
	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > 0 && num2 < 0 || num2 > 0 && num1 < 0) //if num1 is greater than 0 and num2 isn't or vice versa, prints opposite signs, otherwise prints identical signs.
	{
		puts("opposite signs\n"); //printing opposite signs
	}
	else
	{
		puts("identical signs\n"); //printing identical signs
	}
}
