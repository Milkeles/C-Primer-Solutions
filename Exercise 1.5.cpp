#include <iostream>

int main()
{
    // Prompt the user for input and store it in variables;
    std::cout << "Number 1 = ";
    int num1 = 0;
    std::cin >> num1;
    
    std::cout << "Number 2 = ";
    int num2 = 0;
    std::cin >> num2;


    // Calculate the sum of the two numbers;
    int sum = num1 + num2;

    // Print the sum using separate statements;
    std::cout << "The sum of " << num1;
    std::cout << " and " << num2;
    std::cout << " is " << sum << std::endl;

    return 0;
}

