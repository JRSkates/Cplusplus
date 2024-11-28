#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// When we call a function we can pass data to the function
// In the function call they are called arguments 
// In the function definition they are called parameters
// They must match in number, order and type

// Function prototypes
int add_numbers(int, int);
void pass_by_value(string);
void print_vectors(vector<string>); // Function prototype, pass by reference (vector<string>&)
void pass_by_value_vectors(vector<string> vec);
double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);
void temperature_conversion(double fahrenheit_temperature);

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    int result {0};
    // Function call, arguments (5 and 3)
    result = add_numbers(5, 3);
    cout << "The sum of 5 and 3 is: " << result << endl;

    cout << "----------------------------------------------------------------" << endl;

    string main_value {"Jack"};
    cout << "main_value is: " << main_value << endl;
    pass_by_value(main_value);
    cout << "main value is stil: " << main_value << endl;

    cout << "----------------------------------------------------------------" << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nNames before pass by value: " << endl;
    print_vectors(stooges);
    pass_by_value_vectors(stooges);
    cout << "\nNames after pass by value: " << endl;
    print_vectors(stooges);

    cout << "----------------------------------------------------------------" << endl;

    temperature_conversion(82.5);
    temperature_conversion(101.2);
    temperature_conversion(64.0);

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}

// Function definitions
int add_numbers(int a, int b) {
    return a + b; // Function body, where the actual calculation is done and returned
}

void pass_by_value(string value) {
    value = "Changed";
    cout << "Inside pass_by_value(main_value), the value is: " << value << endl;
}

void print_vectors(vector<string> vec) {
    for(auto val: vec)
        cout << val << endl;
}

void pass_by_value_vectors(vector<string> vec) {
    vec.clear();
    cout << "Inside pass_by_value_vectors we clear the vector: " << endl;
    print_vectors(vec);
}

double fahrenheit_to_celsius(double temperature) {
    return round(((temperature - 32)*5)/9);
} 

double fahrenheit_to_kelvin(double temperature) {
    return round(((temperature - 32)*5)/9 + 273);
}

void temperature_conversion(double fahrenheit_temperature) {
    
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
    cout << endl;
}

