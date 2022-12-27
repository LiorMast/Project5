#include <stdio.h>

// Constant for the size of the array
#define SIZE 10

// Declare an array of size SIZE initialized to all 0s
double arr[SIZE] = {0};

// Function to prompt the user to enter size number of integers and store them in the array arr
void getArray(double arr[], int size) {
	double temp = 0;
	for (int i = 0; i < size; i++) {
		// Prompt the user to enter an item for the array
		printf("Enter item number %d for the array: ", i + 1);
		scanf_s("%lf", &arr[i]);
	}
}
// Function to print the elements of the array arr
void printArray(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		// Print the current item in the array
		printf("%.2f\t", arr[i]);
	}
}

// halfSort is a function that takes in an array of doubles and the size of the array
// as arguments. It sorts the array such that all negative numbers come before all
// non-negative numbers.
void halfSort(double arr[], int size) {

	// Declare a temporary variable to hold a value during swapping, and variables
	// i and j to keep track of the current indices being compared.
	double temp = 0;
	int i = 0, j = size - 1;

	// Keep looping until the indices meet in the middle of the array.
	while (i<j) {

		// If the current element at index i is negative and the current element at index j
		// is non-negative, swap the two elements and move both indices towards the center.
		if (arr[i] < 0 && arr[j]>=0) {
									 
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
			// Skip the rest of the loop iteration and go back to the start.
			continue;
		}
		// If the current element at index i is non-negative, move i towards the center.
		else if (arr[i] >= 0) {
			i++;
		}
		// If the current element at index j is negative, move j towards the center.
		else if (arr[j] < 0) {
			j--;
		}
	}
	// Call the printArray function to print the sorted array.
	printArray(arr, SIZE);
}

void main() {
	getArray(arr, SIZE); // Get the array from the user
	halfSort(arr, SIZE); //half sort the array and print the result
}
