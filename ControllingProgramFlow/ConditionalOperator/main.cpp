#include <iostream>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    int num {};

    cout << "Enter a number: ";
    cin >> num;

    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

    cout << "================================================================" << endl;
    cout << endl;

    int num1 {}, num2 {};

    cout << "Enter two numbers separated by spaces: ";
    cin >> num1 >> num2;

    cout << ((num1 == num2) ? "These numbers are the same" : "These numbers are different") << endl;

    if (num1 != num2) {
        cout << "The larger number is: " << ((num1 > num2)? num1 : num2) << endl;
        cout << "The smaller number is: " << ((num1 < num2)? num1 : num2) << endl;
    } else {
        cout << "The numbers are equal" << endl;
    }

    return 0;
}