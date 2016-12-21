#include <stdio.h>

int main(void){
	int num1;
	int num2;


	scanf("%d", &num1);
	scanf("%d", &num2);



	if (num1 < 0) {
                printf("\nCan't enter a negative number for Score 1");
}
        if (num2 < 0 ) {
                printf("\nCan't enter a negative number for Score 2");
}
	if (num1 > num2) {
                printf("\nScore 1 is greater - Cleveland wins");
}
	if (num1 < num2) {
                printf("\nScore 2 is greater - Cleveland wins");
}
	else if (num1 == num2) {
		printf("\nTie game - Cleveland wins");
}


	if (num1 == 0 || num2 == 0) {
                printf("\n Shutout for Cleveland");
}
	else if (num1 > num2) {
                printf("\nScore 1 is %d times greater than Score 2", num1/num2);
}
        else if (num1 < num2) {
                printf("\nScore 2 is %d times greater than Score 1", num2/num1);
}



	return 0;
}
