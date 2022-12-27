#include <stdio.h>
#define MAX_SIZE 10

#include <stdio.h>

// Function to print the elements of the array arr
void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        // Print the current item in the array
        printf("%.2f\t", arr[i]);
    }
}

// Calculates the sum of the digits of a number
int sumOfDigits(int number) {
    int sum = 0;
    // Repeatedly divide the number by 10 and add the remainder to the sum
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// Counts the number of even divisors of a number
int countEvenDivisors(int number) {
    int count = 1;
    // Check all divisors of the number up to half of its value
    for (int i = 1; i <= number / 2; i++) {
        // If the divisor is even and divides the number evenly, increment the count
        if (number % i == 0 && i % 2 == 0) {
            count++;
        }
    }
    return count;
}

// Determines whether a number is beautiful
int isBeautiful(int number) {
    // Calculate the sum of the digits and the count of even divisors
    int digitSum = sumOfDigits(number);
    int evenDivisorCount = countEvenDivisors(number);
    // A number is beautiful if the sum of its digits is equal to the number of even divisors it has
    return digitSum == evenDivisorCount;
}

// Determines whether an array contains more beautiful numbers than non-beautiful numbers
int isBeautifulArray(int arr[], int size) {
    int beautifulCount = 0;
    int nonBeautifulCount = 0;
    // Iterate through each element in the array
    for (int i = 0; i < size; i++) {
        // Check if the number is beautiful and increment the appropriate counter
        if (isBeautiful(arr[i])) {
            beautifulCount++;
        }
        else {
            nonBeautifulCount++;
        }
    }
    // Return 1 if there are more beautiful numbers than non-beautiful numbers
    return beautifulCount > nonBeautifulCount;
}


//halfSort - sorts a double array such that the non-negative numbers are in the beginning of the array,
//and the positive numbers are placed after them in the array.
 
void halfSort(double arr[], int n)
{
    // Initialize two variables, one at the beginning of the array and one at the end
    int i = 0;
    int j = n - 1;

    // Keep going until the variables cross each other
    while (i < j)
    {
        // Move i forward until it finds a negative number or reaches the end of the array
        while (arr[i] >= 0 && i < j)
        {
            i++;
        }

        // Move j backward until it finds a non-negative number or reaches the beginning of the array
        while (arr[j] < 0 && i < j)
        {
            j--;
        }

        // If the variables have not crossed each other, swap the elements at those indices
        if (i < j)
        {
            double temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    printArray(arr, MAX_SIZE);
}



void getArray()
{
    // Declare an array to hold the input values
    double arr[MAX_SIZE];

    // Declare a variable to hold the size of the array
    int n;

    // Prompt the user for the size of the array
    printf("Enter the size of the array: ");
    scanf_s("%d", &n);

    // Prompt the user for the values in the array
    printf("Enter the values in the array, separated by spaces: ");
    for (int i = 0; i < n; i++)
    {
        scanf_s("%lf", &arr[i]);
    }

    // Sort the array
    halfSort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf ", arr[i]);
    }

}

void main() {
    //getArray();
    int arr1[] = { 1,2,-3,4 - 5,6,7,-8,9,-24 };
    halfSort(arr1, MAX_SIZE);
    //printf("Result: %d\n", result);
}