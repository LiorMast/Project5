#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void q3_1() {
	int num1, num2;
	
	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > 0 && num2 < 0 || num2 > 0 && num1 < 0)
	{
		puts("opposite signs\n");
	}
	else
	{
		puts("identical signs\n");
	}
}
