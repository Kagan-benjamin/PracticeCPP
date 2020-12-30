#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include <memory>
#include "Account.h"

//Utility helper functions for Account * class

void display(const std::vector<std::unique_ptr<Account>> accounts);
//void deposit(std::vector<std::unique_ptr<Account>> accounts, double amount);
//void withdraw(std::vector<std::unique_ptr<Account>> accounts, double amount);

#endif // _ACCOUNT_UTIL_H_

// oh hi mark