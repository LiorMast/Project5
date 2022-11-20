#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void q3_4() {

srand((unsigned)time(NULL)); //init rand seed

//init vars - x is a random number between 100 and 999, units is the first digit of that number, tens is the secind digit and hunds is the third

int x = rand() %  900 + 100;
int units = x % 10;
int tens = x % 100 / 10;
int hunds = x / 100;

//multiplying the digits by themselves three times to check if they're a triple number
units = units * units * units;
tens = tens * tens * tens;
hunds = hunds * hunds * hunds;

printf("The number %d is%s a triple number", x, (units + tens + hunds == x) ? "" : " not");	//summing the results of the previous calculation and checking if it's equal to the original number,
																							//if it is we print that it is a triple number and if it's not we print that it's not a triple number


{

}
}