#include <iostream>
// We can use the std namespace, so we don't have to type it on every statement.
using namespace std;

int main()
{
    // Initialize index with the value of 50 (start);
    int sum = 0, index = 50;

    // Run while index is <= 100;
    while (index <= 100)
    {
        sum += index;
        index++; // Increment index by one.
    }

    // Print results and end program.
    cout << "The sum of all numbers from 50 to 100 is: " << sum << endl;
    return 0;
}
