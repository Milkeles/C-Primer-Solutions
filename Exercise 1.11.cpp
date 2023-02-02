#include <iostream>
// We can use the std namespace, so we don't have to type it on every statement.
using namespace std;

int main()
{
    // Prompt the user for two numbers.
    int start = 0, end = 0;

    cout << "Start: ";
    cin >> start;

    cout << "End: ";
    cin >> end;

    // Print all numbers in the range [start... end];
    while (start <= end)
    {
        cout << start << " ";
        start++;
    }

    // Flush the stream once we finish printing.
    cout << flush;
    return 0;
}
