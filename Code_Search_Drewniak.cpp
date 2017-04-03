#include <iostream>
#include "Code_Search_Drewniak.h"
using namespace std;




search::search(){
	int i;

	for (i = 0; i < 20; i++) {
		array[i] = i;
	}

	int j;

	for (j = 0; j < 10000; j++) {
		large_array[j] = j;


	}




}

void search::linear(int num1){
	int i;
	int index = 0;


	for (i = 0; i < 20; i++) {
		if (array[i] == num1){
				cout << "Number is: " << i << "\n";
					break;

		}
	}


}


void search::binary(int num2){
	int j;
	int index = 0;


}



#include <ctime>
int main() {
/*
clock_t begin = clock();

code_to_time(); //code that will be timed

clock_t end = clock();


//CLOCKS_PER_SEC is the number of “clock ticks” per second
cout << “Number of seconds: “ << double (begin - end) / CLOCKS_PER_SEC;
*/








int num1 = 6;
	search linear;
	linear.linear(num1);

/*
int num2 = 4700;
	search binary;
	binary.binary(num2);
*/

	return 0;
}
