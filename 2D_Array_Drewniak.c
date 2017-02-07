#include <stdio.h>
int main(void) {

int test[3][2] = { {4, 5}, {6, 7}, {8, 9}};
int i, j;

	for (i = 0; i < 3; i++) {
		printf("\n");
		for (j = 0; j < 2; j++) {
			printf("%d", test[i][j]);
		}

	}


	return 0;
}
