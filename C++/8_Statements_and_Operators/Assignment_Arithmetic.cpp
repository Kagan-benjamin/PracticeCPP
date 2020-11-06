#include <iostream>
using namespace std;

int main() {
//    int num1 {10};  initialization, not assignment
//    int num2 {20};
//    
//    num1 = 100;  assignment
//  num1 = "Frank" // raises compiler type error
//    
//    cout << "num1 is " << num1 << endl;
//    cout << "num2 is " << num2 << endl << endl;

    int num1 {200};
    int num2 {100};
    
//    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl << endl;
    int result {0};
    
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;    
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    const double usd_per_euro {1.19};
    
    cout << "\nWelcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";
    double user_euros {0.00};
    double user_usd {0.00};
    cin >> user_euros;
    user_usd = user_euros * usd_per_euro;
    cout << "The value in USD is: $" << user_usd << endl << endl;
    
    return 0;
}