#include <iostream>

using namespace std;

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0){
        throw 0;
    }
    if (miles < 0 || gallons < 0){
        throw string{"Negative Value Error"};
    }
    return static_cast<double>(miles) / gallons;
}

int main() {
    int miles{};
    int gallons{};
    double miles_per_gallon{};
    
    
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;
    
    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch(int &ex) {
        cerr << "Divide by 0 Error" << endl;
    }
    catch(string &ex) {
        cerr << ex << endl;
    }
    catch(...) {
        cerr << "Unknown Error" << endl;
    }
    
    cout << "Bye!" << endl;
    return 0;
}