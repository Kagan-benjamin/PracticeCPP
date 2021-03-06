#include <iostream>
#include <memory>

class Test {
private:
    int data;
public:
    Test() : data{0} {std::cout << "\tTest no-args Constructor (" << data << ")" << std::endl; }
    Test(int data) : data{data} {std::cout << "\tTest overloaded Constructor (" << data << ")" << std::endl; }
    ~Test() {std::cout << "\tTest Destructor (" << data << ")" << std::endl; }

    int get_data() const {return data;}
};

void my_deleter(Test *ptr) {
    std::cout << "\tUsing my custom function deleter" << std::endl;
    delete ptr;
}

int main() {
    // Using a function:
    {
        std::shared_ptr<Test> ptr1(new Test{100}, my_deleter);
    }
    std::cout << "--------------------------------------------" << std::endl;
	// Using a Lambda expression:
    {   
        std::shared_ptr<Test> ptr2(new Test{200},
            [] (Test *ptr) {
                std::cout << "\tUsing my custom lambda deleter" << std::endl;
                delete ptr;
            });
    }
    
    
    std::cout << std::endl;
    return 0;
}
