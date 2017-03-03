#include <iostream>
using namespace std;
namespace number1{
	int num;
}
namespace number2{
	int num;
}
namespace number3{
	int num;
}
int main() {

cin >> number1::num;
cin >> number2::num;
cin >> number3::num;

if (((number1::num * number1::num) + (number2::num * number2::num)) == (number3::num * number3::num)) {
	cout << ("Right Triangle");


}

	return 0;
}
