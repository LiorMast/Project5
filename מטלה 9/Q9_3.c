#include <stdio.h>
#include <string.h>

#define SIZE 15

// Gets a password from the user
void getPassword(char* str, int size) {
	char temp[SIZE * 8] = { '\0' };
	printf("Please enter a password (max size %d): \n", size-1);
	for (int i = 0; i < 1; i++) // Loop to get password
	{
		printf("The password: ");
		scanf_s("%s", temp, size * 8); // Read password into temp string
		if (strlen(temp) >= size) { // Check if password is too long
			printf("Password is too long, try again.\n");
			i--; //Retry
		}
		else { // If the password is not too long, copy it into str and exit the loop.
			strcpy_s(str, size, temp);
		}
	}
}


// IsPassStrong returns 1 if the password str is strong and 0 if it is not.
// A strong password is defined as one that has at least 5 characters,
// and includes at least one capital letter, one number, and one symbol.
int IsPassStrong(char* str) {
	if (strlen(str) < 5) return 0; // check if the password is at least 5 characters long
	int isNum = 0, isCap = 0, isSym = 0;
	while (*str != '\0') {
		if (*str >= '0' && *str <= '9') isNum++; // Check if the current character is a number.
		else if (*str >= 'A' && *str <= 'Z') isCap++; // Check if the current character is a capital letter.
		else if (*str == '@' || *str == '#' || *str == '!' || *str == '%') isSym++; // Check if the current character is a symbol.
		str++;
	}
	return (isNum && isCap && isSym); // Return 1 if the password has at least one number, capital letter, and symbol.
}

// displayAnswer prints whether the password str is strong or not.
void displayAnswer(char* str) {
	if (IsPassStrong(str)) printf("The password is strong\n");
	else  printf("The password is not strong\n");
}

void main() {
	char pass[SIZE]; //Array to store the password
	getPassword(pass, SIZE); //Get password from user
	displayAnswer(pass); //Display the result of IsPassStrong
}