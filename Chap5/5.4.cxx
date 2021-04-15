#include <iostream>

int main()
{
	using namespace std;
	double Daphne = 100.0;
	double Cleo = 100.0;


	for (int i=0; i<27; i++)
		Daphne = Daphne +10;
	cout << Daphne<< endl;

	for (int j=0; j<27; j++)
		Cleo = Cleo*(1.0+0.05);
	cout << Cleo<< endl;


	return 0;
}
