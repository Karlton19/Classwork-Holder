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


void theory1::Run(){
int front;
int back;
int i;
int j;
int k;
int l;

for (i = 0; i < 100; i++) {

	for(j = 0; j < a1[i]; j++) {

		}


   	for(k = 0; k < a2[i]; k++) {

		}

   	for(l = 0; l < a3[i]; l++ ) {

		}


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


void theory2::Run(){
int front;
int back;
int i;
int j;


for (i = 0; i < 1000; i++) {

        for(j = 0; j < a1[i]; j++) {

                }

}



}




void theory2::Pop(){

}




int main() {
clock_t time1 = clock();
//.....
clock_t time2 = clock();


	return 0;
}

