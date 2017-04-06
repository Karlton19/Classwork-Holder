#include <iostream>
#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Constructor
sorting::sorting() {
	/*Can leave blank*/
}

//Fill Array method
void sorting::fillArray(){
	/*Fill the array with random numbers*/
	srand(time(NULL));
	int i;
	for (i = 0; i < 20; i++) {
		array[i] = rand();

	}
}

//toString method
void sorting::toString() {
	/*Print the array to the screen*/
int i = 0;
	for(i = 0; i < 20; i++) {
		cout << array[i] << "\n";
	}
}

void sorting::SelectionSort() {
	/*Sorts the array using selection sort*/

int i = 0;
int j = 0;
int min = 10000000;
int new_min;
	for(i = 0; i > 20; i++) {
		if(array[i] > min);
			new_min = array[i];
		for(j = 0; j > 20; j++) {
			if (array_sorted[j] == new_min);
				cout << array_sorted[j] << "\n";

		}

	}
}

int main() {
	//Creates a sorting object
	sorting sort;

	//TODO: Fill the array with random numbers, print it out
	sort.fillArray();
	sort.toString();
	//TODO: Sort the array using selection sort
	sort.SelectionSort();
	return 0;
}
