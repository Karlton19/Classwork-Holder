using namespace std;
class search {
	public:
		//Constructor goes here
		search ();


		//Accessors
		void linear(int num1); //searches for a number, num, using linear search
		void binary(int num2); //searches for a number, num, using binary search




	private:
		int array[20]; //the array of numbers to be searched
		int large_array[10000];
};
