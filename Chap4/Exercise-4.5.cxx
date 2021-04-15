#include <iostream>

struct CandyBar
{
	char name[20];
	double weight;
	int cal;
};

int main()
{
	using namespace std;
	CandyBar snack = {"Mocha Munch", 2.3, 350};

	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight << " oz" << endl;
	cout << "Calories: " << snack.cal << " calories" << endl; 

	return 0;
}
