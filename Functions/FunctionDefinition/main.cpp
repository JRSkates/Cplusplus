#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// Functions allow the modularization of a program
// Seperate code into logical self-contained units
// These units can be reused

// void functions don't require a return value
void say_hello () {
    cout << "Hello, World!" << endl;
}

const double pi {3.14159};

// This function is focused solely 
// on calculating the area of a circle given its radius.
double calc_area_circle (double radius) {
   return pi * radius * radius;
}

// The reason for having a void function is primarily to 
// separate responsibilities and improve code readability and modularity.
// This function handles the user interaction and printing
void area_circle() {
    double radius {};
    cout << "\nEnter radius: " << endl;
    cin >> radius;
    cout << "The area of the circle with radius " 
        << radius << " is: " << calc_area_circle(radius) << endl;
}

double calc_volume_cylinder (double radius, double height) {
    return calc_area_circle(radius) * height;
}

void volume_cylinder() {
    double radius {}, height {};
    cout << "\nEnter radius: " << endl;
    cin >> radius;
    cout << "Enter height: " << endl;
    cin >> height;
    cout << "The volume of the cylinder with radius " 
        << radius << " and height " << height << " is: " 
        << calc_volume_cylinder(radius, height) << endl;
}

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    cout << "Function to print 'Hello, World!' to the console: " << endl;
    say_hello();

    cout << "say_hello() function looped 3 times: " << endl;
    for (int i {0}; i < 3; ++i) {
        say_hello();
    }    

    cout << "----------------------------------------------------------------" << endl;

    area_circle();

    cout << "----------------------------------------------------------------" << endl;

    volume_cylinder();

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}