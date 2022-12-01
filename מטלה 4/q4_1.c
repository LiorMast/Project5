#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void q4_1()
{
	int minTime = 0, sum = 0, time;
	float avgTime;
	// Calculate and display the average time for 8 assignment and the fastest time
		for (int i = 1; i < 9; i++) {
			printf("Please enter a run time for the %d assignment\n", i);
			scanf("%d", &time);
			if (i == 1) { 
				minTime = time;
			}
			if (time < minTime) {
				minTime = time;
			}
			sum += time;
		}
	avgTime = (float)sum / 8;
	printf("the avg is %f and the minimum time is %d", avgTime, minTime);
}
