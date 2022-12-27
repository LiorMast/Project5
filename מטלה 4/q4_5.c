#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void q4_5() {
	int x = 0,i=0;
	while (1)
	{
		if (i<x+1)
		{
			++x;
			if (x < 10)
			{
				if (x % 2)
					printf("i = %d x = %d\n", i, x);
				i++;
				continue;
			}
			else
			{
				break;
			}
		}
		
		
	}
}
