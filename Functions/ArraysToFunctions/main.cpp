#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// We can pass an array to a function by providing square brackets
// in the formal parameter description
// The array elements are NOT copied
// Since the array name evalutes to the location of the array in memory
// This address is what is copied
// The function doesnt know how many elements are in the array
// So we need to pass in the size


// Function prototypes
void print_array(int numbers [], size_t size);
void zero_array(int numbers [], size_t size);
void set_array(int numbers [], size_t size, int value);
string print_guest_list(const string[], size_t);
void clear_guest_list(string[], size_t);
void event_guest_list();

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    int my_numbers[] {1, 2, 3, 4, 5};
    print_array(my_numbers, 5); // passing the array to the function
    zero_array(my_numbers, 5); // passing the array to the function
    print_array(my_numbers, 5); // passing the array to the function


    cout << "----------------------------------------------------------------" << endl;
  
    int my_scores[] {100, 98, 90, 86, 84};

    print_array(my_scores, 5);
    set_array(my_scores, 5, 85); // Function to change all array values to value in argument
    print_array(my_scores, 5);  // All values showing as 85

    cout << "----------------------------------------------------------------" << endl;

    event_guest_list();

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}

// Function definitions
void print_array(int numbers [], size_t size) {
    for(int i = 0; i < size; ++i)
        cout << numbers[i] << " ";
    cout << endl;
}

void zero_array(int numbers [], size_t size) {
    for(size_t i {0}; i < size; ++i)
        numbers[i] = 0;
}

void set_array(int numbers [], size_t size, int value) {
    for(size_t i {0}; i < size; ++i)
        numbers[i] = value;
}

string print_guest_list(const string guest_list[], size_t guest_list_size) {
    
    for (size_t i{0}; i < guest_list_size; i++)
        cout << guest_list[i] << endl;
    
    return typeid(guest_list).name(); // Return is location name of the guest list
}

void clear_guest_list(string guest_list[], size_t guest_list_size) {
    
    for (size_t i{0}; i < guest_list_size; i++)
        guest_list[i] = " ";
    
}

void event_guest_list() {
    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
}

