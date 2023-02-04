> Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section.

```cpp
#include <iostream>
#include "E:\Documents\PrimerSourceFiles\1\Sales_item.h"
using namespace std;

int main()
{
    Sales_item total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (cin >> total)
    {
        Sales_item trans; // variable to hold the running sum
        //read and process the remaining transactions
        while (cin >> trans)
        {
            // if we're still processing the same book
            if (total.isbn() == trans.isbn())
            {
                total += trans; // update the running total
            }
            else
            {
                // print results for the previous book
                cout << total << endl;
                total = trans; // total now refers to the next book
            }
        }
        cout << total << endl; // print the last transaction
    }
    else
    {
        // no input! warn the user
        cerr << "No data?!" << endl;
        return -1; // indicate failure
    }
}

/*
```

```
Input:
0-101-12345-X 1 1.00
0-101-12345-X 2 2.00
0-101-12345-X 3 3.00
0-101-12345-X 1 1.00
0-102-12345-X 2 3.00
0-102-12345-X 3 3.00
0-103-12345-X 5 9.00
```

```
Output:
0-101-12345-X 7 15 2.14286
0-102-12345-X 5 15 3
0-103-12345-X 5 45 9
```
