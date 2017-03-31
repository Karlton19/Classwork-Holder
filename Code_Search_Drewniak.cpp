#include <iostream>
#include "Code_Search_Drewniak.h"
using namespace std;

search::search(){
int i;

	for (i = 0; i < 20; i++) {
		array[i] = i;
	}

}

void search::linear(int num){
	int i;
	int index = 0;
	int calc_num = 0;


	for (i = 0; i < 20; i++) {
		if (array[i] == num);
			calc_num = calc_num + 1;
		if (index >= array[20] || index !=num);
			

	cout << "Number is: " << num << "\n";
	cout << "Number of Calculations test: " << calc_num << "\n";

	}

}




int main() {
int num = 6;
	search linear;
	linear.linear(num);
	return 0;
}
