#include <stdio.h>
#define SIZE 5
void main()
{
	int arr[SIZE] = {1, 5, 18, 20, 34};
	int s = 0;
	for (int i = 1; i < SIZE - 1; i++)
		if (arr[i - 1] < arr[i] && arr[i] < arr[i + 1])
			s += 1;
	printf("s = %d", s);
}