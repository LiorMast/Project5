#include <stdio.h>
#define SIZE 10

int arr[SIZE] = {0}; // Declares an integer array of size 10 and initializes all elements to 0

// Function to prompt the user to enter size number of integers and store them in the array arr
void getArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		// Prompt the user to enter an item for the array
		printf("Enter item number %d for the array: ", i + 1);
		scanf_s("%d", &arr[i]);
	}
}

// Function to count the number of elements in the array whose value is their index cubed
int countCubicIndex(int arr[], int size) {

	int count = 0, cube=0;	// Declares and initializes variables to count the number of elements and to store the cubed index value
	for (int i = 0; i < size; i++)
	{
		cube = i * i * i;    // Calculates the cubed value of the current index
		if (cube == arr[i]) {// If the current element in the array is equal to the cubed index value
			count++;		 // Increment the count
		}
	}
	return  count;	// Return the count of elements whose value is their index cubed
}

void main() {
	getArray(arr, SIZE);	// Prompts the user to enter values for the array
	printf("There are %d elements in the array whose value is their index cubed", countCubicIndex(arr, SIZE));	// Prints the count of elements whose value is their index cubed
}