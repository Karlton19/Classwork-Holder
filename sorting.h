using namespace std;
class sorting{
	public:
		sorting();
		void fillArray(); //Fills the array with random numbers
		void toString();  //Prints the array
		void SelectionSort(); //Sorts the array
		void BubbleSort();
	private:
		int array[20];
		int array_sorted[20];
		int bubble_array[20];

};
