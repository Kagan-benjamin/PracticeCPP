#include <iostream>
using namespace std;

int main() {
    
    char selection{};
    do {
        cout << "\n-------------------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Perhaps do this" << endl;
        cout << "4. Or maybe do something else" << endl;
        cout << "q/Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        switch (selection){
            case '1' : 
                cout << "\nYou've done this." << endl;
                break;
            case '2' : 
                cout << "\nYou've done that." << endl;
                break;
            case '3' : 
                cout << "\nPerhaps you've done this." << endl;
                break;
            case '4' : 
                cout << "\nYou've done something else." << endl;
                break;
            case 'q' :
            case 'Q' : 
                cout << "Goodbye!" << endl;
                break;
            default : 
                cout << "\nNot a valid selection, please try again: ";
        }
    } while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
}