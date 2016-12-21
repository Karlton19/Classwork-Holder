#include <stdio.h>
int main(void) {
	int length, i;
	printf("How long should the array be?");
	scanf("%d", &length);

	int fib_array[length];
	fib_array[0] = 1;
	fib_array[1] = 1;

	for (i = 2; i <= length; i++) {
		fib_array[i] = fib_array[i-1] + fib_array[i-2];


	printf("%d\n", fib_array[i]);


	}


	return 0;
}
