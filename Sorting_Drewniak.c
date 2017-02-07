#include <stdio.h>
int main(void) {
int size = 10;
int array[size];

	FILE *fp;
	FILE *fp2;

/*opens files*/
fp = fopen("numbers.txt", "r");
fp2 = fopen("sorted_numbers_drewniak.txt", "w");

/*
Input: Array values via fscanf statement
Output: Void
Description: A for loop that scans in values of an array
*/
int i, j;
	for (i = 0; i < 10; i++) {
		fscanf(fp, "%d", &array[i]);

	}
/*int zero = array[8];
int first = array[2];
int second = array[5];
int third = array[1];
int fourth = array[7];
int fifth = array[6];
int sixth = array[0];
int seventh = array[4];
int eigth = array[9];
int ninth = array[3];

fprintf(fp2,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", zero, first, second, third, fourth, fifth, sixth, seventh, eigth, ninth);
*/

int min = 1000;
int temp_min = min;
int flag = 0;

	for (j


fclose(fp);
fclose(fp2);

	return 0;

}
