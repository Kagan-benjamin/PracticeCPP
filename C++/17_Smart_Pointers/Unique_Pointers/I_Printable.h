#ifndef I_PRINTABLE_H_
#define I_PRINTABLE_H_

#include <iostream>

class I_Printable {   // We want the stream on the left side, and the object to be inserted on the right 
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);  // this cannot be done with a member function
public:
    virtual ~I_Printable() = default;
    virtual void print(std::ostream &os) const = 0; // pure virtual function
};

#endif // I_PRINTABLE_H_