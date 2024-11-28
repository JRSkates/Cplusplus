#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// Sometimes we want to be able to change the actual parameter from withn the function body
// In order to achieve this we need the location/address of the actual parameter
// We saw how this is the effect with array, but what about other types of parameters?
// We can use reference parametes to tell the compiler:
// Pass in a reference to the ACTUAL parameter
// The formal parameter will now be an alias of the actual parameter


// Function prototypes
// Notice that parameter is a reference to an int named num with a &
// We are referencing the actual parameter here not a copy of the parameter
void scale_number(int &num);
void swap(int a, int b);
void swap_by_reference(int &a, int &b);
void print_vector(const vector<int> &vec); // The const ensures the vector can't be modified within the function
vector<int> transform_vector(vector <int> &vec);

int main () {
    cout << "================================================================" << endl;
    cout << endl;

    int number {1000};
    // This changes the actual parameter
    // We don't make a copy of the parameter
    scale_number(number);
    cout << "Scaled number: " << number << endl; // Output: 100

    int x{10}, y{20};
    cout << x << " " << y << endl;  // 10 20
    swap(x, y); // Pass-by-value: Does not modify x, y
    cout << x << " " << y << endl;  // 10 20
    swap_by_reference(x, y); // Pass-by-reference: Modifies x, y directly
    cout << x << " " << y << endl;  // 20 10

    cout << "----------------------------------------------------------------" << endl;

    const vector<int> data {1, 2, 3, 4, 5};
    print_vector(data); // Displaying vector... 1 2 3 4 5

    cout << endl;

    vector<int> more_data {2, 4, 8, 16};
    transform_vector(more_data); // Doubles each element
    print_vector(more_data); // Output: 4 8 16 32

    cout << "----------------------------------------------------------------" << endl;

    cout << "================================================================" << endl;
    cout << endl;

    return 0;

}

// Function definitions
void scale_number(int &num) {
    if (num > 100)
        num = 100;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap_by_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void print_vector(const vector<int> &vec) {
    for (auto num : vec) 
        cout << num << endl;
}

vector<int> transform_vector(vector<int> &vec) {
    for(auto &num : vec) {
        num *= 2;
    }

    return vec;
}