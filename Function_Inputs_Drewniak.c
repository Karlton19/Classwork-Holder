#include <stdio.h>
int add_together(char num1, char num2);
int main (void) {
	char a_num;
	char another_num;
	printf("Enter two characters: ");
	scanf("%c", &a_num);
	scanf("%c", &another_num);

	/*Adds two characters together. and stores them in a new integer variable*/
	int difference = add_together(a_num, another_num);
	printf("Difference: %d\n", difference);

	return 0; 
}



/**
*Takes two characters and adds them together
*Inputs: Two characters
*Output: An integer, the sum of the two inputs
**/

int add_together(char num1, char num2) {
	return (num1 - num2);
}
