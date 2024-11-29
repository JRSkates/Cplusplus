#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions


using namespace std;


int main() {
    cout << "================================================================" << endl;
    cout << endl;
    
    int *int_ptr {nullptr};
    int_ptr = new int;  // allocate an integer on the heap
    cout << int_ptr << endl;
    cout << *int_ptr << endl;
    *int_ptr = 10;
    cout << *int_ptr << endl;

    delete int_ptr;  // deallocate the integer from the heap
    int_ptr = nullptr;  // set the pointer to null to prevent dangling pointer
    cout << int_ptr << endl;  // prints nullptr, which is the correct value for a null pointer


    cout << "----------------------------------------------------------------" << endl;

    int *array_ptr {nullptr};
    int size {};

    cout << "Enter the size of the array: ";
    cin >> size;

    array_ptr = new int[size];  // allocate an array of integers on the heap
    cout << "Array address: " << array_ptr << endl;

    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array_ptr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << array_ptr[i] << " ";
    }
    cout << endl;

    delete[] array_ptr;  // deallocate the array from the heap
    array_ptr = nullptr;  // set the pointer to null to prevent dangling pointer
    cout << "Array address after deletion: " << array_ptr << endl;  // prints nullptr, which is the correct value for a null pointer

    cout << "----------------------------------------------------------------" << endl;
    // The value of an array name is the address of the first element in the array
    // The value of a pointer variable is an address
    // If the pointer points to the same data type as the array element
    // then the point and array name can be used interchangeably (almost)

    int scores[] {100, 95, 89};

    cout << scores << endl;  // 0x16fdff688
    cout << *scores << endl;  // same as scores[0] // 100

    int *scores_ptr = {scores};
    cout << scores_ptr << endl;  // 0x16fdff688
    cout << *scores_ptr << endl;  // same as scores[0] // 100
    cout << scores_ptr[0] << endl;  // same as scores[0] // 100
    cout << scores_ptr[1] << endl;  // same as scores[1] // 95
    cout << scores_ptr[2] << endl;  // same as scores[2] // 89

    // Dereferencing the array element
    cout << *(scores_ptr + 1) << endl;  // 95
    cout << *(scores_ptr + 2) << endl;  // 89

    cout << "----------------------------------------------------------------" << endl;

    cout << "----------------------------------------------------------------" << endl;

    cout << "----------------------------------------------------------------" << endl;

    // Pointer arithmetic
    



    cout << endl;
    cout << "================================================================" << endl;
}
