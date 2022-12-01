#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void q4_3b() {

	int input = 0, oprow = 1; //init vars - input for user input 
	printf("Please enter a number:");
	scanf("%d", &input);
	input *= 2;
	input++;
	int opcol = input;
	for (int row = 1; row < input+1; row++)
	{
		for (int col = 1; col < input+1; col++)
		{
			if (col==row || (row==oprow && col==opcol))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
		oprow++;
		opcol--;
	}
}
