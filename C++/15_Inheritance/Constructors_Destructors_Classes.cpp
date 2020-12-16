#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
    Base() : value{0} { cout << "Base no-args constructor" << endl; }
    Base(int x) : value{x} { cout << "Base (int) overloaded constructor" << endl; }
    ~Base() { cout << "Base destructor" << endl; }
    
    void get_value() { cout << "value of this base is: " << value << endl; }
};

class Derived : public Base {
    // using Base::Base;  would cause Derived to inherit constructors
    // and initialize Base data, however will not initialize doub_value 
private:
    int doubled_value;
public:
    Derived() : doubled_value{0} { cout << "Derived no-args constructor" << endl; }
    Derived(int x) : doubled_value{x*2} { cout << "Derived (int) overloaded constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
    
    void get_doubled_value() { cout << "double_value of this base is: " << doubled_value << endl; }
};


int main() {
    Base base;
    base.get_value();
    Base base2{100};
    base2.get_value();
    
    Derived derived;
    derived.get_value();
    derived.get_doubled_value();
    Derived derived2{150};
    derived2.get_value();
    derived2.get_doubled_value();
    
    cout << endl;
    return 0;
}