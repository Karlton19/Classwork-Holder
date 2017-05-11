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
	open = 1;
}

theory1::theory1() {

}

theory2::theory2() {

}




int cashier::GetOpen(){
	return open;

}


void cashier::ChangeStatus(){

if (open == 1){
	open = 0;
}

else{
	open = 1;
}

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
int a1_sum = 0;
int a2_sum = 0;
int a3_sum = 0;



for (i = 0; i < 100; i++) {
	a1_sum = a1_sum + a1[i];
	a2_sum = a2_sum + a2[i];
	a3_sum = a3_sum + a3[i];




	for(j = 0; j < a1[i]; j++) {

		}


   	for(k = 0; k < a2[i]; k++) {

		}

   	for(l = 0; l < a3[i]; l++ ) {

		}


}

if (a1_sum > a2_sum && a1_sum > a3_sum){
	cout << a1_sum << "\n";

}

if (a2_sum > a1_sum && a2_sum > a3_sum){
	cout << a2_sum << "\n";
}

if (a3_sum > a1_sum && a3_sum > a2_sum){
	cout << a3_sum << "\n";
}

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
int p1_time;
int p2_time;
int p3_time;
int a1_sum = 0;
//Three Cashier objects
cashier Josh;
cashier Tom;
cashier Tim;

while (i < 300){
	if (Josh.GetOpen() == 1){
		p1_time = a1[i];
		i++;
	}

	if (Tom.GetOpen() == 1){
		p2_time = a1[i];
		i++;
	}


	if (Tim.GetOpen() == 1){
		p3_time = a1[i];
		i++;
	}
}

cout << a1_sum << "\n";


}








int main() {
theory1 theory1;
theory1.fillArray();
theory2 theory2;
theory2.fillArray();

clock_t time1 = clock();
theory1.Run();
clock_t time2 = clock();
theory2.Run();
// cout << "Theory one took: " << time2 - time 1 << ticks;
	return 0;
}

