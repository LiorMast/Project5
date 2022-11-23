#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void q4_3b() {

	int input = 0, star;
	printf("Please enter a number:");
	scanf("%d", &input);

	for (int row = 0; row < input; row++)
	{
		for (int col = 0; col < input; col++)
		{
			if (col==row)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}