#include <iostream>

using namespace std;


class Base {       // Note that friends of Base have access to all
public:
    int a{0};
    void display(){std::cout << a << ", " << b << ", " << c << endl;} 
protected:               // member method has access to all
    int b{0};
private:
    int c{0};
};            

class Derived : public Base { // friends of Derived only have access to
                              // data accessible to Derived
    // a will be public
    // b will be protected
    // c will be private
public:
    void access_base_member(){
        a = 100;  // OK
        b = 200;  // member function so access is OK
    //  c = 300;  // Not accessible, need a getter/setter from Base class
    }
};        

int main() {
	cout << "--- Base Member Access from Base Objects ---" << endl;
    Base base;
    base.a = 100;  // OK
//  base.b = 200;  // Protected, no access to objects like private, error
//  base.c = 300;  // Private, compiler error
    base.display();
    cout << "--- Base Member Access from Derived Objects ---" << endl;
    Derived d;
    d.a = 450;   // OK
//  d.b = 200;   // Protected, no access to objects like private, error
//  d.c = 300;   // Private, compiler error
    d.display();
    
    
    cout << endl;
    return 0;
}