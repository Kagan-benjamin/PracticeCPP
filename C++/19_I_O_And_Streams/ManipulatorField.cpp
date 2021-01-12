#include <iostream>
#include <iomanip>

using namespace std;

void ruler() {
    cout << "\n123456789012345678901234567890123456789012345678901234567890" << endl;
}

int main() {
	int num1{1234};
    double num2{1234.5678};
    string hello{"Hello"};
    
    // Default on 1 line
    cout << "\n------------Defaults 1 Line----------------";
    ruler();
    cout << num1 << num2 << hello << endl;
    // Default separate lines
    cout << "\n------------Defaults Separate Lines--------";
    ruler();
    cout << num1 << endl;
    cout << num2 << endl;
    cout << hello << endl;
    // Set 1st field width to 10 
    cout << "\n------------Set 1st field width to 10--------";
    ruler();
    cout << setw(10) << num1;
    cout << num2 << hello << endl;
    // Set 1st, 2nd field width to 10
    cout << "\n------------Set 1st, 2nd field width to 10--------";
    ruler();
    cout << setw(10) << num1;
    cout << setw(10) << num2 << hello << endl;
    // Set 1st, 2nd, 3rd field width to 10
    cout << "\n------------Set 1st, 2nd, 3rd field width to 10--------";
    ruler();
    cout << setw(10) << num1;
    cout << setw(10) << num2;
    cout << setw(10) << hello << endl; 
    // Set 1st, 2nd, 3rd field width to 10, Justified Left
    cout << "\n--Justify L--Set 1st, 2nd, 3rd field width to 10--------";
    ruler();
    cout << setw(10) << left << num1;
    cout << setw(10) << left << num2;
    cout << setw(10) << left << hello << endl; 
    // Change setfill to '-'
    cout << "\n--Justify L, Setfill (-) --Set 1st, 2nd, 3rd field width to 10--------";    
    cout << setfill('-');
    ruler();
    cout << setw(10) << left << num1;
    cout << setw(10) << left << num2;
    cout << setw(10) << left << hello << endl; 
    // Change setfill to '*' for 1st, '#' for 2nd, '-' for 3rd fields 
    cout << "\n--Justify L, Setfill (*,#,-) --Set 1st, 2nd, 3rd field width to 10--------";    
    cout << setfill('*');
    ruler();
    cout << setw(10) << left << num1;
    cout << setfill('#') << setw(10) << left << num2;
    cout << setfill('-') << setw(10) << left << hello << endl; 
    
    cout << endl;
    return 0;
}