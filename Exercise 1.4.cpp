#include <iostream>

int main()
{
    //Create two variables to store the user input in;
    int num1 = 0, num2 = 0;

    //Prompt the user for input.
    std::cout << "Write two numbers: \n";

    // Store the user input in the variables;
    std::cin >> num1 >> num2;

    // Calculate and print the product of the two numbers;
    std::cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << std::endl;

    // Indicate that the compilation completed successfully by returning 0;
    return 0;
}

