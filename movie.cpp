#include <iostream>
#include "movie.h"
using namespace std;
/*Method definitions*/
movie::movie(string init_name, double init_revenue){
	name = init_name;
	revenue = init_revenue;
}

string movie::getName(){
	return name;
}

double movie::getRevenue(){
	return revenue;
}

void movie::changeName(string newName){
	name = newName;
}

void movie::changeRevenue(double newRevenue) {
	revenue = newRevenue;
}

void movie::Mult_Rev(int multiplier) {
	revenue = revenue * multiplier;

int main() {
	 movie RogueOne("Rogue One", 216);
	cout << RogueOne.getRevenue() << "\n";

	cout << "Changing revenue to 8600\n";
	RogueOne.changeRevenue(8600);
	cout << RogueOne.getRevenue() << "\n";
	
	cout << "Changing revenue to multiply by 5\n";
	RogueOne.Mult_Rev();
	cout << RogueOne.getRevenue() << "\n";

	return 0;
}
