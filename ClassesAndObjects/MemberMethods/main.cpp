#include <iostream>
#include <vector>
#include <string>
// include the Account class
#include "Account.h"

using namespace std;
// Member methods have access to member attributes
// Can be implemented inside the class declaration
// Can also be implemented outside the class declaration
// .h file for the class declaration
// .cpp file for the class implementation


int main() {
    cout << "================================================================" << endl;
    cout << endl;

    Account my_account;
    my_account.set_balance(1000);
    cout << "Current balance: $" << my_account.get_balance() << endl;

    my_account.set_balance(my_account.get_balance() + 500);
    cout << "New balance after deposit: $" << my_account.get_balance() << endl;

    my_account.set_balance(my_account.get_balance() - 200);
    cout << "New balance after withdrawal: $" << my_account.get_balance() << endl;

    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}

// Need to complie this manually with:
// clang++ -std=c++17 main.cpp Account.cpp -o main && ./main
// We can change the task.json file to allow this in a specific project
// But not for the general usage we have here