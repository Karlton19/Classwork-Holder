
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

	/*While loop for column*/
	while (i < height) {
	 	while (j < width) {
			/*While loop code goes here*/
		printf("*");
		j++;
		}
		printf("\n");
		j = 0;
		i++;
	}

	return 0;

}
