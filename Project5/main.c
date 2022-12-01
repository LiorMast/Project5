#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void test() {
	int num, a = 0;
	printf("Please enter a number:\n");
	scanf("%d", &num);
	for (int i = 1; i < num; i++) {
		if (num % i == 0)
			a += i;
	}
	printf("a is %d\n", a);
}

void main() {
	test();
}
