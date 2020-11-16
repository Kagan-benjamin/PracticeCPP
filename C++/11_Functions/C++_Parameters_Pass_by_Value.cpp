#include <iostream>
#include <string>
#include <vector>
using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

int main() {
	int num{10};
    
    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);   // does not change original value, copy
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "------------------------------------------------------------" << endl;
    string name{"Benjamin"};
    cout << "name before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);  // does not change objects either
    cout << "name after calling pass_by_value2: " << name << endl;
    
    cout << "------------------------------------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "stooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges); // no change to string objects
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);
    
    cout << endl;
    return 0;
}

void pass_by_value1(int num){
    num = 1000;            // the function only alters a copy 
}                           

void pass_by_value2(string s){
    s = "Changed";         // operates the same way with objects
}

void pass_by_value3(vector<string> v){
    v.clear(); // delete all vector elements
}

void print_vector(vector<string> v){
    for (auto s : v){
        cout << s << " ";  // operates the same way with vector of strings
    }
    cout << endl;
}

/* Function Parameters Exercise:

#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double f);
double fahrenheit_to_kelvin(double f);

void temperature_conversion(double fahrenheit_temperature) {
  
    double celsius_temperature{fahrenheit_to_celsius(fahrenheit_temperature)};
    double kelvin_temperature{fahrenheit_to_kelvin(fahrenheit_temperature)};

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

double fahrenheit_to_celsius(double f){
    return round((5.0/9.0) * (f - 32));
}

double fahrenheit_to_kelvin(double f){
    return round(fahrenheit_to_celsius(f) + 273);
}

*/