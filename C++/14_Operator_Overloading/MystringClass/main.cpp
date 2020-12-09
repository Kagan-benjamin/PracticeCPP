#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
	Mystring empty;           // no-args constructor
    Mystring larry{"Larry"};  // overloaded constructor
    Mystring stooge{larry};   // copy constructor  
    
    empty = larry;              // copy assignemnt
    empty = "This is a test";   // empty.operator=(larry)
                            // empty.operator=("This is a test")
                            
    Mystring a{"Hello"};      // overloaded constructor
    a = Mystring{"Hola"};   // oc then move assignment 
    a = "Bonjour";          // oc then move assignment 
    
    stooge.display();
    empty.display();
    cout << endl;
    return 0;
}