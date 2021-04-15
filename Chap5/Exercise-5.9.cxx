#include <iostream>


int main()
{
	using namespace std;
	cout << "Enter the number of rows: ";
	int row;
	cin >> row;
	for (int i = 1; i <=row; i++)
	{
		for (int j = i; j<=row-1;j++)
			cout << '.';
                for (int k = i; k !=0; k--)
            		cout << '*';
		cout <<'\n';
	}
	
	return 0;
}
