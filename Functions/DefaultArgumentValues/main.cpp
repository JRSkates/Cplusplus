#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// When a function is called, all of its arguments must be supplied
// Sometimes the arguments are the same almost every time
// We can tell the compiler to use default values if the arguments are not specified
// Default values are typically added to the prototype
// It can be on the definition, but NOT both

// Function prototypes

// Default value added for tax_rate argument and shipping argument
// All default values have to be on the tail end of the prototype declaration
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);

void greeting(string name, string pref = "Mr.", string suffix = "");

void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);
void modify_grocery_list();

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    double cost {0};
    cost = calc_cost(200.0); // This is the base_cost parameter and is not defaulted
    
    cout << "The cost including default tax and shipping is: " << cost << endl;

    cost = calc_cost(200.0, 0.08); // Changing the tax rate to 8%
    cout << "The cost including 8% tax and default shipping is: " << cost << endl;

    cost = calc_cost(200.0, 0.08, 5.00); // Changing the tax rate to 8% and shipping to 5.00
    cout << "The cost including 8% tax and 5.00 shipping is: " << cost << endl;

    cout << "----------------------------------------------------------------" << endl;

    greeting("Jack Skates");
    greeting("Jill Smith", "Mrs.", "II");
    greeting("Bob Jones", "Dr.", "MD");

    cout << "----------------------------------------------------------------" << endl;

    print_grocery_list();
    cout << endl;
    modify_grocery_list();

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}

// Function definitions
double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping; // Function body, where the actual calculation is done and returned
}

void greeting(string name, string pref, string suffix) {
    cout << "Hello " << pref << " " << name << " " << suffix << endl;
}

void print_grocery_list(int apples, int oranges, int mangos) { 
    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}
void modify_grocery_list() {
    cout << "Modified lists with function: " << endl;
    print_grocery_list();
    cout << endl;
    print_grocery_list(5);
    cout << endl;
    print_grocery_list(7, 11);
    cout << endl;
}
