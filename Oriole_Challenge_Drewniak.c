#include <stdio.h>
int main(void){
char next_char = ' ';
int A = 0;
int C = 0;
int G = 0;
int T = 0; 


FILE *fp;
fp = fopen("./Desktop/sequence.txt","r");
	while (next_char != EOF) {
		next_char = getc(fp);
			if(next_char == 'A') {
				A++;
			}
			else if(next_char == 'C') {
				C++;
			}
			else if(next_char == 'G') {
				G++;
			}
			else if(next_char == 'T') {
				T++;
			}
	}
fclose(fp);

printf("%d A's, %d C's, %d, G's, %d, T's", A, C, G, T);
	return 0;

}
