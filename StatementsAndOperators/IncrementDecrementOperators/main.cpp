#include <iostream>

using namespace std;

int main()
{   int input {0};

    cout << "Enter a number for your Counter: " << endl;
    cin >> input;
    
    int counter{input};
    int result{0};

    // Simple increment
    cout << "Counter: " << counter << endl;

    // Increment Operator, increments by 1
    counter++;
    cout << "Counter after increment: " << counter << endl;

    // Pre-increment Operator, also increments by 1
    ++counter;
    cout << "Counter after pre-increment: " << counter << endl;

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;

    counter = input;

    cout << "Counter Reset to: " << counter << endl;

    // You CAN assign a variable to the value of a pre-incremented value
    result = ++counter; // Note the pre-increment operator
    cout << "Counter after pre-increment: " << counter << endl;
    cout << "Result after assigned to counter pre-increment: " << result << endl;

    counter = input;
    cout << "Counter Reset to: " << counter << endl;

    // You CANNOT assign a variable to the value of a post-incremented value
    result = counter++; // Note the post-increment operator
    cout << "Counter after post-increment: " << counter << endl;
    cout << "Result assigns before counter post-increment: " << result << endl;

    cout << endl;
    cout << "================================================================" << endl;
    cout << endl;

    counter = 10;


    return 0;
}
