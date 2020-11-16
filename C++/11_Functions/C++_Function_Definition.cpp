#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void area_circle(double r){
    cout << "Area: " << (M_PI * (r * r));
    return;
}

void volume_cylinder(double r, double h){
    cout << "Volume: " << (M_PI * (r * r) * h);
    return;
}

double test_calc(double x){
    return (x * x * x);
}


int main() {
        
    cout << "Please enter the radius of your circle: ";
    double radius{};
    cin >> radius;
    area_circle(radius);
    
    cout << "\nPlease enter the radius and height of your cylinder separated by a space: ";
    double r{};
    double h{};
    cin >> r >> h;
    
    volume_cylinder(r, h);
    
    cout << "\nPlease enter test calc double: ";
    double x{};
    cin >> x;
    cout << "Test Calculation: " << test_calc(x) << endl;
    
//    cin.clear();
//    cin.sync();
//    string test_string{};
//    cout << "\nPlease enter test string: ";
//    getline(cin, test_string);
//    cout << "\nYour test string is: " << test_string << endl << endl;
//    
//    cout << "Further testing, integer: ";
//    int test_a{};
//    cin >> test_a;
//    cout << "\nYou entered: " << test_a;
//    cout << "Further testing, string: ";
//    cin.clear();
//    cin.sync();
//    string test_b{};
//    getline(cin, test_b);
//    cout << "\nYou entered: " << test_b << endl;
       
    cout << endl;  
    return 0;
}