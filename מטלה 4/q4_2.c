#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void q4_2() {
	int num,rem,num2; //init vars - num holds user input, rem holds the sepeerated digit currently being worked on, num2 holds the original value of num for final printing
	printf("Please enter a number: ");
	scanf("%d", &num);
	num2 = num;
	int sum=0; //sum holds the approved number
	do
	{
		sum = 0; //resetting sum for calculation of new number
		//this loop seperates each digit of a given number num, then squares it and sums the result
		while (num>0)
		{
			rem = num % 10;
			rem *= rem;
			sum += rem;
			num /= 10;
		}
		num = sum; //setting the result as the new number to enter through the loop

	} while (sum/10!=0); //loop stops if the output number is < 10


	if (sum==1) //if the result is one the number is approved and if not then it's not
	{
		printf("%d is an approved number\n", num2);
	}
	else
	{
		printf("%d is not an approved number\n", num2);
	}
}
