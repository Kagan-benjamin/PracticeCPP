#include <iostream>

using namespace std;

class Account {
public:
    virtual void withdraw(double amount) const {
        cout << "In Account::withdraw() with " << amount << endl;
    }
    virtual ~Account() {}
};

class Savings : public Account {
public:
    virtual void withdraw(double amount) const override {
        cout << "In Savings::withdraw() with " << amount << endl;
    }
    virtual ~Savings() {}
};

class Checking: public Account {
public:
    virtual void withdraw(double amount) const override {
        cout << "In Checking::withdraw() with " << amount << endl;
    }
    virtual ~Checking() {}
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) const override {
        cout << "In Trust::withdraw() with " << amount << endl;
    }
    virtual ~Trust() {}
};

void do_withdraw(Account &account, double amount) {
    account.withdraw(amount);   // correct version of withdraw() is 
}                               // called dynamically

int main() {
	Account a;
    Account &ref = a;
    ref.withdraw(1000);  // in Account::withdraw()
    
    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000); // in Trust::withdraw()
    
    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;
    
    do_withdraw(a1, 1000);
    do_withdraw(a2, 2000);    // dynamically calls correct class method
    do_withdraw(a3, 3000);
    do_withdraw(a4, 4000);
    
    cout << endl;
    return 0;
}