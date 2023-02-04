#include <iostream>
#include "E:\Documents\PrimerSourceFiles\1\Sales_item.h"
using namespace std;

int main()
{
    // Create temporary item and a sum.
    Sales_item item, sum;

    // Prompt the user for data.
    // Example input: 0-201-78345-X 1 1.00, 0-201-78345-X 3 2.00, 0-201-78345-X 2 1.50
    cout << "Input items with the same ISBN:" << endl;

    // Ensure sum has ISBN by giving it the first value.
    cin >> sum;

    // Read unknown number of ISBN items.
    while (cin >> item)
    {
        sum += item;
    }

    // Print result.
    cout << sum << endl;
    return 0;
}
