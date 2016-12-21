/*Unique Variables:Infinite?*/

/*
*Description:
*Input:
*Output:
**/

#include <stdio.h>
void change(int shift, char num1);
int main(void) {
	int shift = 13;
	int i = 1;
	char num1;

while (i == 1) {
		printf("Enter a letter\n");
			scanf("%c", &num1);
				change(shift, num1);

	}
	return 0;
}


/*
*Description:
*Input:
*Output:
**/
void change(int shift, char num1) {



	if (num1 >= 65 && num1 <= 77) {
        printf("The first letter is %c\n", num1 + shift);
    	}
   	else if (num1 >= 78 && num1 <= 90) {
        printf("The first letter is %c\n", num1 - shift);
	}


	if (num1 >= 97 && num1 <= 109) {
        printf("The first letter is %c\n", num1 + shift);
    	}
   	else if (num1 >= 110 && num1 <= 122) {
        printf("The first letter is %c\n", num1 - shift);
    	}


		}
