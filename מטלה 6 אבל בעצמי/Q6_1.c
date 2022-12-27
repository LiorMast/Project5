#include <stdio.h>
#define SIZE 10

int arr[SIZE] = { 0 }; // initialize all elements of the array to 0

void main() {
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		// Prompt the user to enter an item for the array
		printf("Enter item number %d for the array: ", i + 1); // store the input in the array
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < SIZE; i+=2) {
		sum += arr[i]; // add the value of the element at even indices to sum
	}
	// print the sum and average of the numbers in even positions
	printf("The sum of the numbers in even positions is %d and the average is %.2f\n", sum, sum / 5.0);

	int sum1 = sum; // store the sum of the even elements in a new variable for comparison later
	sum = 0; // reset sum to 0 for new computation
	for (int i = 1; i < SIZE; i += 2) {
		sum += arr[i]; // add the value of the element at odd indices to sum
	}
	// print the sum and average of the numbers in odd positions
	printf("The sum of the numbers in odd positions is %d and the average is %.2f\n", sum,sum/5.0);

	// compare the sum of the even and odd elements, and print the larger average
	if (sum1>sum)
	{
		printf("The bigger average is %.2f", sum1/5.0);
	}
	else printf("The bigger average is %.2f", sum/5.0);

}