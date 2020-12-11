#ifndef _MONEY_MONEY_H
#define _MONEY_MONEY_H


#include <iostream>

class Money {
    int dollars;
    int cents;
public:
    Money(int dollars, int cents); 
    Money(int total);

    //----WRITE YOUR METHOD DECLARATIONS BELOW THIS LINE----
    bool operator==(const Money &rhs) const;
    bool operator!=(const Money &rhs) const;
    
    //----WRITE YOUR METHOD DECLARATIONS ABOVE THIS LINE----
};


#endif //_MONEY_MONEY_H