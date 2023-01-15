#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50 //size of string

void getUserInput(char* str, int size) {
	char temp[SIZE * 8] = { '\0' };
	printf("Please enter a string (max size %d): \n", size - 1);
	for (int i = 0; i < 1; i++) // Loop to get string
	{
		printf("The string: ");
		gets_s(temp, size * 8); // Read string into temp string
		if (strlen(temp) >= size) { // Check if string is too long
			printf("String is too long, try again.\n");
			i--; //Retry
		}
		else { // If the string is not too long, copy it into str and exit the loop.
			strcpy_s(str, size, temp);
		}
	}
}

//function that checks if a letter is not in a string of letters
int isNotInList(char* list, char ltr) {
	while (*list)
	{
		if (*list == ltr) return 0; //if the letter is found return 0
		list++;
	}
	return 1; //if it is not found return 1
}

//function that takes a string and returns a new string that contains every first letter of every word.
//a letter does not appear in the list more than once.
char* newStr(char* str) {
	char* letters = (char*)malloc((31)*sizeof(char)); //allocate an array for the list
	//(we shrink the array to the desired size after all of the letters have been obtained).
	char* start = letters; //pointer to the start of the list so we can return it
	if(letters){ //if the allocation is successful
		if (*str != ' ') { //take the first letter of the first word if it isn't space
			*letters = *str;
			letters++;
		}
		while (*str) {
			if (*str == ' ' && *(str + 1) != '\0')
				if (*str == ' ' && *(str + 1) != ' ')
					if(isNotInList(start, *(str + 1))) { //for every other letter check for a pair of a space and a non-space
														//and check if we already have the non-space letter in the list.
					*letters = *(str + 1);
					letters++;
				}

			str++;
		}
		*letters = '\0'; //add \0 at the end of the list to turn it to a string
	}
	else printf("Out of memory!\n");
	if(start) start = realloc(start, (strlen(start) + 1) * sizeof(char)); //shrink the size of the string to perfectly fit the string size
	return start; //return the list
}



void main() {
	char* ptrstr = NULL; //pointer to hold the list
	char str[SIZE]; //string to hold user input
	getUserInput(str, SIZE); //get user input to string
	ptrstr = newStr(str); //get the list
	printf("%s\n", ptrstr);//display the list
	free(ptrstr); //free the list from memory after we're done with it
	
}