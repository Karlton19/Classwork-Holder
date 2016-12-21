#include <stdio.h>
#include <string.h>
int main(void){

	int max_size = 10;
	int check = 2;
	int j;
	char username[max_size];
	char password[max_size]; 
	char password2[max_size]; 



while (check != 0) {

	printf("Enter a username");
	fgets(username, max_size, stdin);

	printf("Enter a password");
	fgets(password, max_size, stdin);

	printf("Re-enter the password");
	fgets(password2, max_size, stdin);
	if (strcmp(password, password2) == 0) {
		for(j = 0; j < strlen(password); j++) {
			if(password[j] == '!' || password[j] == '?') {
				check = 0; 
			}
		}
	}
}


	return 0;

}
