#include <iostream>
#include <cstring>

struct CandyBar
{
	char name[20];
	double weight;
	int cal;
};

int main()
{
	using namespace std;
	CandyBar *ps = new CandyBar;

	char alias[20] = " Monca X";
	strcpy(ps->name, alias);
	ps->weight = 2.5;
	ps->cal = 320;

	cout << "Name: " << ps->name << endl;
	cout << "Weight: " << ps->weight << " oz" << endl;
	cout << "Calories: " << ps->cal << " calories" << endl; 

	return 0;
}
