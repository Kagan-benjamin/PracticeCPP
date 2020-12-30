#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include "I_Printable.h"
#include <iostream>
#include <string>

class Account : public I_Printable {    // now an Abstract Base Class
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0; 
protected:                                   
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual ~Account() = default;
    
    virtual void print(std::ostream &os) const override;
    virtual bool deposit(double amount) = 0;   // pure virtual function
    virtual bool withdraw(double amount) = 0;  // pure virtual function
    double get_balance() const;
};

#endif // _ACCOUNT_H_
