#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num{255};
    
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;
    
    cout << "----------------std::showbase------------------" << endl;
    cout << showbase;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;
    
    cout << "----------------std::uppercase------------------" << endl;
    cout << uppercase;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;

    cout << "----------------std::showpos------------------" << endl;
    cout << showpos;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;

    // setting using the set method
    cout.setf(ios::showbase);
    cout.setf(ios::uppercase);
    cout.setf(ios::showpos);
    
    // resetting to defaults 
    cout << resetiosflags(ios::basefield);
    cout << resetiosflags(ios::showbase);
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::uppercase);
    
    cout << "-------------User Input-----------------" << endl;
    cout << "Please enter an integer: ";
    cin >> num;
    
    cout << "Decimal Default: " << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;
    cout << "Hex Upper: " << hex << uppercase << num << endl;
    cout << "Hex Lower: " << hex << nouppercase << num << endl;
    cout << "Octal: " << oct << num << endl;
    cout << "Hexadecimal: " << hex << showbase << num << endl;
    cout << "Octal: " << oct << num << endl;
    
    return 0;
}