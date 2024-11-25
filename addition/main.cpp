#include <iostream>

int main() {
    // Initialize variables
    int first_number;
    int second_number;

    // Get user input for two numbers
    std::cout << "Type a number: ";
    std::cin >> first_number;

    std::cout << "Type a second number: ";
    std::cin >> second_number;

    // Calculate the sum
    int sum = first_number + second_number;

    // Conditional output based on the sum
    if (sum > 1000) {
        std::cout << "The sum is: " << sum << " that's over 1000! "<< std::endl;
    } else {
        std::cout << "The sum is: " << sum << std::endl;
    }

    return sum;
}