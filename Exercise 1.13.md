> Rewrite the first two exercises from § 1.4.1 (p.13) using ``for`` loops.

Exercise 1.9 using ``for`` loop:
```cpp
#include <iostream>

// Import the namespace, so we don't have to specify it every time we print something.
using namespace std;

int main()
{
    // Create a variable for the sum.
    int sum = 0;

    // Loop through all numbers in the range 50-100.
    for (int i = 50; i <= 100; i++)
    {
        // Add all numbers to the value of sum.
        sum += i;
    }

    // Print the result.
    cout << "The sum of all numbers from 50 to 100 is: " << sum << endl;

    // Indicate that the program ran successfully and did what it was supposed to do.
    return 0;
}
```

Exercise 1.10 using ``for`` loop:
```cpp
#include <iostream>

// Import the namespace, so we don't have to specify it every time we print something.
using namespace std;

int main()
{
    // Initialize i with the value of 10 and run the loop while i >= 0, decrementing i by 1 on each iteration of the loop.
    for (int i = 10; i >= 0; i--)
    {
        // Print i on each iteration.
        cout << i << "\n";
    }

    // Flush the stream once when we finish printing.
    cout << flush;
    // Return 0 to indicate the program ran successfully.
    return 0;
}
```
