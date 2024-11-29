#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions


using namespace std;
// Pointers can be used in assignment expressions
// Arithmetic expressions
// Comparison expressions
// C++ allows pointer arithmetic

int main() {
    cout << "================================================================" << endl;
    cout << endl;
    int value = 40;
    int *int_ptr = &value;
    cout << *int_ptr << endl;
    // ++ - increments a point to a point ot the next array element
    int_ptr++;
    cout << int_ptr << endl;
    // * - dereferences a pointer to get the value at the point it points to
    cout << *int_ptr << endl;
    // -- - decrements a point to a point of the previous array element

    int_ptr--;
    cout << *int_ptr << endl;
    // -- - decrements a point to a point of the previous array element
    
    cout << "----------------------------------------------------------------" << endl;
    // Compare pointers

    string s1 {"Jack"};
    string s2 {"Jack"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    // Does NOT compare the data where they point
    // Just the addresses
    cout << (p1 == p2) << endl; // False
    cout << (p1 == p3) << endl; // True
   
    // Compare the data the pointers are pointing to
    cout << (*p1 == *p2) << endl; // True // As both bits of data are a string value "Jack"
    cout << (*p1 == *p3) << endl; // True

    // Pointer arithmetic
    // Incrementing a pointer moves it to the next memory location
    // Decrementing a pointer moves it to the previous memory location
    // Multiplying a pointer by an integer multiplies the pointer by the integer
    // Dividing a pointer by an integer divides the pointer by the integer


    cout << "----------------------------------------------------------------" << endl;
    
    int scores[] {100, 95, 89, 68, -1};
    int *scores_ptr = scores;

    // iterates over the scores array via the score pointer
    // loops until it reaches -1, the final value
    // uses scores_ptr++ to determine the value at that location
    while(*scores_ptr != -1){
        cout << *scores_ptr << endl;
        scores_ptr++;
    }

    cout << "----------------------------------------------------------------" << endl;
    
    char name[] {"Frank"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};

    char_ptr1 = &name[0]; // F
    char_ptr2 = &name[3]; // n

    cout <<  "In the string " << name << ", " << *char_ptr2 << " is " 
        << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    

    cout << "----------------------------------------------------------------" << endl;

    // Pointers to constants
    int high_score {100};
    int low_score {65};

    // The data pointed to by the pointers is constant and CANNOT be changed
    // The pointer itself can change and point somewhere else
    const int *ptr_to_const {&high_score};
    // *ptr_constant = 86  // ERROR
    ptr_to_const = &low_score; // OK


    // The data pointed to by the pointers can be changed
    // The pointer itself cannot change and point somewhere else
    int *const ptr_to_non_const {&high_score};
    *ptr_to_non_const = 86; // OK
    // ptr_to_non_const = &low_score;  // ERROR

    // The data pointed to by the pointers is constant and CANNOT be changed
    // The pointer itself cannot change and point somewhere else
    const int *const ptr_to_const_and_non_const {&high_score};
    // *ptr_constant_and_non_const = 86;  // ERROR
    // ptr_to_constant_and_non_const = &low_score;  // ERROR


    return 0;



    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}
