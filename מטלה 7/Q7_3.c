#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define CMN_SIZE 7
#define R_SIZE 4
#define L_SIZE 3
#define MULCOL L_SIZE
#define MULROW R_SIZE

int lmat[R_SIZE][CMN_SIZE] = { 0 };
int rmat[CMN_SIZE][L_SIZE] = { 0 };
int mult[R_SIZE][L_SIZE] = { 0 };
int col[CMN_SIZE] = { 0 };

int ltest[R_SIZE][CMN_SIZE] = { 3, 1, 6, 8, 3, 2, 6,5, 5, 7, 2, 1, 4, 9,4, 7, 7, 1, 9, 6, 1,5, 6, 7, 8, 6, 1, 2 }; //4X7 MATRIX
int rtest[CMN_SIZE][L_SIZE] = { 5, 1, 7,4, 9, 9,2, 7, 6,8, 9, 7,9, 8, 3,5, 5, 9,2, 2, 6 };						   //7X3 MATRIX

int getRandomDigit();

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

void getLeftMatrix(int arr[R_SIZE][CMN_SIZE]) {
	for (int i = 0; i < R_SIZE; i++) {
		getArray(arr[i], CMN_SIZE);
	}
}

void getRightMatrix(int arr[CMN_SIZE][L_SIZE]) {
	for (int i = 0; i < CMN_SIZE; i++) {
		getArray(arr[i], L_SIZE);
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		// Print the current item in the array
		printf("%3d ", arr[i]);
	}
}

void printLeftMatrix(int arr[R_SIZE][CMN_SIZE]) {
	for (int i = 0; i < R_SIZE; i++) {
		printf("row number %d:\t|", i + 1);
		printArray(arr[i], CMN_SIZE);
		printf("|\n");
	}

}

void printRightMatrix(int arr[CMN_SIZE][L_SIZE]) {
	for (int i = 0; i < CMN_SIZE; i++) {
		printf("row number %d:\t|", i + 1);
		printArray(arr[i], L_SIZE);
		printf("|\n");
	}

}

void getCol(int col[], int arr[CMN_SIZE][L_SIZE], int colnum) {
	for (int i = 0; i < CMN_SIZE; i++)
	{
		col[i] = arr[i][colnum];
	}
}

void printMultMatrix(int arr[R_SIZE][L_SIZE]) {
	for (int i = 0; i < R_SIZE; i++) {
		printf("row number %d:\t|", i + 1);
		printArray(arr[i], L_SIZE);
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

void MultMatrices(int lmat[R_SIZE][CMN_SIZE], int rmat[CMN_SIZE][L_SIZE]) {
	int res = 0;
	for (int i = 0; i < MULROW; i++)
	{
		for (int j = 0; j < MULCOL; j++)
		{
			getCol(col, rmat, j);
			res = MultArray(lmat[i], col, CMN_SIZE);
			mult[i][j] = res;

		}

	}
}

void main() {
	srand((unsigned)time(NULL)); //init rand seed
	getRightMatrix(rmat);
	getLeftMatrix(lmat);
	puts("lmat\n");
	printLeftMatrix(lmat);
	puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	puts("rmat\n");
	printRightMatrix(rmat);
	puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	MultMatrices(lmat, rmat);
	printMultMatrix(mult);
}