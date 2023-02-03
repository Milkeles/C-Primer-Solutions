#include <iostream>
// Importing the file.
#include "Sales_item.h"

int main() {
    // Creating new variable of that type.
    Sales_item item;

    // Printing all items.
    while (std::cin >> item)
    {
        std::cout << item << std::endl;
    }
   
    return 0;
}
