#include <iostream>
const int ArSize = 8;

int sum_arr(int arr[], int n);

int main()
{
	using namespace std;
	int cookies[ArSize] = {1, 1, 2, 3, 5, 8, 13, 21};
	cout << cookies << " = array address, ";

	cout << sizeof cookies << " = sizeof cookies\n";
	
	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies eaten: " << sum << endl;

	sum = sum_arr(&cookies[0], 3);
	cout << "First three eaters ate " << sum << " cookies.\n";

	sum = sum_arr(&cookies[4], 4);
	cout << "Last four eaters ate " << sum << " cookies." << endl;

	return 0;
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " =arr," << sizeof arr << " = sizeof arr " << std::endl;
	for (int i = 0; i < n; i++)
		total = total + arr[i];

	return total;
}
