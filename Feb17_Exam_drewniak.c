#include <stdio.h>
void counter(int num1, int num2, int count, char array[num1][num2], FILE *fp);
int main(void) {
int num1 = 5;
int num2 = 14;
int count;
char array[num1][num2];

FILE *fp;
fp = fopen("exam.txt", "r");

	counter(1);


	fclose(fp);





	return 0;

}

void counter(int num1, int num2, int count, char array[num1][num2], FILE *fp) {
	if (count == 70) {
		return;
	}fscanf(fp, "%c", &array[num1][num2]);
	return counter(count + 1);
}
