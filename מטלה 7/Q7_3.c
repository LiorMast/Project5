#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define CMN_SIZE 7
#define R_SIZE 4
#define L_SIZE 3

int rmat[R_SIZE][CMN_SIZE] = { 0 };
int lmat[CMN_SIZE][L_SIZE] = { 0 };
int mult[R_SIZE][L_SIZE] = { 0 };
int col[CMN_SIZE] = { 0 };

void getArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		// Prompt the user to enter an item for the array
		arr[i] = getRandomDigit();
	}
}

int getRandomDigit() {
	int digit = rand() % 9 + 1;
	return digit;
}

void getRightMatrix(int arr[R_SIZE][CMN_SIZE]) {
	for (int i = 0; i < CMN_SIZE; i++) {
		getArray(arr[i], R_SIZE);
	}
}

void getLeftMatrix(int arr[CMN_SIZE][L_SIZE]) {
	for (int i = 0; i < L_SIZE; i++) {
		getArray(arr[i], CMN_SIZE);
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		// Print the current item in the array
		printf("%d\t", arr[i]);
	}
}

void printRightMatrix(int arr[R_SIZE][CMN_SIZE]) {
	for (int i = 0; i < CMN_SIZE; i++) {
		printf("row number %d:\t|", i + 1);
		printArray(arr[i], R_SIZE);
		puts("|\n");
	}

}

void printLeftMatrix(int arr[CMN_SIZE][L_SIZE]) {
	for (int i = 0; i < L_SIZE; i++) {
		printf("row number %d:\t|", i + 1);
		printArray(arr[i], CMN_SIZE);
		puts("|\n");
	}

}

void getCol(int col[], int arr[R_SIZE][CMN_SIZE], int colnum) {
	for (int i = 0; i < CMN_SIZE; i++)
	{
		col[i] = arr[i][colnum];
	}
}

void printMultMatrix(int arr[R_SIZE][L_SIZE]) {
	for (int i = 0; i < L_SIZE; i++) {
		printf("row number %d:\t|", i + 1);
		printArray(arr[i], R_SIZE);
		printf("|\n");
	}

}

int MultArray(int row[], int col[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += row[i] * col[i];
	}
	return sum;
}

void MultMatrices(int lmat[CMN_SIZE][L_SIZE],int rmat[R_SIZE][CMN_SIZE]) {
	for (int i = 0; i < CMN_SIZE; i++)
	{
		printArray(lmat[i], CMN_SIZE);
		puts("\n");
		getCol(col, rmat, i);
		printArray(col, CMN_SIZE);
		puts("\n");
	}
}

void main() {
	srand((unsigned)time(NULL)); //init rand seed
	getRightMatrix(rmat);
	getLeftMatrix(lmat);
	printRightMatrix(rmat);
	puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printLeftMatrix(lmat);
	MultMatrices(lmat, rmat);
}