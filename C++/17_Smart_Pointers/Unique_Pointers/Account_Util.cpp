#include <iostream>
#include "Account_Util.h"

void display(const std::vector<std::unique_ptr<Account>> accounts) {
    std::cout << "\n===== Accounts =====" << std::endl;
    for (const auto &acc : accounts) {
        std::cout << *acc << std::endl;
    }
}

//void deposit(std::vector<std::unique_ptr<Account>> accounts, double amount) {
//    std::cout << "\n===== Depositing to Accounts =====" << std::endl;
//    for (auto &acc : accounts) {
//        if (acc->deposit(amount)){
//            std::cout << "Deposited: " << amount << " to " << *acc << std::endl;
//        }
//        else {
//            std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl; 
//        }
//    }
//}

//void withdraw(std::vector<std::unique_ptr<Account>> accounts, double amount) {
//    std::cout << "\n ===== Withdrawing from Accounts =====" << std::endl;
//    for (auto &acc : accounts) {
//        if (acc->withdraw(amount)){
//            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
//        }
//        else {
//            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
//        }
//    }
//}