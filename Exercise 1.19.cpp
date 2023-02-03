#include <iostream>
using namespace std;

int main()
{
    // Create two variables to store the numbers.
    int start = 0, end = 0;

    // Prompt the user for the first number.
    cout << "Start: ";
    cin >> start;

    // Keep prompting the user for the second number until the program ends.
    cout << "End: ";
    while (cin >> end)
    {
        // Exit the loop only if the second number is larger.
        if (end > start)
        {
            break;
        }

        cout << "End: ";
    }

    // Print all numbers in the range [start... end];
    while (start <= end)
    {
        cout << start << " ";
        start++;
    }

    // Flush the stream once we finish printing.
    cout << flush;

    // Return 0, indicating the program ran successfully.
    return 0;
}
