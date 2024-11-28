#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// Function prototypes tell the compiler what it needs to know
// WITHOUT a full function declaration
// Also called forward declarations
// Placed at the beginning of the program, so that you can 
// define the functions after main

// function prototype with arguments
int function_name(int a);

// function prototype for void function
void say_hello();

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    say_hello();

    function_name(1);

    cout << "----------------------------------------------------------------" << endl;

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}

// Now we have the prototypes, we can call functions
// after main()
int function_name(int a) {
    cout << "function_name called with argument: " << a << endl;
    return a * 2; // Example implementation
}

// Function definition for say_hello
void say_hello() {
    cout << "Hello from say_hello!" << endl;
}