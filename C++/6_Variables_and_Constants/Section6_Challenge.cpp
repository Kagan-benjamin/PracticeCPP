#include <iostream>
using namespace std;

int main() {
    
    cout << "Hello, welcome to Ben's Cleaning Service!" << endl;
	cout << "\nHow many small rooms would you like cleaned? ";
    int small_rooms {0};
    cin >> small_rooms;
    
    cout << "How many large rooms would you like cleaned? ";
    int large_rooms {0};
    cin >> large_rooms;
    
    const double price_per_small {25.00};
    const double price_per_large {35.00};
    const double sales_tax {0.06};
    const int estimate_expiration {30}; // days
    
    double pretax_cost {0.00};
    pretax_cost = (small_rooms * price_per_small) + (large_rooms * price_per_large);
    double tax_cost {0.00};
    tax_cost = pretax_cost * sales_tax;
    
    cout << "\nOverall Cleaning Estimate:" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_per_small << endl;
    cout << "Price per large room: $" << price_per_large << endl;
    cout << "Cost: $" << pretax_cost << endl;
    cout << "Tax: $" << tax_cost << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Total Estimate: $" << pretax_cost + tax_cost << endl;
    cout << "This estimate is valid for: " << estimate_expiration << " days." << endl << endl;
    return 0;
}