#include <stdio.h>

// Constant for the size of the array
#define SIZE 10

// Declare an array of size SIZE initialized to all 0s
int arr[SIZE] = { 0 };

// Function to prompt the user to enter size number of integers and store them in the array arr
void getArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		// Prompt the user to enter an item for the array
		printf("Enter item number %d for the array: ", i + 1);
		scanf_s("%d", &arr[i]);
	}
}
// Function to print the elements of the array arr
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		// Print the current item in the array
		printf("%d\t", arr[i]);
	}
}
// Function to return the sum of the digits of num
int sumDigit(int num) {
	int sum = 0, digit;
	// Loop until num becomes 0
	while (num > 0) {
		// Get the last digit of num
		digit = num % 10;
		// Add the digit to the sum
		sum += digit;
		// Remove the last digit from num
		num /= 10;
	}
	return sum;
}

// Function to return the number of even divisors of num
int countEvenDivisors(int num) {
	//adding one to include the number itself
	int counter = 1;
	// Loop through all the possible even divisors of num except for itself
	for (int i = 2; i < (num / 2) + 1; i += 2) {
		// If i is a divisor of num, increment the counter
		if (num % i == 0) {
			counter++;
		}
		else {
			// If i is not a divisor, move on to the next number
			continue;
		}
	}
	return counter;
}

// Function to return 1 if num is a "beautiful" number, and 0 otherwise
// A "beautiful" number is defined as a number that has the same number of even divisors as the sum of its digits
int isBeautiful(int num) {
	//checks if the number has the same number of even divisors as the sum of its digits
	if (countEvenDivisors(num) == sumDigit(num)) {
		return 1;
	}
	else
	{
		return 0;
	}
}

// Function to return 1 if the number of "beautiful" numbers in the array arr is greater than the number of non-beautiful numbers, and 0 otherwise
int isBeautifulArray(int arr[], int size) {
	int beautifulCount = 0, nonBeautifulcount = 0; //counter for beautiful and non-beautiful numbers
	// Loop through all the items in the array
	for (int i = 0; i < size; i++) {
		// If the current item is a "beautiful" number, increment the beautifulCount
		if (isBeautiful(arr[i])) {
			beautifulCount++;
		}
		else  // If the current item is not a "beautiful" number, increment the nonBeautifulcount
		{
			nonBeautifulcount++;
		}
	}
	//if the number of "beautiful" numbers in the array is greater than the number of non-beautiful numbers - returns 1, otherwise returns 0
	if (beautifulCount > nonBeautifulcount) {
		return 1;
	}
	else
	{
		return 0;
	}
}

void main() {
	getArray(arr, SIZE); // Get the array from the user

	if (isBeautifulArray(arr, SIZE)) { // Check if the array is beautiful, and prints the result
		puts("Beautiful array\n");
	}
	else
	{
		puts("Non beautiful array\n");
	}
	
}
