#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions


using namespace std;
// A pointer is a variable 
// It stored the address of another variable or function
// If you can use something directly you should, and there is no need for a pointer
//Can be used to access data outside of scope


int main() {
    cout << "================================================================" << endl;
    cout << endl;

    // the * makes it a pointer
    // Initialized pointers point to "nowhere"
    // You must initialize them empty, otherwise they will
    // point to garbage memory and cause a runtime error
    // Access the value using the pointer
    int *int_ptr;
    cout << "Inital pointers point to: " << int_ptr << endl;
    int_ptr = nullptr;
    cout << "After assigning nullptr to int_ptr, int_ptr points to: " << int_ptr << endl;
    cout << "The size of int_ptr is: " << sizeof(int_ptr) << endl;

    cout << endl;

    // Declare and initialize pointers for double, char, and string
    double *double_ptr {nullptr};
    char *char_ptr {nullptr};
    string *string_ptr {nullptr};

    int num {10};
    cout << "Value of num is: " << num << endl;
    cout << "Address of num is: " << &num << endl;

    // Assigning the address of num to int_ptr
    int_ptr = &num;
    cout << "Value of int_ptr is: " << int_ptr;
    cout << " (which is the same as &num, the address of num)" << endl;

    cout << "----------------------------------------------------------------" << endl;

    cout << "Dereferencing a pointer is done by calling with the *" << endl;
    cout << "Value pointed to by int_ptr is (*int_ptr): " << *int_ptr << endl;
    *int_ptr = 100;
    cout << "Dereferenced point (*int_ptr = 100): " << *int_ptr << endl;
    cout << "Value of num is: " << num << endl;

    cout << endl;

    // Dereferencing a pointer to a char

    cout << "----------------------------------------------------------------" << endl;

    // Dereferencing a pointer to a double

    cout << endl;
    cout << "================================================================" << endl;
}
