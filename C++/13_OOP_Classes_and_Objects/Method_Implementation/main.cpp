#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account ben_account;
    ben_account.set_name("Ben's Account");
    ben_account.set_balance(1000.0);
    cout << "Balance is: " << ben_account.get_balance() << endl;;
    
    if (ben_account.deposit(200.0)){
        cout << "Deposit OK | " << "Balance: " << ben_account.get_balance() << endl;
    }
    else {
        cout << "Deposit not allowed" << endl;
    }
    if (ben_account.withdraw(500.0)){
        cout << "Withdrawal OK | "  << "Balance: " << ben_account.get_balance() << endl;
    }
    else {
        cout << "Insufficient Funds" << endl;
    }
    if (ben_account.withdraw(1500.0)){
        cout << "Withdrawal OK" << endl;
    }
    else {
        cout << "Insufficient Funds" << endl;
    }
    
    cout << endl;
    return 0;
}