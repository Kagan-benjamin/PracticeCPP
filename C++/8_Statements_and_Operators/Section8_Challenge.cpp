#include <iostream>
using namespace std;

int main() {
	cout << boolalpha;
    int balance{}, num_of_cents{}, dollars{}, quarters{}, dimes{}, nickels{};
    cout << "Please enter the number of cents that you have: ";
    cin >> num_of_cents;
    balance = num_of_cents;
    
    dollars = balance / 100;
    balance = balance - (dollars * 100);
    quarters = balance / 25;
    balance = balance - (quarters * 25);
    dimes = balance / 10;
    balance = balance - (dimes * 10);
    nickels = balance / 5;
    balance = balance - (nickels * 5);
    cout << "Dollars: " << dollars << endl; 
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << balance << endl;
    cout << "The original value was: " << num_of_cents << " pennies." << endl;
    
    
// RESET VARIABLES AND SOLUTION w/ MODULO
    
//    balance = dollars = quarters = dimes = nickels = 0;
//    dollars = num_of_cents / 100;
//    balance = num_of_cents % 100;
//    
//    quarters = balance / 25;
//    balance %= 25;
//    
//    dimes = balance / 10;
//    balance %= 10;
//    
//    nickels = balance / 5;
//    balance %= 5;
//    
//    cout << "Dollars: " << dollars << endl; 
//    cout << "Quarters: " << quarters << endl;
//    cout << "Dimes: " << dimes << endl;
//    cout << "Nickels: " << nickels << endl;
//    cout << "Pennies: " << balance << endl;
//    cout << "The original value was: " << num_of_cents << " pennies." << endl;
    
    return 0;
}