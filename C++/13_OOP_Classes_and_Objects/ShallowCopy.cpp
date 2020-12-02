#include <iostream>

using namespace std;

class Shallow{
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;        // allocate storage
    *data = d;
    cout << "Original constructor" << endl;
}

Shallow::Shallow(const Shallow &source)
    : data(source.data){    // shallow copy, only the pointer is copied 
        cout << "Copy constructor - shallow copy" << endl;
}                           // Problem: source and the newly created object
                            // BOTH point to the SAME data area!

Shallow::~Shallow(){ 
    delete data;           // free storage 
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s){
    cout << s.get_data_value() << endl;
}

int main(){
    Shallow obj1 {100};
    display_shallow(obj1);    

    Shallow obj2 {obj1};
    obj2.set_data_value(1000);
    display_shallow(obj2);
    display_shallow(obj1);  // value for obj1 has been changed

    return 0;
}