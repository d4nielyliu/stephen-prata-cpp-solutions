#include <iostream>

int main()
{
	using namespace std;
	cout << "What is your first name? ";
	char first_name[20];
	cin.get(first_name,20).get();
//	cout << first_name << endl;

	cout << "What is your last name? ";
	char last_name[20];
	cin.get(last_name,20);
//	cout << last_name << endl;

	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
//	cout << grade << endl;
	
	cout << "What is your age? ";
	int age;
	cin >> age;
//	cout << age << endl;

	cout << "Name: " << last_name<< ", "<< first_name<<'\n';
	cout << "Age: " << age << endl;
	cout << "Grade " << grade << endl; 

	return 0;
}
