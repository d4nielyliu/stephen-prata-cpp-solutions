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
	CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Energy5", 2.5, 400}, {"Coke", 2.8, 300}};

	cout << "Name: " << snack[0].name << endl;
	cout << "Weight: " << snack[1].weight << " oz" << endl;
	cout << "Calories: " << snack[2].cal << " calories" << endl; 

	return 0;
}
