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
    
    // Copy Constructor
    Base(const Base &other)
        : value {other.value} {
            cout << "Base copy constructor" << endl;
    }
    
    // Assignment Operator
    Base &operator=(const Base &rhs) {
        cout << "Base operator= assigning" << endl;
        if (this == &rhs){
            return *this;
        }
        value = rhs.value;
        return *this;
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
    
    // Copy Constructor
    Derived(const Derived &other)
        : Base(other), doubled_value{other.doubled_value} {
            cout << "Derived copy constructor" << endl;
    }
    // Assignment Operator
    Derived &operator=(const Derived &rhs) {
        cout << "Derived operator=" << endl;
        if (this == &rhs){
            return *this;
        }
        Base::operator=(rhs);   // delegate Base data to Base operator=
        doubled_value = rhs.doubled_value; // directly handle Derived 
        return *this;
    }
    
    ~Derived() { cout << "Derived Destructor" << endl; }
    
    void get_value() { Base::get_value(); cout << "doubled_value: " << doubled_value << endl; }
};


int main() {
	
    Base b {100}; // overloaded constructor
    Base b1 {b};  // copy constructor
    b = b1;       // assignment operator=
    
    Derived d{100};
    Derived d1{d};
    d = d1;
    
    cout << endl;
    return 0;
}