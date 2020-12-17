#include "Trust_Account.h"

// Constructors 
Trust_Account::Trust_Account(std::string name, double balance, double int_rate, int withdrawal_number)
    : Savings_Account{name, balance, int_rate}, withdrawal_number{withdrawal_number} {
}

Trust_Account::~Trust_Account(){}

// Methods
bool Trust_Account::deposit(double amount) {
    if (amount > 0){
        if (amount >= 5000){
            amount += 50;
            return Savings_Account::deposit(amount);
        }
        else {
            return Savings_Account::deposit(amount);
        }
    }
    else {
        return false;
    }
}

bool Trust_Account::withdraw(double amount) {
    if (balance - amount < 0){
        std::cout << "Insufficient Funds"; 
        return false;
    }
    else if (withdrawal_number >= 4){
        std::cout << "Exceeded number of allowed withdrawals";
        return false;
    }
    else if (amount > (balance * .2)){
        std::cout << "Withdrawal request exceeds 20% of balance";
        return false;
    } 
    else {
        withdrawal_number++;
        return Account::withdraw(amount);
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "Trust Account: " << account.name << " | Balance: " << account.balance << " | Int Rate: " << account.int_rate  << " | Withdrawal #: " << account.withdrawal_number; 
}