#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void q3_2()
{
	int age, height;
	printf("please enter age and height: ");
	// here we type the details of the job candidate
	scanf_s("%d %d", &age, &height);
	// If the candidate is between the ages of 20-40 or 50-80 and also has a height of 180, he will be hired
	if (((age >= 20 && age <= 40) || (age >= 50 && age <= 80)) && (height >= 180))
		printf("Accepted");

	// If the candidate does not meet the requirements, he will not be hired
	else
		printf("not accepted to the company");
}
