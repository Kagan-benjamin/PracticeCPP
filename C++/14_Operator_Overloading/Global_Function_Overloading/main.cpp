#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring ben{"Ben"};
    ben.display();
    
    ben = -ben;
    ben.display();
    
    cout << boolalpha << endl;
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring stooge = larry;
    
    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;
    Mystring stooges = "Larry" + moe;
    stooges.display();
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();
    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();
    
    
    cout << endl;    
    return 0;
}