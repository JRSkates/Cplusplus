#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions


using namespace std;
// Passing pointers to a function
// Pass by reference with pointer parameters
// We can use pointers and the dereference operator to achieve pass-by-reference
// The function parameter is a pointer
// The actual parameter can be a pointer or address of a variable

// Function prototypes
// arguments specifies its recieving an address of a variable/value (with dereferencing)
void double_data(int *int_ptr);
void swap(int *a, int *b);
void display(vector<string> *v);
void display(int *array, int sentinel);

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    int num {10};
    int *int_ptr_example {nullptr};
    
    cout << "Value: " << num << endl;
    // Call the function with the address of a variable
    double_data(&num); // 20

    cout << "After doubling in double_data the num variable value is changed: " << num << endl;

    // Assign the pointer to point to the updated variable
    int_ptr_example = &num;
    double_data(int_ptr_example); // 40
    cout << "After doubling in double_data with int_ptr_example: " << num << endl;

    cout << endl;
    cout << "----------------------------------------------------------------" << endl;

    int x {100}, y {200};
    cout << "Before swapping: x: " << x << ", y: " << y << endl;
    swap(&x, &y); // 100 200
    cout << "After swapping: x: " << x << ", y: " << y << endl;

    cout << endl;
    cout << "----------------------------------------------------------------" << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges); // Displaying vector... Larry Moe Curly

    int scores[] = {100, 98, 97, 79, 85, -1};
    display(scores, -1); // Displaying array... 100 98 97 79 85

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}

void double_data(int *int_ptr) {
    *int_ptr *= 2; // Dereferencing the pointer to modify the value
    cout << "Doubled value in double_data: " << *int_ptr << endl;
}

void swap(int *a, int *b) {
    int temp = *a; // Dereferencing the pointers to swap the values
    *a = *b;
    *b = temp;
    cout << "Swapped values in swap: a: " << *a << ", b: " << *b << endl;
}

void display(vector<string> *v) {
    for (auto str: *v) {
        cout << str << endl;
    }
    cout << "Size of vector: " << v->size() << endl;
}

void display(int *array, int sentinel) {
    while(*array != sentinel) {
        cout << *array << endl;
        array++; // Increment the pointer to the next element in the array
    }
}
