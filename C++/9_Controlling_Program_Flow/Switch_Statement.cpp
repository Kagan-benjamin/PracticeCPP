#include <iostream>
using namespace std;

int main() {
	char letter_grade {};
    cout << "Please enter the letter grade that you earned: ";
    cin >> letter_grade;
    
    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "You earned a 90 or above, great job!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You earned an 80 to 89." << endl;
            break;
        case 'c':
        case 'C':
            cout << "You earned a 70 to 79." << endl;
            break;
        case 'd':
        case 'D':
            cout << "You earned a 65 to 69." << endl;
            break;
        case 'f':
        case 'F':
        {
            cout << "You earned a 65 or less. You failed." << endl;
            char confirm {};
            cout << "Are you sure (Y/N)? ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') {
                cout << "You suck." << endl;
            }
            else if (confirm == 'n' || confirm == 'N') {
                cout << "Good." << endl;
            }
            else {
                cout << "Illegal choice." << endl;
            }
            break;
            
        }
        default:
            cout << "You entered an invalid letter grade." << endl;
    }
    
    return 0;
}
