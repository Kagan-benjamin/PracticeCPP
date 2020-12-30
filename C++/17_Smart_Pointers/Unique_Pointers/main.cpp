#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "Checking_Account.h"
//#include "Savings_Account.h"
//#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

class Test {
private:
    int data;
public:
    Test() : data{0} {cout << "Test Constructor (" << data << ")" << endl;}
    Test(int data) : data{data} {cout << "Test Constructor (" << data << ")" << endl;}
    int get_data() const {return data;}
    ~Test() {cout << "Test Destructor (" << data << ")" << endl;}
};


int main() {
//    Test *t1 = new Test{1000};
    cout << "=====Smart Pointers with Test class=====" << endl;
    unique_ptr<Test> t2{new Test{100}};
    unique_ptr<Test> t3 = make_unique<Test>(5000);
    unique_ptr<Test> t4;
    t4 = move(t2);
    if (!t2) {
        cout << "t2 is nullptr" << endl;
    }
    
    cout << "=====Smart Pointers with Account Classes=====" << endl; 
    unique_ptr<Account> a1 = make_unique<Checking_Account>("Ben's Account", 5500);
    cout << *a1 << endl;
    a1->deposit(5000);
    cout << *a1 << endl;
    unique_ptr<Account> a2 = make_unique<Checking_Account>("Layla's Account", 7000);
    
    
    vector<unique_ptr<Account>> accounts;
    accounts.push_back(move(a1));
    accounts.push_back(move(a2));
    cout << "\nVector: " << endl;
    for (const auto &acc : accounts) {
        cout << *acc << endl;
    } 
	cout << endl;
//    delete t1;
    return 0;
}