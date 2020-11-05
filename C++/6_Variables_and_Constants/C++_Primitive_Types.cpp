#include <iostream>
using namespace std;

int main() {
	// Character Type //
    char mid_initial {'J'}; // note single quotes for single chars
    cout << "My middle initial is " << mid_initial << endl;
    
    // Integer Types //
    unsigned short int exam_score {55}; // same as unsigned short
    cout << "My exam score is " << exam_score << endl;
    
    int countries_represented {75}; //
    cout << "There were " << countries_represented << " represented." << endl;
    
    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida." << endl;
    
    long long people_on_earth {7600000000};
    cout << "There are about " << people_on_earth << " people on Earth." << endl;
        
    // Floating Point Types //
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "Pi is about " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very large number." << endl;
    
    // Boolean Type //
    bool game_over {false};
    cout << "The value of gameOver is " << game_over << endl;
    
    // Overflow Example //
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};
    
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
    
    return 0;
}
