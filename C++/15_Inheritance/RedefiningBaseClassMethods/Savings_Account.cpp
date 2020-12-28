#include "Savings_Account.h"

Savings_Account::Savings_Account()
    : Savings_Account{0.0,0.0} {
}

Savings_Account::Savings_Account(double balance, double int_rate)
    : Account(balance), int_rate{int_rate} {
}

Savings_Account::~Savings_Account(){}

void Savings_Account::deposit(double amount){
    amount += (amount * int_rate/100);
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account){
    os << "Savings Account Balance: " << account.balance << " | " << "Interest Rate: " << account.int_rate;
    return os;
}