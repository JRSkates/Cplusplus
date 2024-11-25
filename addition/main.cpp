#include <iostream>

int main() {
    int first_number;
    int second_number;

    std::cout << "Type a number: ";
    std::cin >> first_number;

    std::cout << "Type a second number: ";
    std::cin >> second_number;

    int sum = first_number + second_number;

    std::cout << "The sum is: " << sum << std::endl;
    return sum;
}