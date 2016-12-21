#include <stdio.h>
int main(void) {
char char1;
char *memory_of_char1 = &char1;

printf("Enter a letter\n");
scanf("%c", &char1);

	if (char1 >= 65 && char1 <= 77) {
	*memory_of_char1 = *memory_of_char1 + 13;
	}
	else if (char1 >= 78 && char1 <= 90) {
	*memory_of_char1 = *memory_of_char1 - 13;
	}



	printf("%c", char1);

	return 0;
}
