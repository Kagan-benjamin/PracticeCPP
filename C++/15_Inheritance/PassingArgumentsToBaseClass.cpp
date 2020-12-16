#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
    Base() 
        : value{0} {
            cout << "Base no-args constructor" << endl;
    }
    Base(int x) 
        : value{x} {
            cout << "Base overloaded (int) constructor" << endl;
    }
    ~Base(){ cout << "Base Destructor" << endl; }
    
    void get_value() { cout << "value: " << value << endl; }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived() 
        : Base{}, doubled_value{0} {
            cout << "Derived no-args constructor" << endl;
    }
    Derived(int x) 
        : Base{x}, doubled_value{x*2} {
            cout << "Derived overloaded (int) constructor" << endl;
    }
    ~Derived() { cout << "Derived Destructor" << endl; }
    
    void get_value() { Base::get_value(); cout << "doubled_value: " << doubled_value << endl; }
};


int main() {
	
    Base base;             
    base.get_value();
    Base base1{100};  
    base1.get_value();
    Derived derived;  
    derived.get_value();
    Derived derived1{100};
    derived1.get_value();
    
    cout << endl << endl;
    return 0;
}