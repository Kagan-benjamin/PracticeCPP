#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int);
void print(double);
void print(char);
void print(string);
void print(string, string);
void print(vector<string>);


int main() {
	
    print(100);
    print('A');      // produces ascii code without char overload version
    print(123.5);
    print("Ben");
    print("C-style String");
    string s {"This is a C++ String"};
    print(s);
    
    vector<string> v{"Oh","hi","there","Mark"};
    print(v);
    
    cout << endl;
    return 0;
}


void print(int num){
    cout << "Printing integer: " << num << endl;
}

void print(char c){
    cout << "Printing integer: " << c << endl;
}

void print(double num){
    cout << "Printing double: " << num << endl;
}

void print(string s){
    cout << "Printing string: " << s << endl;
}

//void print(string s1, string s2){
//    
//}

void print(vector<string> v){
    cout << "Printing vector component strings: " << endl;
    for (auto s : v){   
        cout << s << endl;
    }
}

/*  Function Overloading Exercise:  

#include <iostream>
#include <cmath>
using namespace std;

int find_area(int);
double find_area(double, double);

void area_calc() {
    
    int square_area{find_area(2)};
    double rectangle_area{find_area(4.5,2.3)};

    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----

int find_area(int s){
    return pow(s,2);
}

double find_area(double l, double w){
    return l * w;
}

*/