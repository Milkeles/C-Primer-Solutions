> Test the previous program by giving multiple transactions repeating multiple ISBNs. The records for each ISBN should be grouped together.

```cpp
#include <iostream>
#include "E:\Documents\PrimerSourceFiles\1\Sales_item.h"
using namespace std;

int main()
{
    Sales_item uniqueItem, item;
    cout << "Input items:" << endl;
    cin >> uniqueItem;

    int count = 1;
   
    while (cin >> item)
    {
        if (item.isbn() == uniqueItem.isbn())
        {
            count++;
        }
        else
        {
            cout << uniqueItem.isbn() << " appeared " << count << " time(s).\n";
            count = 1;
            uniqueItem = item;
        }
    }
    
    cout << uniqueItem.isbn() << " appeared " << count << " time(s)." << endl;

    return 0;
}
```

```
Input:
0-101-12345-X 1 1.00
0-101-12345-X 1 1.00
0-102-12345-X 1 1.00
0-102-12345-X 1 1.00
0-102-12345-X 1 1.00
0-103-12345-X 1 1.00
```

```
Output:
0-101-12345-X appeared 2 time(s).
0-102-12345-X appeared 3 time(s).
0-103-12345-X appeared 1 time(s).
```
