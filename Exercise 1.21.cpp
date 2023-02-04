#include <iostream>
#include "E:\Documents\PrimerSourceFiles\1\Sales_item.h"
using namespace std;

int main()
{
    // Create two sales items.
    Sales_item item1, item2;

    // Prompt the user for data.
    // Example input: 0-202-45217-X 1 9.99, 0-202-45217-X 4 10.99
    cout << "Input two items with the same ISBN: " << endl;
    cin >> item1 >> item2;

    // Print result.
    cout << item1 + item2 << endl;

    return 0;
}
