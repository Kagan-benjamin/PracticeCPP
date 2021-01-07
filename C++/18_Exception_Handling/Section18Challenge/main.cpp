/* Section 18 Challenge
 * ----------------------------------------------
 * For this challenge, we want to integrate our own user-defined 
 * exception classes into the Account class hierarchy.
 * 
 * The account classes are provided for you. Also, the 
 * IllegalBalanceException.h file contains the declaration for the
 * IllegalBalanceException class.
 * 
 * 1. Derive IllegalBalanceException from std::exception and implement
 * the what() method to provide an exception message. This exception
 * object should be thrown from the Account class constructor when an
 * account object is created with a negative balance.
 * 
 * 2. Derive InsufficientFundsException from std::exception and implement
 * the what() method to provide an exception message. This exception
 * object should be thrown if a withdrawal results in a negative
 * balance. You should throw this exception from the Account::withdraw
 * method.
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
    unique_ptr<Account> bens_account;
    unique_ptr<Account> laylas_account;
    
    try {
        bens_account = make_unique<Savings_Account>("Ben", -2000.0);
        cout << *bens_account << endl;
    }
    catch (const IllegalBalanceException &ex) {
        cerr << ex.what() << endl;
    }
    
    try {
        laylas_account = make_unique<Savings_Account>("Layla", 1000.0);
        cout << *laylas_account << endl;
        laylas_account->withdraw(500.0);
        cout << *laylas_account << endl;
        laylas_account->withdraw(1000.0);
        cout << *laylas_account << endl;
    }
    catch (const IllegalBalanceException &ex){
        cerr << ex.what() << endl;
    }
    catch (const InsufficientFundsException &ex){
        cerr << ex.what() << endl;
    }
    
    cout << "Program completed successfully" << endl;
    return 0;
}