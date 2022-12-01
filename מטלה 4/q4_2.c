#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void q4_2() {
	int num,rem,num2; //init vars - num
	printf("Please enter a number: ");
	scanf("%d", &num);
	num2 = num;
	int sum=0;
	do
	{
		sum = 0;
		while (num>0)
		{
			rem = num % 10;
			rem *= rem;
			sum += rem;
			num /= 10;
		}
		num = sum;
	} while (sum/10!=0);
	if (sum==1)
	{
		printf("%d is an approved number\n", num2);
	}
	else
	{
		printf("%d is not an approved number\n", num2);
	}
}
