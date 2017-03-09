using namespace std;
class movie {
	public:
		/*Public things*/
		//Constructor
		movie (string init_name, double init_revenue);
		//Accessors
		string getName();
		double getRevenue();
		double Mult_Rev();
		//Mutators
		void changeName(string name_change);
		void changeRevenue(double revenue_change);
		void Mult_Rev(int multiplier);
	private:
		/*Private things*/
		string name;
		double revenue;

};
