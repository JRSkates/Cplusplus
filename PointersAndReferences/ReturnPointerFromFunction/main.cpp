#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// Functions can return pointers
// Should return pointers to:
// Memory dynamically allocated in the function
// The function will return an address
// Function prototypes
int *create_array(size_t size, int init_value = 0);
void multiply_with_pointer(int *ptr, int multiplier);
int find_max_element(int *arr, int size);
void print_array(int *arr, int size);
void reverse_array(int *arr, int size);
string reverse_string(const string& str);


int main()
{
    cout << "================================================================" << endl;
    cout << endl;

    int *my_array = create_array(5, 2);


    cout << "Array elements: ";
    for (size_t i = 0; i < 5; i++)
    {
        cout << my_array[i] << " ";
    }
    cout << endl;

    delete[] my_array;  // Deallocate the memory from the heap
    my_array = nullptr; // Set the pointer to null to prevent dangling pointer

    cout << endl;
    cout << "----------------------------------------------------------------" << endl;

    int num {10};
    int *num_ptr {&num};
    cout << "Value of num is: " << num << endl;
    multiply_with_pointer(&num, 3);
    cout << "After multiplying in multiply_with_pointer: num is now " << num << endl;
    num_ptr = nullptr; //

    cout << endl;
    cout << "----------------------------------------------------------------" << endl;

    int arr[5] = {12, 45, 67, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    // int maxElement = find_max_element(arr, size);

    // cout << "the max element of array : ";
    // print_array(arr);
    // cout << "is: " << maxElement << endl;

    reverse_array(arr, size);
    cout << "After reversing array: ";
    print_array(arr, size);



    string input = "Hello, World!";
    cout << "Input string: " << input << endl;
    string reversed = reverse_string(input);
    cout << "Reversed string: " << reversed << endl;

    cout << endl;
    cout << "----------------------------------------------------------------" << endl;


    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}

int *create_array(size_t size, int init_value)
{

    int *new_storage{nullptr};
    new_storage = new int[size]; // Allocate memory on the heap

    for (size_t i{0}; i < size; i++)
    {
        new_storage[i] = init_value;
    }

    return new_storage; // Return the address of the allocated memory
}

void multiply_with_pointer(int *ptr, int multiplier)
{
    *ptr *= multiplier;
}

int find_max_element(int *arr, int size)
{
    int max_value = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }

    return max_value;
}

void print_array(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {   
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse_array(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end)
    {
        // swap elements pointed to by start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }
}

string reverse_string(const string& str) {
    string reversed;

    const char* start = str.c_str();                    // Pointer to the first character
    const char* end = str.c_str() + str.size() - 1;     // Pointer to the last character

    while (end >= start) {
        reversed.push_back(*end);   // Append the character at the end pointer to the reversed string
        end--;
    }

    return reversed;
}
