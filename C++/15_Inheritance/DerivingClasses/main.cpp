#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
using namespace std;

int main() {
	// Use the Account Class
    cout << "\n-------Account-------------------------" << endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    acc.get_balance();
    
    cout << endl;
    
    Account *p_acc{nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;
    
    // Use the Savings Account Class
    cout << "\n-------Savings Account--------------------" << endl;
    Savings_Account sav_acc{};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);
    sav_acc.get_balance();
    sav_acc.balance = 1750.0;
    sav_acc.get_balance();  
    cout << endl;
    
    Savings_Account *p_sav_acc{nullptr};
    p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;
    
    cout << endl;
    return 0;
}