#include <iostream>

using namespace std;

int main() {
    int num1 {10};
    int num2 {20};

    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;

    // Assigning the expression on the right hand side
    // To the location on the left hand side
    num1 = 100;

    // The value or num1 has changed:
    cout << "num1 is now: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;

    // Arithmetic operations
    cout << "num1 + num2 is: " << num1 + num2 << endl;
    cout << "num1 - num2 is: " << num1 - num2 << endl;
    cout << "num1 * num2 is: " << num1 * num2 << endl;
    cout << "num1 / num2 is: " << static_cast<double>(num1) / num2 << endl;

    // Modulus operation
    cout << "num1 mod num2 is: " << num1 % num2 << endl;

    // Increment and decrement operations
    num1++;
    cout << "num1 incremented by 1 is: " << num1 << endl;

    num1--;
    cout << "num1 decremented by 1 is: " << num1 << endl;

    cout << endl;
    return 0;
}
