#include <iostream>
#include <memory>

class Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Base object" << std::endl;
    }
};

class Derived : public Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Derived object" << std::endl;
    }
};

void greetings(const Base &obj) {  // The function only specifies Base,
    std::cout << "Greetings: ";  // so without polymorphism it has no
    obj.say_hello();            // way to call Derived::say_hello()
}


int main() {
	std::cout << "Direct invocation of individual class methods:" << std::endl;
    
    Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    std::cout << "--------------------------Utility Functions------------------------" << std::endl;
    greetings(b);
//  greetings(d)   Will call Base::say_hello(), not Derived

    Base *ptr = new Derived();
    ptr->say_hello();   // compiler will statically bind to Base::say_hello()
    
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello();  // even with a smart pointer, statically bound
    
    
    delete ptr;
    std::cout << std::endl;
    return 0;
}