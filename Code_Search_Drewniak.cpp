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

	for (i = 0; i < 20; i++) {
		if (array[i] == num){
			cout << "Number is %d" << num;
		}
	}
}

int main() {
int num = 6;
	search linear;
	linear.linear(num);
	return 0;
}
