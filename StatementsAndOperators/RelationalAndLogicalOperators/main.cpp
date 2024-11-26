#include <iostream>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    int num1{}, num2{};

    cout << boolalpha;
    cout << "Enter two integers separated by spaces: ";
    cin >> num1 >> num2;

    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
    cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;
    cout << num1 << " == " << num2 << ": " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << ": " << (num1!= num2) << endl;
    cout << num1 << " && " << num2 << ": " << (num1 && num2) << endl;
    cout << num1 << " || " << num2 << ": " << (num1 || num2) << endl;
    cout << "!" << num1 << ": " << (!num1) << endl;
    cout << "!" << num2 << ": " << (!num2) << endl;

    // not ! has a higher precedence than and &&
    // and && has high precedence than or ||
    
    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}
