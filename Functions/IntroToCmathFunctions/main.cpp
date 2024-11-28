#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;

// Functions allow the modularization of a program
// Seperate code into logical self-contained units
// These units can be reused
// Function to calculate the sum of two numbers
int addNumbers(int a, int b) {
    return a + b;
}
// Function to calculate the product of two numbers
int multiplyNumbers(int a, int b) {
    return a * b;
};

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    cout << "Function to calculate the sum of two numbers (3 + 3 in this example): " << endl;
    cout << addNumbers(3, 3) << endl;

    cout << "Function to calculate the product of two numbers (3 * 3 in this example): " << endl;
    cout << multiplyNumbers(3, 3) << endl;

    cout << "----------------------------------------------------------------" << endl;

    // These functions are from the cmath library
    // C++ has lots of libraries with lots of functions
    double input {};
    cout << "Enter a number (double): " << endl;
    cin >> input;
    double result = pow(2.0, input);
    cout << "2 raised to the power of " << input << " is: " << result << endl;

    cout << "Integer square root of " << input << " (using the sqrt function from the cmath library): " << sqrt(9.0) << endl;
    
    cout << "Integer square root (using the floor function from the cmath library): " << floor(sqrt(9.0)) << endl;

    cout << "Remainder of " << input << " divided by 3 (using the fmod function from the cmath library): " << fmod(input, 3) << endl;

    cout << "----------------------------------------------------------------" << endl;

    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};

    // seed the random number generator
    // if you don't seed the generator you will get the same requence random numbers every run
    // seeding with nullptr, which is just 0
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    // create a loop to generate a random number in the range
    // up to the count amount 
    // ie: 10 random numbers, each between 1 and 6
    for (size_t i {1}; i <= count; i++) {
        random_number = rand() % max + min;
        cout << "Random number: " << random_number << endl;
    }

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}