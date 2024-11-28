#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// Recursive functions are functions that call themselves
// Either directly or indirectly through another function
// 2 ore more activation records on the stack for the same function
// Anything that can be done recursively can be done iteratively

// Function prototypes
unsigned long long factorial(unsigned long long n);
unsigned long long fibonacci(unsigned long long n);
int sum_of_digits(int n);

int main()
{
    cout << "================================================================" << endl;
    cout << endl;

    cout << factorial(3) << endl; // 6
    //factorial(0)      |  n = 0 - Condition met! Returns 1 and sends us down the stack 
    //factorial(1)      |  n = 1  ->  return 1 * factorial((1 - 1) == 0) == (1 * 1)
    //factorial(2)      |  n = 2  ->  return 2 * factorial((2 - 1) == 1) == (2 * 1)
    //factorial(3)      |  n = 3  ->  return 3 * factorial((3 - 1) == 2) == (3 * 2)
    //main              |  factorial(3) return 3 * 2 = 6

    cout << fibonacci(30) << endl; // 832040

    cout << "----------------------------------------------------------------" << endl;

    cout << "Sum of digits recursive function" << endl;
    cout << sum_of_digits(12345) << endl; // 15
    cout << sum_of_digits(5678) << endl; // 5678

    cout << "================================================================" << endl;
    cout << endl;

    return 0;
}

// Function definitions
unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1); // recursive call to factorial function
}

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call to fibonacci function
}

int sum_of_digits(int n) {
    // Write your code below this line
    if (n == 0)
        return 0;
    else
        return (n % 10 + sum_of_digits(n / 10));
    
    
    // Write your code above this line
}