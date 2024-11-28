#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// Scope rules are used to determine where an identifier can be used
// C++ uses static or lexical scope
// Local/Block scope and Global scope are the main scopes

// Local scope is typically identifiers declared in a block {}
// Only visible within the block where declared, and only active while the function is executing

// Global scope are identifiers declared outside of any function or class

// Function prototypes
void static_local();

int main () {
    cout << "================================================================" << endl;
    cout << endl;

    int num {100}; // Local to main
    int num2 {500}; // Local to main

    { // creates a new level of scope
        int num {200}; // Local to this block
        cout << "num inside block: " << num << endl; // only accessible in block scope
        cout << "num2: " << num2 << endl; // Accessible here as well
    }

    cout << "----------------------------------------------------------------" << endl;

    // Stactic variable is a variable that is defined locally
    // If variable is changed locally, it will retain that new value when called again
    static_local(); // static num variable starts at 5000, and is increased to 6000
    static_local(); // static num varible now starts at 6000, and is increased to 7000


    cout << "================================================================" << endl;
    cout << endl;

    return 0;

}

// Function definitions
void static_local() {
    static int num {5000}; // Static variable
    cout << "\nLocal static num is: " << num << " in static_local - start" << endl;
    num+= 1000;
    cout << "Local static num is: " << num << " in static_local - end" << endl;
}