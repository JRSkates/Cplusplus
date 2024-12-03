// Include Guard
// The compiler will only include this once guy to this guard
// If we were using this in different files without the guard
// we would get a compiler error
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account {
private:
    double balance;

public:
    // Method prototypes
    void set_balance(double balance);

    double get_balance();
};


#endif // _ACCOUNT_H_