#include <iostream>
#include "E:\Documents\PrimerSourceFiles\1\Sales_item.h"
using namespace std;

int main()
{
    // Create two items.
    Sales_item uniqueItem, item;

    // Prompt the user for data.
    // Example input: 0-101-12345-X 1 1.00, 0-101-12345-X 1 1.00, 0-102-12345-X 1 1.00, 0-102-12345-X 1 1.00, 0-102-12345-X 1 1.00, 0-103-12345-X 1 1.00
    cout << "Input items:" << endl;

    // Input the first item.
    cin >> uniqueItem;

    // Create a counter and initialize it with one (because we already added one item).
    int count = 1;
   
    // Input unknown number of elements.
    while (cin >> item)
    {
        // Check if the ISBN of each item we input matches the previous ones.
        if (item.isbn() == uniqueItem.isbn())
        {
            count++;
        }
        else
        {
            // Print result.
            cout << uniqueItem.isbn() << " appeared " << count << " time(s).\n";

            // Reset the counter and save the new unique item.
            count = 1;
            uniqueItem = item;
        }
    }
    // Print again once the program ends and flush the stream.
    cout << uniqueItem.isbn() << " appeared " << count << " time(s)." << endl;

    return 0;
}
