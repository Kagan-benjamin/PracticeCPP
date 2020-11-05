#include <iostream>
using namespace std;

int main() {
    
    cout << "Hello, welcome to Ben's Cleaning Service!" << endl;
	cout << "\nHow many rooms would you like cleaned? ";
    int num_of_rooms {0};
    cin >> num_of_rooms;
    
    const double price_per_room {30.00};
    const double sales_tax {0.06};
    const int estimate_expiration {30}; // days
    
    cout << "\nOverall Cleaning Estimate:" << endl;
    cout << "Number of rooms: " << num_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << num_of_rooms * price_per_room << endl;
    cout << "Tax: $" << num_of_rooms * price_per_room * sales_tax << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Total Estimate: $" << (num_of_rooms * price_per_room) + (num_of_rooms * price_per_room * sales_tax) << endl;
    cout << "This estimate is valid for: " << estimate_expiration << " days." << endl;
    return 0;
}