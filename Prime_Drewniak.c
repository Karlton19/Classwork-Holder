#include <stdio.h>
int main(void) {
int size = 100;
int array[size];


	FILE *fp;

fp = fopen("prime.txt","w");
int i;
int j;
	for (i = 0; i <= 100; i++) {
		for (j = 2; j < array[i]; j++) {
			if (array[i] % j == 0) {
				array[i] = 1;
					fprintf(fp, "%d\n", array[i]);

	}
		}
			}
fclose(fp);

	return 0;



}
