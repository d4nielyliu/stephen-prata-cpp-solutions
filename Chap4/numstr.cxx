#include <iostream>
int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cout << "What is its street address?\n";
	cin.get();
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}
