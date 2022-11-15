#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void q3_4() {

srand((unsigned)time(NULL));

int x = rand() %  900 + 100;
x = 153;
int units = x % 10;
int tens = x % 100 / 10;
int hunds = x / 100;

units = units * units * units;
tens = tens * tens * tens;
hunds = hunds * hunds * hunds;

printf("The number %d is%s a triple number", x, (units + tens + hunds == x) ? "" : " not");


}