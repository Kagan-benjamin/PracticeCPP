/*  Section 16 Challenge -
 * 
 * 1. Modify the Account class so that it is now an Abstract class by
 * adding the following pure virtual functions:
 *  -virtual bool deposit(double amount) = 0;
 *  -virtual bool withdraw(double amount) = 0;
 * 
 * 2. Create an I_Printable class interface as we did in the course and
 * provide functionality so all accounts are printable to an ostream 
 * using the overloaded insertion operator.
 * 
 * class I_Printable {
 *      friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
 * public:
 *      virtual void print(std::ostream &os) const = 0;
 *      virtual ~I_Printable() = default;
 * };
 * 
 * 3. Modify the functions in the Account_Util files so we only have one
 * version of each. For example:
 * 
 * void display(const std::vector<Account *> &accounts);
 * void deposit(std::vector<Account *> &accounts, double amount);
 * void withdraw(std::vector<Account *> &accounts, double amount);
 * 
 * Note that the vector is a vector of pointers to Account objects,
 * <Account *>. This is what we need for dynamic polymorphism.
 * 
 * 4. Test your code with base class pointers as well as local objects.
 *
 * Hints:
 * -Reuse existing functionality.
 * -If your class has a virtual function, then be sure to implement a 
 * virtual destructor.
 * -You can have the C++ compiler generate a default destructor for you
 * with: virtual ~Class_Name() = default;
 * -Take it one step at a time.
 * -Start by making the Account class abstract by adding the pure virtual
 * functions.
 */

#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;


int main() {
    
//  Account ben;  Cannot declare variable to be of Abstract type Account
    Checking_Account c;
    cout << c << endl;
    Checking_Account d {"D Checking", 7250};
    cout << d << endl;
    Savings_Account ben {"Ben", 5000, 2.6};
    cout << ben << endl;
    ben.deposit(10000);
    cout << ben << endl;
    ben.withdraw(9000);
    cout << ben  << endl;
    
    Account *ptr = new Trust_Account{"Leo",10000,2.6};
    cout << *ptr << endl;
    
    Account *p1 = new Checking_Account{"Larry",15500};
    Account *p2 = new Savings_Account{"Moe", 1366};
    Account *p3 = new Trust_Account{"Curly"};
    
    vector<Account *> accounts {p1,p2,p3};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    display(accounts);
    
    delete ptr;
    delete p1;
    delete p2;
    delete p3;
    
    cout << endl;
    return 0;
}