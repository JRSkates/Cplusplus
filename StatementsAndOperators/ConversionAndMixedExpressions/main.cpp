#include <iostream>

using namespace std;

int main() {
    // Convertion between types depends on what is lower or higher
    // higher vs lower types are based on the size of the values the type can hold
    // eg: long double > long > int
    
    // the 2 here is promoted to a higher. 2 becomes 2.0 for this expression
    // cout << 2 * 5.2 << endl;  // Output: Result: 10.4

    // the 100.2 is the higher, and is demoted to the lower, 100
    // int num {0};
    // num = 100.2;
    // cout << "num is: " << num << endl;  // Output: num is: 100

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;

    // static_cast is used to explicitly convert one data type to another.
    cout << "Conversion between types (casting)" << endl;

    int total_amount {100};
    int total_number {8};
    double casting_average {0.0};

    cout << "Total amount: " << total_amount << endl;
    cout << "Total number: " << total_number << endl;

    casting_average = total_amount / total_number;
    cout << "Average without static_cast: " << casting_average << endl; // Output: 12

    casting_average = static_cast<double>(total_amount) / total_number;
    cout << "Average with static_cast: " << casting_average << endl; // Output: 12.5

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;

    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter three integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = total / count;
    cout << "Total: " << total << endl;
    cout << "Average without static_cast: " << average << endl; // Output: 15.0

    average = static_cast<double>(total) / count;
    cout << "Total: " << total << endl;
    cout << "Average with static_cast: " << average << endl;

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}
