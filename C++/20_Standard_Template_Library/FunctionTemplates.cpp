#include <iostream>
#include <string>
using namespace std;

template <typename T>
T testmin(T a,T b) {
    return (a < b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a,T2 b) {
    cout << a << " " << b << endl;
}

struct Person {
    string name;
    int age;
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ": " << p.age;
    return os;
}

template <typename T>
void my_swap(T &a,T &b) {
    T temp = a;
    a = b;
    b = temp;
}


int main() {
    int x{100};
    int y{200};
    func(x,y);
    my_swap(x,y);
    func(x,y);
    
    Person p1{"Curly",50};
    Person p2{"Moe",30};
    
    Person p3 = testmin(p1,p2);
    
    cout << p3.name << " is younger." << endl;
    cout << testmin<int>(2,3) << endl;
    cout << testmin(2,3) << endl;
    cout << testmin('A','B') << endl;
    cout << testmin(12.5,9.2) << endl;
    cout << testmin(5+2*2,7+40) << endl;
    
    cout << "\n-----------------------------------------" << endl;
    func(p1,p2);
    func<int,int>(10,20);
    func(10,20);
    func<char,double>('A',12.4);
    func('A',12.4);
    func(1000,"Testing");
    func(2000, string{"Ben"});
    
	cout << endl;
    return 0;
}