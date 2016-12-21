#include <stdio.h>
int main(void) {

	printf("Enter the width: ");
	int width;
	scanf(" %d", &width);


	printf("Enter the height: ");
	int height;
        scanf(" %d", &height);

	/*Two counter variables*/
	int i = 0;
	int j = 0;
	for(i = 0; i < height; i++) {
		for(j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
