#include <stdio.h>

int elapsedtime(int time1, int time2)
{
	//checks if the time input is correct
	if ((time1 < 1200 || time2 < 1200) || (time1 > 2359 || time2 > 2359) || (time1%100>59)||(time2%100>59)) {
		return -1;
	}

	int minutes1 = time1 % 100; // get the minutes of time1
	int hours1 = time1 / 100; // get the hours of time1

	int minutes2 = time2 % 100; // get the minutes of time2
	int hours2 = time2 / 100; // get the hours of time2

	int elapsed_hours = hours2 - hours1; // calculate the difference in hours
	int elapsed_minutes = minutes2 - minutes1; // calculate the difference in minutes

	// calculate the total elapsed time in minutes
	int elapsed_time = elapsed_hours * 60 + elapsed_minutes;

	//code to make sure the result stays positive
	if(elapsed_time>0){ 
		return elapsed_time;
	}
	else {
		return -1*elapsed_time;
	}
}

void displayMins() {
	
	int inp1, inp2; // variables to hold the two time points entered by the user

	printf("This program calculates the time passed in minutes between two given time points in the format HHMM ranging from 1200 to 2359\n");
	printf("Please enter the first time point: ");
	scanf_s("%d", &inp1); // read the first time point from the user
	printf("Please enter the second time point: ");
	scanf_s("%d", &inp2);  // read the second time point from the user

	int time = elapsedtime(inp1, inp2); // calculate the time difference in minutes using the elapsedtime() function
	if (time ==-1){ // if the elapsedtime() function returned an error code (-1)
		printf("Error\n"); // print an error message
		return;
	}
	else { 
		printf("The time passed is %d minutes\n", time); // print the time difference in minutes
		return;
	}

}


int sumPosDigit(int num, int digit) {

	// This function calculates the sum of the positions of all occurrences
	// of the digit in the given num.

	// Initialize the variables res, sum, and pos with 0, 0, and 1, respectively.

	int res=0, sum=0, pos=1;


	// Check if the digit is in the range 0 to 9 (inclusive) and if num is non-negative.
	// If either of these conditions is not satisfied, return -1.

	if ((digit > 9 || digit < 0) || num < 0)
	{
		return -1;
	}

	// Loop through the digits of num from the least significant to the most significant.
	// For each digit, check if it is equal to the digit. If it is, add its position
	// to the running sum. Then, increment the position by 1.

	while (num>0)
	{
		res = num % 10;
		if (res==digit)
		{
			sum += pos;
		}
		pos++;
		num /= 10;
	}

	// Return the sum of the positions of all occurrences of the digit in num.

	return sum;
}


 //Computes the length of a number.
 //returns The length of the number.
 

int numLength(int num) {
	int count = 0;
	while (num > 0) {
		num /= 10;
		count++;
	}
	return count;
}


int sumNoDigit(int num, int pos) {

	// Check if num has more than 9 digits or pos is greater than the number of digits in num.
	// If either of these conditions is true, return -1.

	int len = numLength(num);
	if (len > 9 || pos > len) return -1;
	
	// Initialize the variables res, sum, and temp with 0, 0, and num, respectively.

	int res = 0, sum = 0, temp = num;

	// Loop through the digits of num from the least significant to the most significant.
	// For each digit, check if its position is not equal to pos.
	// If it is not, add its value to the running sum.

	for (int i = 0; i < pos; i++)
	{
		res = num % 10;
		sum += res;
		num /= 10;
	}

	// Check if the sum of the digits of num that are not in the position pos
	// is equal to the sum of the positions of all occurrences of pos in num.
	// If it is, return 1. Otherwise, return 0.

	if (sum == sumPosDigit(temp, pos))
		 return 1;
	else return 0;
	
}




void main() {
	/*
	//Taking two numbers from the user
	int inp1, inp2;
	printf("Please enter a number with a maximum of 9 digits: ");
	scanf_s("%d", &inp1);
	printf("Please enter a digit from 0 to 9: ");
	scanf_s("%d", &inp2);
	
	//Using a switch statement to match a proper response to the output of SumNoDigit:
	//printing error when the function returns -1, not equal when the function returns 0 and equal when the function returns 1

	switch (sumNoDigit(inp1,inp2)) {
	case -1:
		printf("Error: unexpected input\nExiting program...");
		break;
	case 0:
		printf("The sum of the %d digits in the number %d is not equal to the sum of the ordinal places in which the digit %d appeared in the number %d", inp1, inp2, inp1, inp2);
		break;
	case 1:
		printf("The sum of the %d digits in the number %d is equal to the sum of the ordinal places in which the digit %d appeared in the number %d", inp1, inp2, inp1, inp2);
		break;
	}
		*/

	displayMins();


}