#include <iostream>

int main() {
    // Declare variables to hold the two numbers
    int num1, num2, sum;

    // Ask the user for the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Ask the user for the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Add the two numbers
    sum = num1 + num2;

    // Output the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}
