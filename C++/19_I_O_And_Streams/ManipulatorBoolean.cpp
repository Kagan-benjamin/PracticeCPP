#include <iostream>
#include <iomanip>  // Must include for manipulators

using namespace std;

int main() {
    cout << "noboolalpha - default (10 == 10): " << (10 == 10) << endl;
    cout << "noboolalpha - default (10 == 20): " << (10 == 20) << endl;
    
    // Set to true/false formatting 
    cout << boolalpha;  // change to true/false
    cout << "boolalpha (10 == 10): " << (10 == 10) << endl;
    cout << "boolalpha (10 == 20): " << (10 == 20) << endl;
    // Setting persists 
    cout << "boolalpha (10 == 10): " << (10 == 10) << endl;
    
    // Toggle to 0/1
    cout << noboolalpha;
    cout << "noboolalpha (10 == 10): " << (10 == 10) << endl;
    cout << "noboolalpha (10 == 20): " << (10 == 20) << endl;
    
    // Set back to true/false using setf method
    cout.setf(ios::boolalpha);
    cout << "boolalpha (10 == 10): " << (10 == 10) << endl;
    cout << "boolalpha (10 == 20): " << (10 == 20) << endl;
    
    // Reset to default, 0/1
    cout << resetiosflags(ios::boolalpha);
    cout << "Default (10 == 10): " << (10 == 10) << endl;
    cout << "Default (10 == 20): " << (10 == 20) << endl;
    
 return 0;
}