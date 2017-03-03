#include <stdio.h>
void read1(FILE *fp, char array[][14], int xcurrent);
void read2(FILE *fp, char array[][14], int xcurrent, int ycurrent);
void printflag1(FILE *fp, char array[][14], int i);
void printflag2(FILE *fp, char array[][14], int i, int j);
int main(void){
	//Open the file
	FILE *fp;
	fp = fopen("exam.txt", "r");

	//Define array
	int xdim = 5;
	int ydim = 14;
	char array[xdim][ydim];

	//Call first recursive function
	read1(fp, array, 0);

	//Call third recursive function
	printflag1(fp, array, 0);







	return 0;
}

/**
*Equivalent to the 1st for loop. Repeats 5 times, each time calling
*a new function, read2()
*Inputs: The file to be read, the array, and a counter variable (xcurrent)
*Outputs: None
**/
void read1(FILE *fp, char array[][14], int xcurrent) {
	//If the counter hits 5, stop recursing
	if (xcurrent == 5) {
		return;
	}
	//Within each recursive call, begin another recursive chain
	//Meant to read the individual characters
	read2(fp, array, xcurrent, 0);

	//Return the function with an undated counter
	return read1(fp, array, xcurrent + 1);
}

/**Equivalent to the 2nd for loop. Repeats 14 times, and each time it 
*reads a single character into the appropriate position in the array
*Inputs: The file, the array, the current line (xcurrent), and a counter
*variable (ycurrent)
*Outputs: None
**/
void read2(FILE *fp, char array[][14], int xcurrent, int ycurrent){
	//if count == 14, stop reading
	if (ycurrent == 14) {
		return;
	}
	char temp;
	//Scans in two characters: the second, '\n', is ignored
	fscanf(fp, "%c%c", &array[xcurrent][ycurrent], &temp);

	//Return the function with an updated counter
	return read2(fp, array, xcurrent, ycurrent + 1);
}

/**
*A recursive function that calls another recursive function while printing out a newline character
*Inputs: The File, the array, int i
*Outputs: Printf newline character
**/
void printflag1(FILE *fp, char array[][14], int i) {
	if (i == 5 ) {
		return;
	}
	printflag2(fp, array, i, 0);
			printf("\n");


	return printflag1(fp, array, i + 1);

}

/**
*A recursive function that prints out the contents of the array
*Inputs: The file, the array, int i, j
*Outputs: Printf the contents of the array
**/

void printflag2(FILE *fp, char array[][14], int i, int j) {
	if (j == 14) {
		return;
	}
	printf("%c", array[i][j]);
	return printflag2(fp, array, i, j + 1);

}
