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