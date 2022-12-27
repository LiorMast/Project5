#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void q4_3b() {

	int input = 0; //init vars - input for user input, opcol is used to determine the location of the second diagonal of the X
	printf("Please enter a number:");
	scanf("%d", &input);
	//offsets the value of the input to be 2 * input + 1 since that's the only way the program works
	input *= 2;
	input++;
	int opcol = input;
	//two for loops create a grid where the outside loop is for rows and the inside loop is for colomns. a "*" is printed when a col is equal to a row or when opcol is equal to col while opcol is counting backwards
	for (int row = 1; row < input+1; row++)
	{
		for (int col = 1; col < input+1; col++)
		{
			if (col==row || (col==opcol))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n"); //ending the current row by dropping a line
		opcol--; //decrementing opcol so he counts backwards
	}
}
