#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double num1{123456789.987654321};
    double num2{1234.5678};
    double num3{1234.0};
//      DEFAULT:
// Using Default Settings:
    cout << "-----------Defaults:-----------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
// Using Precision of 2:
    cout << setprecision(2);
    cout << "-----------Precision 2----------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
// Using Precision of 5:
    cout << setprecision(5);
    cout << "-----------Precision 5----------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
// Using Precision of 9:
    cout << setprecision(9);
    cout << "-----------Precision 9----------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;    

//         FIXED:    
// Using Precision of 3 and Fixed
    cout << setprecision(3) << fixed;
    cout << "-----Precision 3 and Fixed-------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;  
// Using Precision of 3 and Scientific Notation
    cout << setprecision(3) << scientific; 
    cout << "-----Precision 3 and Scientific-------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;      
// Using Precision of 3 and Scientific Notation, Uppercase
    cout << setprecision(3) << scientific << uppercase; 
    cout << "-----Precision 3 and Uppercase Scientific-------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;   
// Using Precision of 3 and Scientific Notation, Uppercase, Showpos
    cout << setprecision(3) << scientific << uppercase << showpos; 
    cout << "-----Precision 3 and Uppercase Scientific w/+ ---" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;   
       
    cout << setprecision(10) << showpoint;
    cout << "-----Precision 3 and Uppercase Scientific w/+ ---" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;   
    
// Back to Defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout << setprecision(6);
    cout << resetiosflags(ios::uppercase);
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::showpoint);
    cout << "-----Back to Defaults---" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;  


    return 0;
}