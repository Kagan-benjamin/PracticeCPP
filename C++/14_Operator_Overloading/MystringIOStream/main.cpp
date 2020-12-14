#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
	Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;
    
    cout << "Enter the third stooge's first name: ";
    cin >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    
    cout << "\nEnter each stooge name separated by a space: ";
    cin >> larry >> moe >> curly;
    
    cout << "The three stooges are now " << larry << ", " << moe << ", and " << curly << endl;
    
    cout << endl;
    return 0;
}