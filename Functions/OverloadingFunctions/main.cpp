#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// We can have functions that different parameter lists that have the same name
// Abstraction mechanism since we can just think print for example
// This is an example of polymorphism
// The compiler must be able to tell the functions apart
// based on the parameter lists and arugments supplied


// Function prototypes

// These have the same name, but they take different types as values
// You still need to prototype and define each function type
// Return type is not considered, only argument types
int add_numbers (int, int);
double add_numbers (double, double);
// print overloaded function
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);
// challenge find_area overloaded functions
int find_area(int);
double find_area(double, double);
void area_calc();

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    cout << "Function to add two integers (3 and 5 in this example): " << endl;
    cout << add_numbers(3, 5) << endl;

    cout << "Function to add two doubles (3.5 and 5.7 in this example): " << endl;
    cout << add_numbers(3.5, 5.7) << endl;

    cout << "----------------------------------------------------------------" << endl;

    print(10);
    print('A'); // Char prints as an int, with the ASCII representation
    print("Hello"); // Converts a literal C Style string to a C++ string object
    string hello_string {"Hello C++ string"};
    print(hello_string); // Converts
    print("Hello", "World");
    print({"Apple", "Banana", "Cherry"});

    cout << "----------------------------------------------------------------" << endl;

    area_calc();

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}

// Function definitions
int add_numbers (int a, int b) {
    return a + b;
}

double add_numbers (double a, double b) {
    return a + b;
}

void print(int value) {
    cout << "Integer value: " << value << endl;
}

void print(double value) {
    cout << "Double value: " << value << endl;
}

void print(string value) {
    cout << "String value: " << value << endl;
}

void print(string value1, string value2) {
    cout << "String values: " << value1 << " and " << value2 << endl;
}

void print(vector<string> values) {
    cout << "Vector of strings: ";
    for (string value : values) {
        cout << value << " ";
    }
    cout << endl;
}

int find_area(int side_length) {
    return pow(side_length,2); //return side_length*side_length will also work
}

double find_area(double length, double width) {
    return length*width;
}

void area_calc() {
    
    int square_area = find_area(2);
    double rectangle_area = find_area(4.5,2.3);
    
    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}