#include <iostream>
#include <vector>

using namespace std;

class Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Account::withdraw()" << endl;
    }
};

class Savings : public Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Savings::withdraw()" << endl;
    }
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Checking::withdraw()" << endl;
    }    
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Trust::withdraw()" << endl;
    }
};

int main() {
	cout << "\n === Pointers === " << endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    cout << "\n === Array === " << endl;
    Account *acc_array[] = {p1,p2,p3,p4};
    for (auto i=0; i<4; i++){
        acc_array[i]->withdraw(1000);
    }
    
    cout << "\n === Vector === " << endl;
    vector<Account *> accounts {p1,p2,p3,p4};
    for (auto acc_ptr : accounts){
        acc_ptr->withdraw(1000);
    }
    
    // cleanup
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    cout << endl;
    return 0;
}