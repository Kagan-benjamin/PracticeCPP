#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
	cout << boolalpha << endl;
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    
    Mystring stooge = larry;
    larry.display();           // Larry
    moe.display();             // Moe
    
    cout << (larry == moe) << endl;    // false
    cout << (larry == stooge) << endl; // true
    
    Mystring larry2 = -larry;
    larry2.display();     // larry
    
    Mystring stooges = larry + "Moe";
    // Mystring stooges = "Larry" + moe; ERROR
    
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();  // Moe Larry
    
    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();
    
    
    cout << endl;
    return 0;
}