#include <iostream>
#include <vector>
#include <string>
#include <cmath> // included to use C math library functions

using namespace std;
// A Reference is an alias for a variable
// Must be initalised to a variable when declared
// Cannot be null
// Once initialised cannot be made to refer to a different variable
// Very useful as function parameters
// Might be helpful to think of a reference as a constant pointer that is automatically dereferenced

int main()
{
    cout << "================================================================" << endl;
    cout << endl;
    // Using references in range-based for loop
    vector<string> stooges {"Larry", "Moe", "Curly"};

    // Rather than making a copy 
    // we reference the element and change it through iteration
    for (auto &str : stooges)
        str = "Funny";

    // for (auto const &str : stooges) 
    //     str = "Funny";
    // compiler error

    // const can be used when you know you DON'T want to modify the values
    for (auto const str : stooges) {
        cout << str << " ";
    }
   
    cout << endl;
    cout << "----------------------------------------------------------------" << endl;

    int num {100};
    int &ref {num};

    cout << "Value of num is: " << num << endl;
    cout << "Value of ref is: " << ref << endl;

    num = 200;

    cout << "After modifying num: " << num << endl;
    cout << "Ref after modifying num: " << ref << endl;

    ref = 300;

    cout << "Num after modifying ref: " << num << endl;
    cout << "After modifying ref: " << ref << endl;

    cout << endl;
    cout << "----------------------------------------------------------------" << endl;

    // l-values are values that have names and are addressable 
    // modifiable if they are not constants
    int x {100}; // x is an l-value
    x = 1000;
    x = 1000 + 20;

    string name; // name is an l-value
    name = "John Doe";

    // r-values are values that are not addressable and non-assignable (or cannot be modified)
    // usually on the right side of an assignment expression
    // a literal
    // a temporary which is intended to be non-modifiable

    int y {100}; // 100 is an r-value
    int z = x + 200; // (x + 200) is an r-value

    string location;
    location = "New York"; // "New York" is an r-value

    int max_num = max(20, 30); // max(20, 30) is an r-value


    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}

