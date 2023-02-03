#include <iostream>
using namespace std;

int main()
{
	int sum = 0, input = 0;

	// Prompt the user for input.
	cout << "Enter numbers: " << endl;

	// Sum all numbers as long as the program receives valid input.
	while (cin >> input)
	{
		sum += input;
	}

	// Print results.
	cout << "The sum of all numbers is:" << sum << endl;

	return 0;
}
