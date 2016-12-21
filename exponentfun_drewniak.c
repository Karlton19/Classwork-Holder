#include <stdio.h>
void calculation(int *result, int *exponent, int *base);
int main(void) {
int base;
int exponent;
int result;

	printf("Enter a base and then a exponent immediately after");
		scanf("%d", &base);
		scanf("%d", &exponent);

	calculation(&result, &exponent, &base);

	printf("The result is: %d\n", result);

	return 0;

}

void calculation(int *result, int *expo, int*base){
	int i;
	*result = 1;
	for (i = 0; i < *expo; i++){
		*result = (*result) * (*base);
	}
}
