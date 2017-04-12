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
		array[i] = rand() % 60;
		bubble_array[i] = rand() % 60;

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
int min = 100;
int min_position;


cout << "\n";
	for(i = 0; i < 20; i++) {
		for(j = 0; j < 20; j++){
			if(array[j] < min){
				min = array[j];
				min_position = j;
			}
		}

		array[min_position] = 1000;
		array_sorted[i] = min;
		cout << array_sorted[i] << "\n";
		min = 100;
	}
	//put minimum into a new array (first time: 0, second time: 1, etc...)


}


void sorting::BubbleSort() {
	int swapped = 0;
	int i;
	int temp_min;

	while (swapped == 0) {
		swapped = 1;
		for(i = 0; i < 20; i++){
			if(bubble_array[i] > bubble_array[i+1]) {
				swapped = 0;
				temp_min = bubble_array[i+1];
				bubble_array[i+1] = bubble_array[i];
				bubble_array[i] = temp_min;
			}

		}
	}
	cout << "\n";
	for (i = 0; i < 20; i++) {
		cout << bubble_array[i] << "\n";
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

	sort.BubbleSort();

	return 0;
}
