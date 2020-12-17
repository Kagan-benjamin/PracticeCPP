/*   Section 15 Challenge - Inheritance
 *  You are provided with a simple Account class hierarchy that contains:
 *  Account -         Base class
 *  Savings_Account - Derived class
 *  
 *  An Account has a std::string name and double balance
 *  A Savings_Account is an Account and adds an int_rate
 * 
 *  We have some Account/Savings_Account helper functions in 
 *  Account_Util.h and Account_Util.cpp for display, deposit
 *  and withdraw from a vector of Accounts and Savings_Accounts
 * 
 *  1. Add a Checking_Account class to the Account hierarchy
 *      -A Checking_Account has a std::string name, a double balance
 *  and has a double fee ofr $1.50 per withdrawal transaction
 *      -Every withdrawal transaction will be assessed this flat fee
 * 
 *  2. Add a Trust_Account class to the Account hierarchy
 *      -A Trust_Account has a std::string name, a double balance,
 *  and a double int_rate.
 *      -The Trust_Account deposit works just like a Savings_Account
 *  deposit, however deposits of $5000 or more will receive a $50
 *  bonus deposited to the account.
 *      -The Trust_Account withdrawal should only allow 4 withdrawals,
 *  and each of these must be less than 20% of the account balance.
 */

#include <iostream>
#include <vector>
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;


int main() {
    cout.precision(2);
    cout << fixed;
    
    // Accounts
//    vector<Account> accounts;
//    accounts.push_back(Account{});
//    accounts.push_back(Account{"Larry"});
//    accounts.push_back(Account{"Moe", 2000});
//    accounts.push_back(Account{"Curly", 5000});
//    
//    display(accounts);
//    deposit(accounts, 1000);
//    withdraw(accounts, 2000);
    
    // Savings Accounts
//    vector<Savings_Account> sav_accounts;
//    sav_accounts.push_back(Savings_Account{});
//    sav_accounts.push_back(Savings_Account{"Superman"});
//    sav_accounts.push_back(Savings_Account{"Batman", 2000});
//    sav_accounts.push_back(Savings_Account{"Wonderwoman", 5000, 5.0});
//    
//    display(sav_accounts);
//    deposit(sav_accounts, 1000);
//    withdraw(sav_accounts, 2000);
    
    // Checking Accounts
//    vector<Checking_Account> check_accounts;
//    check_accounts.push_back(Checking_Account{});
//    check_accounts.push_back(Checking_Account{"Ben"});
//    check_accounts.push_back(Checking_Account{"Layla", 2500});
//    check_accounts.push_back(Checking_Account{"Dan", 6000, 2.50});
//    
//    display(check_accounts);
//    deposit(check_accounts, 1000);
//    withdraw(check_accounts, 1500);
    
    // Trust Accounts 
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Kosar"});
    trust_accounts.push_back(Trust_Account{"Bob", 7500});
    trust_accounts.push_back(Trust_Account{"Olga", 13000, 4.5});
    trust_accounts.push_back(Trust_Account{"Mike", 25000, 2.5, 3});
    
    display(trust_accounts);
    deposit(trust_accounts, 1000);
    deposit(trust_accounts, 5000);
    withdraw(trust_accounts, 2000);
    withdraw(trust_accounts, 2500);
    withdraw(trust_accounts, 2000);
    withdraw(trust_accounts, 3000);
    withdraw(trust_accounts, 50);
    
	cout << endl;
    return 0;
}