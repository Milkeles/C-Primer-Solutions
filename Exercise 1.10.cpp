#include <iostream>
// We can use the std namespace, so we don't have to type it on every statement.
using namespace std;

int main()
{
    // Initialize index with the value of 10 (start);
    int index = 10;

    // Run while index is >= 0;
    while (index >= 0)
    {
        // Print each number on a new line. Using \n is faster than endl because it doesn't flush the stream.
        cout << index << "\n";
        index--; //Decrement on each iteration.
    }

    // Flush the stream (once) when we finish printing.
    cout << flush;
    return 0;
}

//Note: If we use endl and flush the stream in every iteration of a loop, that's significantly slower than it's not necessary when the loop is only used for printing.
