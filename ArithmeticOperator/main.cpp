#include <iostream>

using namespace std;

int main() {
    int num1 {200};
    int num2 {100};

    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;
    cout << "================================================================" << endl;

    int result {0};

    // Arithmetic operations
    result = num1 + num2;
    cout << "num1 + num2 is: " << result << endl;

    result = num1 - num2;
    cout << "num1 - num2 is: " << result << endl;

    result = num1 * num2;
    cout << "num1 * num2 is: " << result << endl;

    result = num1 / num2;
    cout << "num1 / num2 is: " << result << endl;

    // Modulus operation
    // Gives the remainder of a / b
    cout << "num1 mod num2 is: " << num1 % num2 << endl;

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;

    const double usd_per_eur {1.19};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Please enter the amount of EUR you want to convert: ";

    double euros {0.0};
    double dollars {0.0};

    cin >> euros;
    dollars = euros * usd_per_eur;
    cout << "€" << euros << " in USD is: $" << dollars << endl;

    return 0;
}
