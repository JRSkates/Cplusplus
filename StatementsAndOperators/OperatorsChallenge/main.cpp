#include <iostream>

using namespace std;

int main() {
    cout << "================================================================" << endl;
    cout << endl;

    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int change_amount {};

    cout << "Enter the amount of money in cents: ";
    cin >> change_amount;

    int balance {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "Change Provided: " << endl;
    cout << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, " << pennies << " pennies" << endl;
    
    cout << endl;
    cout << "================================================================" << endl;

    return 0;
}