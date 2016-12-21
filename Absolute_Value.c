

#include <stdio.h>
int abb(int num1);
int main(void) {
	int num1;
	scanf("%d", &num1);
	int abs_num1;
	printf("Abs_num1: %d\n", abs_num1);
	abs_num1 = abb(num1);
	printf("Original value: %d\nNew value: %d\n", num1, abs_num1);
	return 0;
}

int abb(int num1) {
	num1 = num1 + 42;
	printf("Inside abs: %d\n", num1);
	return num1;
}
