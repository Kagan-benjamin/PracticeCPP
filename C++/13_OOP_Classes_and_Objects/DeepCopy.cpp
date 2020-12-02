#include <iostream>

using namespace std;

class Deep{
private:
    int *data;
public:
    void set_data_value(int d){*data = d;}
    int get_data_value(){return *data;}
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d){
    data = new int;
    *data = d;
    cout << "original constructor called" << endl;
}

Deep::~Deep(){
    delete data;
    cout << "destructor called" << endl;
}

Deep::Deep(const Deep &source)
    :Deep{*source.data} {        // delegate to Deep(int) and pass in the int
cout << "copy constructor called" << endl;
}                                // that source is pointing to (*source.data)

void display_deep(Deep s){
    cout << s.get_data_value() << endl;
}

int main(){
    Deep obj1 {100};
    display_deep(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);
    display_deep(obj2);
    display_deep(obj1);
    return 0;
}