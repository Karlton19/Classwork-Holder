#include <iostream>
#include "Code_Search_Drewniak.h"
using namespace std;

search::search(){

}

void search::linear(int num){

	cin >> num;

	int i;

	for (i = 0; i < 20; i++) {
		if (array[i] == num){
			cout << "Number is %d" << num;
		}
	}
}

int main() {

	return 0;
}
