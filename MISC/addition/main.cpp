#include <iostream>

// using namespace std;

// define namespace for std usage
using std::cout;
using std::cin;
using std::endl;

int main() {
    // Initialize variables
    int first_number;
    int second_number;

    // Get user input for two numbers
    cout << "Type two numbers seperated with a space: ";
    cin >> first_number >> second_number;

    // Calculate the sum
    int sum = first_number + second_number;

    // Conditional output based on the sum
    if (sum > 1000) {
        cout << "The sum is: " << sum << " that's over 1000! "<< endl;
    } else {
        cout << "The sum is: " << sum << endl;
    }

    return 0;
}