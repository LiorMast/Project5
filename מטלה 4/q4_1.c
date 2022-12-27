#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void q4_1()
{
	int minTime = 0, sum = 0, time; //init vars - mintime holds the lowest time recorded, sum holds the sum of all times recorded time holds user input and avgtime holds the average at the end
	float avgTime;
	// Calculate and display the average time for 8 assignment and the fastest time
		for (int i = 1; i < 9; i++) {
			printf("Please enter a run time for the %d assignment\n", i);
			scanf("%d", &time);
			if (i == 1) {
				minTime = time; //sets initial value for mintime
			}
			if (time < minTime) { //checks if current result is minimal to keep mintime accurate
				minTime = time;
			}
			sum += time; //summing up all the times
		}
	avgTime = (float)sum / 8; //calculating the average time
	printf("the avg is %f and the minimum time is %d", avgTime, minTime); //printing the average and minimal times
}
