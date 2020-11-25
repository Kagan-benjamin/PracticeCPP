#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int num{100};
    int &ref{num};
    
    int test{69};
    int *test_ptr{&test};
    int &test_ref{*test_ptr};
    
    cout << "test: " << test << endl;
    cout << "test_ptr: " << test_ptr << endl;
    cout << "test_ref: " << test_ref << endl;
    test = 100;
    cout << "test = 100, test: " << test << endl;
    cout << "test_ptr: " << test_ptr << endl;
    cout << "test_ref: " << test_ref << endl;
    test_ref = 420;
    cout << "test_ref = 420, test: " << test << endl;
    cout << "test_ptr: " << test_ptr << endl;
    cout << "test_ref: " << test_ref << endl;
    
    
    cout << "\n--------------------------------------------" << endl;
    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;
    cout << "&num: " << &num << endl;
    cout << "&ref: " << &ref << endl;
    num = 200;
    cout << "\n----------num = 200-----------" << endl;
    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;
    ref = 300;
    cout << "\n----------ref = 300-----------" << endl;
    cout << "num: " << num << endl;
    cout << "ref: " << ref << endl;
    
    cout << "\n--------------------------------------" << endl;
    vector<string> stooges{"Larry","Moe","Curly"};
    cout << "Looping without reference variable, copies. str = Funny." << endl;
    for (auto str : stooges){
        str = "Funny";
    }
    for (auto str : stooges){
        cout << str << " ";
    }
    cout << endl;
    cout << "Looping with reference variable, actual. str = Funny." << endl;
    for (auto &str : stooges){
        str = "Funny";
    }
    for (auto const &str : stooges){
        cout << str << " ";
    }
    
    
    cout << endl;
    return 0;
}