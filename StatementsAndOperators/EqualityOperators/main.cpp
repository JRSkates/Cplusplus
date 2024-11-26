#include <iostream>

using namespace std;

int main() {
    // bool types are binary: true (1) or false (0)

    bool result {false};

    cout << result << endl; // prints 0
    result = true;
    cout << result << endl; // prints 1

    cout << std::boolalpha; // sets it to be true and false rather than 1 and 0
    cout << result << endl; // prints true
    result = false;
    cout << result << endl; // prints false

    cout << std::noboolalpha; // sets it back to 1 for true and 0 for false

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;

    bool equal_result {false};
    bool not_equal_result {false};


    char char1{}, char2{};
    cout << "Enter two characters: " << endl;
    cin >> char1 >> char2;

    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);

    cout << "Equal: " << equal_result << endl;
    cout << "Not equal: " << not_equal_result << endl;

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;




    return 0;
}
