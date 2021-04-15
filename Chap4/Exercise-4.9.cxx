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

	CandyBar *ps = new CandyBar [3];

 	CandyBar snack = {" Munch", 2.3, 350};

//	strcpy(ps[0].name, "MochaX");
//	ps[0].weight = 2.5;
//	ps[0].cal = 350;


	strcpy(ps->name, "MochaX");
	ps->weight = 2.5;
	ps[0].cal = 350;

	strcpy(ps[1].name, "MochaXX");
	(ps+1)->weight = 2.75;
	ps[1].cal = 300;

	strcpy(ps[2].name, "MochaXXX");
	ps[2].weight = 2.5;
	ps[2].cal = 450;

	cout << "Name: " << ps[0].name << endl;
	cout << "Weight: " << ps[1].weight << " oz" << endl;
	cout << "Calories: " << ps[2].cal << " calories" << endl; 

	delete [] ps;


	return 0;
}
