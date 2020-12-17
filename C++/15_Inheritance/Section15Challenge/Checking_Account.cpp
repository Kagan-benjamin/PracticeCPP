#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double fee)
    : Account{name,balance}, fee{fee} {
}

Checking_Account::~Checking_Account(){}

// methods

bool Checking_Account::withdraw(double amount){
    if (balance - (amount + fee) >= 0){
        amount += fee;
        return Account::withdraw(amount);
    }
    else {
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account){
    os << "[Checking Account: " << account.name << "| Balance: " << account.balance << "| Fee: $" << account.fee << "]";
    return os;
}