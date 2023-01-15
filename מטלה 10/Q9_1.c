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

/*
int countWords(char* str) {
	char* start = str;
	int wordcount = 0;
	if (str == start && *str != ' ') wordcount++;
	while (*str) {
		if (*str == ' ' && *(str + 1) != '\0')
			if (*str == ' ' && *(str + 1) != ' ') wordcount++;
			
		str++;
}
	return wordcount;
}
*/

int isNotInList(char* list, char ltr) {
	while (*list)
	{
		if (*list == ltr) return 0;
		list++;
	}
	return 1;
}

char* newStr(char* str) {
	char* letters = (char*)malloc((31)*sizeof(char));
	char* start = letters;
	if(letters){
		if (*str != ' ') {
			*letters = *str;
			letters++;
		}
		while (*str) {
			if (*str == ' ' && *(str + 1) != '\0')
				if (*str == ' ' && *(str + 1) != ' ')
					if(isNotInList(start, *(str + 1))) {
					*letters = *(str + 1);
					letters++;
				}

			str++;
		}
		*letters = '\0';
	}
	else printf("Out of memory!\n");
	if(start) start = realloc(start, (strlen(start) + 1) * sizeof(char));
	return start;
}



void main() {
	char* ptrstr = NULL;
	char str[SIZE];
	getUserInput(str, SIZE);
	ptrstr = newStr(str);
	printf("%s\n", ptrstr);
	free(ptrstr);
	
}