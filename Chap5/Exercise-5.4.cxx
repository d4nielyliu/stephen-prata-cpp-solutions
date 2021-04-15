#include <iostream>

int main()
{
	using namespace std;
	double Daphne = 100.0;
	double Cleo = 100.0;

	int year = 0;
	do
	{
		Daphne = Daphne + 10;		
		Cleo = Cleo*(1.0+0.05);
		year++;
	} while (Daphne > Cleo);


//	for (int i=1; i<30; i++)
//		Daphne = Daphne +10;
//	cout << Daphne<< endl;

//	for (int j=1; j<30; j++)
//		Cleo = Cleo*(1.0+0.05);
//	cout << Cleo<< endl;

//	do
//	{
//		Daphne = Daphne + 10;		
//		year++;
//	} while (year<30);
  //      cout << "Daphne " << Daphne << endl;

//	int i =0;
//	do
//	{
//		Cleo = Cleo*(1.0+0.05);
//		i++;
//	} while (i<30);
//       cout << "Cleo " << Cleo << endl;


	cout << "After " << year << " Cleo's investment exceeds Daphne's" << endl;
	cout << "Daphne's investment is " << Daphne +10 <<endl;
	cout << "Cleo's investment is " << Cleo*1.05 <<'\n';


	return 0;
}
