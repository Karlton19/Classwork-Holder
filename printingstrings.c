#include <stdio.h>
int main(void){
	int max_size = 50;
	char array_name[max_size];
	/*array_name [2] = '\0';*/
	array_name[7] = '!';
	fgets(array_name, max_size, stdin);

	int i = 0;
	while (array_name[i] != '\0') {
		i++;
	}
	if(i > 0 && array_name[i-1] == '\n') {
		array_name[i -1] = '\0';
	} 

	printf("%s\n", array_name);

	return 0;
}
