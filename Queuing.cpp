#include <iostream>
#include "Queuing_Cashier.h"
#include "Queuing_T1.h"
#include "Queuing_T2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Constructor
cashier::cashier() {

}

theory1::theory1() {

}

theory2::theory2() {

}







void cashier::fillArray(){

}


int GetOpen(){

return open;

}


void ChangeStatus(){




}






void theory1::fillArray(){
	srand(time(NULL));
	int i;
	for (i = 0; i < 100; i++) {
		a1[i] = rand() % 1000;
		a2[i] = rand() % 1000;
		a3[i] = rand() % 1000;

	}
}

void theory1::Pop(){

}






void theory2::fillArray(){
      srand(time(NULL));
        int i;
        for (i = 0; i < 100; i++) {
                a1[i] = rand() % 1000;


	}

}

void theory2::Pop(){

}







int main() {


	return 0;
}

